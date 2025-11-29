`timescale 1ns / 1ps

module InstructionMemory(
    output reg [31:0] Data,
    input  wire [63:0] Address
);
    parameter T_rd = 20;
    parameter MemSize = 40;

    always @(*) begin
        case (Address)
            // =========================
            // Test Program 1 (spec)
            // =========================
            64'h000: Data = 32'hF84003E9; // LDUR X9,  [XZR, 0x0]
            64'h004: Data = 32'hF84083EA; // LDUR X10, [XZR, 0x8]
            64'h008: Data = 32'hF84103EB; // LDUR X11, [XZR, 0x10]
            64'h00C: Data = 32'hF84183EC; // LDUR X12, [XZR, 0x18]
            64'h010: Data = 32'hF84203ED; // LDUR X13, [XZR, 0x20]
            64'h014: Data = 32'hAA0B014A; // ORR X10, X10, X11
            64'h018: Data = 32'h8A0A018C; // AND X12, X12, X10
            64'h01C: Data = 32'hB400008C; // CBZ X12, end
            64'h020: Data = 32'h8B0901AD; // ADD X13, X13, X9
            64'h024: Data = 32'hCB09018C; // SUB X12, X12, X9
            64'h028: Data = 32'h17FFFFFD; // B loop
            64'h02C: Data = 32'hF80203ED; // STUR X13, [XZR, 0x20]
            64'h030: Data = 32'hF84203ED; // LDUR X13, [XZR, 0x20]

            // =========================
            // Test Program 2 (MOVZ build + store/load)
            // =========================
            64'h034: Data = 32'hD2E24689; // MOVZ X9,  0x1234 << 48
            64'h038: Data = 32'hD2CACF0A; // MOVZ X10, 0x5678 << 32
            64'h03C: Data = 32'hAA0A0129; // ORR X9, X9, X10
            64'h040: Data = 32'hD2B3578A; // MOVZ X10, 0x9ABC << 16
            64'h044: Data = 32'hAA0A0129; // ORR X9, X9, X10
            64'h048: Data = 32'hD29BDE0A; // MOVZ X10, 0xDEF0 << 0
            64'h04C: Data = 32'hAA0A0129; // ORR X9, X9, X10
            64'h050: Data = 32'hF80283E9; // STUR X9,  [XZR, 0x28]
            64'h054: Data = 32'hF84283EA; // LDUR X10, [XZR, 0x28]

            default: Data = 32'h00000000;
        endcase
    end
endmodule
