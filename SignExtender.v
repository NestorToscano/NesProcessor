`timescale 1ns/1ps

// Sign extension mode encodings
`define Itype   2'b00
`define Dtype   2'b01
`define CBtype  2'b10
`define Btype   2'b11

module SignExtender(
    output reg [63:0] SignExOut,
    input  wire [25:0] Instruction,
    input  wire [1:0]  SignOp,
    input  wire        IsMovz
);
    reg [1:0]  hw;
    reg [15:0] imm16;

    always @(*) begin
        // Default values to prevent latch inference
        hw        = 2'b00;
        imm16     = 16'd0;
        SignExOut = 64'd0;

        if (IsMovz) begin
            // ============================
            // MOVZ: IM-format (zero-extend + shift by hw*16)
            // ============================
            imm16 = Instruction[20:5];
            hw    = Instruction[22:21];
            SignExOut = {48'd0, imm16} << (hw * 16);
        end
        else begin
            case (SignOp)
                // ============================
                // I-type (ADDI, SUBI)
                // ============================
                `Itype: begin
                    SignExOut = {{52{Instruction[21]}}, Instruction[21:10]};
                end

                // ============================
                // D-type (LDUR, STUR)
                // ============================
                `Dtype: begin
                    SignExOut = {{55{Instruction[20]}}, Instruction[20:12]};
                end

                // ============================
                // CB-type (CBZ)
                // imm19 = bits [23:5], shift left 2
                // ============================
                `CBtype: begin
                    SignExOut = {{43{Instruction[23]}}, Instruction[23:5], 2'b00};
                end

                // ============================
                // B-type (B)
                // imm26 = bits [25:0], shift left 2
                // ============================
                `Btype: begin
                    SignExOut = {{36{Instruction[25]}}, Instruction[25:0], 2'b00};
                end

                default: begin
                    SignExOut = 64'd0;
                end
            endcase
        end
    end
endmodule
