`timescale 1ns / 1ps

module tb_SC_Control;

    // DUT connections
    reg  [10:0] opcode;
    wire        Reg2Loc, ALUSrc, MemtoReg, RegWrite, MemRead, MemWrite, Branch, Uncondbranch;
    wire [3:0]  ALUOp;
    wire [1:0]  SignOp;

    integer i, error_count;

    // Instantiate the DUT
    SC_Control dut (
        .Reg2Loc(Reg2Loc),
        .ALUSrc(ALUSrc),
        .MemtoReg(MemtoReg),
        .RegWrite(RegWrite),
        .MemRead(MemRead),
        .MemWrite(MemWrite),
        .Branch(Branch),
        .Uncondbranch(Uncondbranch),
        .ALUOp(ALUOp),
        .SignOp(SignOp),
        .opcode(opcode)
    );

    // -------------------------------
    // Helper task to check expectations
    // -------------------------------
    task check_outputs;
        input [10:0] op;
        input exp_Reg2Loc, exp_ALUSrc, exp_MemtoReg, exp_RegWrite;
        input exp_MemRead, exp_MemWrite, exp_Branch, exp_Uncondbranch;
        input [3:0] exp_ALUOp;
        input [1:0] exp_SignOp;
        begin
            #1; // small delay for outputs to settle
            if (Reg2Loc      !== exp_Reg2Loc      ||
                ALUSrc       !== exp_ALUSrc       ||
                MemtoReg     !== exp_MemtoReg     ||
                RegWrite     !== exp_RegWrite     ||
                MemRead      !== exp_MemRead      ||
                MemWrite     !== exp_MemWrite     ||
                Branch       !== exp_Branch       ||
                Uncondbranch !== exp_Uncondbranch ||
                ALUOp        !== exp_ALUOp        ||
                SignOp       !== exp_SignOp) begin
                    $display("ERROR: opcode=%b mismatch!", op);
                    $display(" Got     R2L=%b AS=%b M2R=%b RW=%b MR=%b MW=%b Br=%b UB=%b ALU=%b Sign=%b",
                        Reg2Loc, ALUSrc, MemtoReg, RegWrite, MemRead, MemWrite, Branch, Uncondbranch, ALUOp, SignOp);
                    $display(" ExpectedR2L=%b AS=%b M2R=%b RW=%b MR=%b MW=%b Br=%b UB=%b ALU=%b Sign=%b\n",
                        exp_Reg2Loc, exp_ALUSrc, exp_MemtoReg, exp_RegWrite, exp_MemRead, exp_MemWrite,
                        exp_Branch, exp_Uncondbranch, exp_ALUOp, exp_SignOp);
                    error_count = error_count + 1;
            end
        end
    endtask


    initial begin
        $dumpfile("SC_Control_tb.vcd");
        $dumpvars(0, tb_SC_Control);

        error_count = 0;

        // ===============================
        // Test R-type opcodes
        // ===============================
        opcode = 11'b10001010000; check_outputs(opcode, 0,0,0,1,0,0,0,0,4'b0000,2'b00); // AND
        opcode = 11'b10101010000; check_outputs(opcode, 0,0,0,1,0,0,0,0,4'b0001,2'b00); // ORR
        opcode = 11'b10001011000; check_outputs(opcode, 0,0,0,1,0,0,0,0,4'b0010,2'b00); // ADD
        opcode = 11'b11001011000; check_outputs(opcode, 0,0,0,1,0,0,0,0,4'b0110,2'b00); // SUB

        // ===============================
        // Test I-type opcodes (don't-care expansion)
        // ===============================
        for (i = 0; i < 2; i = i + 1) begin
            opcode = {10'b1001000100, i[0]};
            check_outputs(opcode, 0,1,0,1,0,0,0,0,4'b0010,2'b00); // ADDI
        end
        for (i = 0; i < 2; i = i + 1) begin
            opcode = {10'b1101000100, i[0]};
            check_outputs(opcode, 0,1,0,1,0,0,0,0,4'b0110,2'b00); // SUBI
        end

        // ===============================
        // MOVZ opcodes (don't-care expansion)
        // ===============================
        for (i = 0; i < 4; i = i + 1) begin
            opcode = {9'b110100101, i[1:0]};
            check_outputs(opcode, 0,1,0,1,0,0,0,0,4'b0111,2'b00);
        end

        // ===============================
        // Branches with wildcards
        // ===============================
        for (i = 0; i < 32; i = i + 1) begin
            opcode = {6'b000101, i[4:0]};
            check_outputs(opcode, 0,0,0,0,0,0,0,1,4'b0000,2'b11); // B
        end
        for (i = 0; i < 8; i = i + 1) begin
            opcode = {8'b10110100, i[2:0]};
            check_outputs(opcode, 1,0,0,0,0,0,1,0,4'b0111,2'b10); // CBZ
        end

        // ===============================
        // Load / Store (no don't-cares)
        // ===============================
        opcode = 11'b11111000010; check_outputs(opcode, 0,1,1,1,1,0,0,0,4'b0010,2'b01); // LDUR
        opcode = 11'b11111000000; check_outputs(opcode, 1,1,0,0,0,1,0,0,4'b0010,2'b01); // STUR

        // ===============================
        // Random undefined opcodes
        // ===============================
        repeat (10) begin
            opcode = $random;
            if (!(
                opcode === 11'b10001010000 ||
                opcode === 11'b10101010000 ||
                opcode === 11'b10001011000 ||
                opcode === 11'b11001011000 ||
                opcode[10:1] === 10'b1001000100 ||
                opcode[10:1] === 10'b1101000100 ||
                opcode[10:2] === 9'b110100101 ||
                opcode[10:5] === 6'b000101 ||
                opcode[10:3] === 8'b10110100 ||
                opcode === 11'b11111000010 ||
                opcode === 11'b11111000000
            )) begin
                check_outputs(opcode,0,0,0,0,0,0,0,0,4'b0000,2'b00);
            end
        end

        if (error_count == 0)
            $display("All tests PASSED");
        else
            $display("Total errors: %0d ❌", error_count);

        $finish;
    end

endmodule
