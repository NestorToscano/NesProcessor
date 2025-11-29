`timescale 1ns / 1ps

// =========================
// Opcode Definitions
// =========================
`define OPCODE_ANDREG 11'b10001010000
`define OPCODE_ORRREG 11'b10101010000
`define OPCODE_ADDREG 11'b10001011000
`define OPCODE_SUBREG 11'b11001011000

`define OPCODE_ADDIMM 11'b1001000100?
`define OPCODE_SUBIMM 11'b1101000100?

`define OPCODE_MOVZ   11'b110100101??

`define OPCODE_B      11'b000101?????
`define OPCODE_CBZ    11'b10110100???
`define OPCODE_LDUR   11'b11111000010
`define OPCODE_STUR   11'b11111000000

// =========================
// SC_Control
// =========================
module SC_Control(
    output reg IsMovz,
    output reg       Reg2Loc,
    output reg       ALUSrc,
    output reg       MemtoReg,
    output reg       RegWrite,
    output reg       MemRead,
    output reg       MemWrite,
    output reg       Branch,
    output reg       Uncondbranch,
    output reg [3:0] ALUOp,
    output reg [1:0] SignOp,
    input  wire [10:0] opcode
);

    // ALUOp encodings :
    // 4'b0000 = AND, 4'b0001 = ORR, 4'b0010 = ADD, 4'b0110 = SUB, 4'b0111 = PassB
    // 2'b00 = I-type (ADD/SUB imm), 2'b01 = D-type (LDUR/STUR),
    // 2'b10 = CB-type (CBZ),        2'b11 = B-type (B)
    
    always @(*) begin
        IsMovz = 1'b0;
        // -------- Safe defaults (undefined opcodes -> all zeros) --------
        Reg2Loc      = 1'b0;
        ALUSrc       = 1'b0;
        MemtoReg     = 1'b0;
        RegWrite     = 1'b0;
        MemRead      = 1'b0;
        MemWrite     = 1'b0;
        Branch       = 1'b0;
        Uncondbranch = 1'b0;
        ALUOp        = 4'b0000;
        SignOp       = 2'b00;

        casez (opcode)
            // =========================
            // Load / Store
            // =========================
            `OPCODE_LDUR: begin
                ALUSrc       = 1'b1;         // base + offset
                MemtoReg     = 1'b1;         // write memory data to reg
                RegWrite     = 1'b1;
                MemRead      = 1'b1;
                ALUOp        = 4'b0010;      // ADD
                SignOp       = 2'b01;        // D-type immediate
            end

            `OPCODE_STUR: begin
                Reg2Loc      = 1'b1;         // use Rt field as second read reg
                ALUSrc       = 1'b1;         // base + offset
                MemWrite     = 1'b1;
                ALUOp        = 4'b0010;      // ADD
                SignOp       = 2'b01;        // D-type immediate
            end

            // =========================
            // R-type (register) ops
            // =========================
            `OPCODE_ADDREG: begin
                RegWrite     = 1'b1;
                ALUOp        = 4'b0010;      // ADD
            end

            `OPCODE_SUBREG: begin
                RegWrite     = 1'b1;
                ALUOp        = 4'b0110;      // SUB
            end

            `OPCODE_ANDREG: begin
                RegWrite     = 1'b1;
                ALUOp        = 4'b0000;      // AND
            end

            `OPCODE_ORRREG: begin
                RegWrite     = 1'b1;
                ALUOp        = 4'b0001;      // ORR
            end

            // =========================
            // I-type (immediate) ops
            // =========================
            `OPCODE_ADDIMM: begin
                ALUSrc       = 1'b1;         // use immediate
                RegWrite     = 1'b1;
                ALUOp        = 4'b0010;      // ADD
                SignOp       = 2'b00;        // I-type immediate
            end

            `OPCODE_SUBIMM: begin
                ALUSrc       = 1'b1;         // use immediate
                RegWrite     = 1'b1;
                ALUOp        = 4'b0110;      // SUB
                SignOp       = 2'b00;        // I-type immediate
            end

            // =========================
            // MOVZ (move wide with zero)
            // =========================
            `OPCODE_MOVZ: begin
                IsMovz = 1'b1;
                ALUSrc       = 1'b1;         // use immediate (zero-extended/shifted in datapath)
                RegWrite     = 1'b1;
                ALUOp        = 4'b0111;      // PassB (write immediate directly)
                SignOp       = 2'b00;
            end

            // =========================
            // Branches
            // =========================
            `OPCODE_CBZ: begin
                Reg2Loc      = 1'b1;         // read Rt to test against zero
                Branch       = 1'b1;         // conditional branch enable
                ALUOp        = 4'b0111;      // PassB (forward register value to zero-check)
                SignOp       = 2'b10;        // CB-type immediate
            end

            `OPCODE_B: begin
                Uncondbranch = 1'b1;         // unconditional branch
                // ALU not used for target calc in this simple SC; PC update logic uses SignExt
                SignOp       = 2'b11;        // B-type immediate
            end

            default: begin
                // keep safe defaults (all zeros)
            end
        endcase
    end
endmodule
