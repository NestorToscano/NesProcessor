`timescale 1ns / 1ps

module RegisterFile(
    output wire [63:0] BusA,
    output wire [63:0] BusB,
    input  wire [63:0] BusW,
    input  wire [4:0]  RA,
    input  wire [4:0]  RB,
    input  wire [4:0]  RW,
    input  wire        RegWr,
    input  wire        Clk
);

    // ARMv8 has 32 64-bit registers (X0-X30 general, X31 = XZR)
    reg [63:0] registers [0:30]; // Registers X0-X30
    integer i;

    // Previous-cycle write capture (for 1-cycle-late bypass)
    reg [4:0]  last_rw;
    reg [63:0] last_data;
    reg        last_write_valid;

    // =========================
    // Initialization
    // =========================
    initial begin
        for (i = 0; i < 31; i = i + 1)
            registers[i] = 64'd0;
        last_rw = 5'd0;
        last_data = 64'd0;
        last_write_valid = 1'b0;
    end

    // =========================
    // Sequential write and capture
    // =========================
    always @(posedge Clk) begin
        if (RegWr && (RW != 5'd31)) begin
            registers[RW] <= BusW;
            last_rw <= RW;
            last_data <= BusW;
            last_write_valid <= 1'b1;
        end else begin
            last_write_valid <= 1'b0;
        end
    end

    // =========================
    // Safe register read helper (function)
    // =========================
    function [63:0] safe_read;
        input [4:0] addr;
        begin
            if (addr == 5'd31)              // XZR always 0
                safe_read = 64'd0;
            else if (addr > 5'd30)          // Out of range (shouldn't happen)
                safe_read = 64'dX;
            else
                safe_read = registers[addr]; // Normal read
        end
    endfunction

    // =========================
    // One-cycle-late bypass
    // =========================
    wire [63:0] readA, readB;

    assign readA = (last_write_valid && (RA == last_rw) && (RA != 5'd31)) ? last_data : safe_read(RA);
    assign readB = (last_write_valid && (RB == last_rw) && (RB != 5'd31)) ? last_data : safe_read(RB);

    // =========================
    // Outputs (with delay)
    // =========================
    assign #3 BusA = readA;
    assign #3 BusB = readB;

endmodule
