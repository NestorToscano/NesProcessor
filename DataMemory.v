`timescale 1ns / 1ps

module DataMemory (
    output wire [63:0] ReadData,
    input  wire [63:0] Address,   
    input  wire [63:0] WriteData,
    input  wire        MemoryRead,
    input  wire        MemoryWrite,
    input  wire        Clock
);

    // 64-bit words, indexed by Address[10:3] (8-byte aligned)
    reg [63:0] mem [0:255];
    integer i;

    // Initialization for Program
    initial begin
        mem[0] = 64'd1;                        // at address 0x00
        mem[1] = 64'd10;                       // at address 0x08
        mem[2] = 64'd5;                        // at address 0x10
        mem[3] = 64'h0FFBEA7DEADBEEFF;         // at address 0x18
        for (i = 4; i < 256; i = i + 1)
            mem[i] = 64'd0;
    end

    // Compute 8-byte word index
    wire [7:0] idx = Address[10:3];

    // Combinational read (single-cycle)
    assign ReadData = MemoryRead ? mem[idx] : 64'd0;

    // Sequential write
    always @(posedge Clock) begin
        if (MemoryWrite)
            mem[idx] <= WriteData;
    end


endmodule
