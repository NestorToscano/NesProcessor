`timescale 1ns/1ps

module tb_SignExtender;

    // Inputs
    reg [25:0] Instruction;
    reg [1:0]  SignOp;

    // Output
    wire [63:0] SignExOut;

    // Instantiate the Unit Under Test (UUT)
    SignExtender uut (
        .SignExOut(SignExOut),
        .Instruction(Instruction),
        .SignOp(SignOp)
    );

    // Test variables
    integer i;
    reg [63:0] expected;
    integer errors; // Counter for failed tests

    initial begin
        errors = 0;

        // VCD dump
        $dumpfile("SignExtender_tb.vcd");
        $dumpvars(0, tb_SignExtender);
        $display("VCD file will be generated as: SignExtender_tb.vcd");

        // -------------------------------
        // I-type tests (zero-extend bits [21:10])
        // -------------------------------
        SignOp = `Itype;
        for (i = 0; i < 100; i = i + 1) begin
            Instruction = $random;
            expected = {52'b0, Instruction[21:10]};
            #1;
            if (SignExOut !== expected) begin
                $display("ERROR I-type: Instruction=%b, SignExOut=%h, Expected=%h", Instruction, SignExOut, expected);
                errors = errors + 1;
            end
        end

        // -------------------------------
        // D-type tests (sign-extend bits [20:12])
        // -------------------------------
        SignOp = `Dtype;
        for (i = 0; i < 100; i = i + 1) begin
            Instruction = $random;
            expected = {{55{Instruction[20]}}, Instruction[20:12]};
            #1;
            if (SignExOut !== expected) begin
                $display("ERROR D-type: Instruction=%b, SignExOut=%h, Expected=%h", Instruction, SignExOut, expected);
                errors = errors + 1;
            end
        end

        // -------------------------------
        // CB-type tests (sign-extend bits [23:5], shift left 2)
        // -------------------------------
        SignOp = `CBtype;
        for (i = 0; i < 100; i = i + 1) begin
            Instruction = $random;
            expected = {{43{Instruction[23]}}, Instruction[23:5], 2'b00};
            #1;
            if (SignExOut !== expected) begin
                $display("ERROR CB-type: Instruction=%b, SignExOut=%h, Expected=%h", Instruction, SignExOut, expected);
                errors = errors + 1;
            end
        end

        // -------------------------------
        // B-type tests (sign-extend bits [25:0], shift left 2)
        // -------------------------------
        SignOp = `Btype;
        for (i = 0; i < 100; i = i + 1) begin
            Instruction = $random;
            expected = {{36{Instruction[25]}}, Instruction[25:0], 2'b00};
            #1;
            if (SignExOut !== expected) begin
                $display("ERROR B-type: Instruction=%b, SignExOut=%h, Expected=%h", Instruction, SignExOut, expected);
                errors = errors + 1;
            end
        end

        // -------------------------------
        // Final message
        // -------------------------------
        if (errors == 0) begin
            $display("All tests passed!");
        end else begin
            $display("Total errors: %0d", errors);
        end

        $finish;
    end

endmodule
