`timescale 1ns/1ps

module tb_NextPClogic;

    // Inputs
    reg [63:0] CurrentPC;
    reg [63:0] SignExtImm64;
    reg Branch;
    reg ALUZero;
    reg Uncondbranch;

    // Output
    wire [63:0] NextPC;

    // Instantiate the module
    NextPClogic uut (
        .NextPC(NextPC),
        .CurrentPC(CurrentPC),
        .SignExtImm64(SignExtImm64),
        .Branch(Branch),
        .ALUZero(ALUZero),
        .Uncondbranch(Uncondbranch)
    );

    integer i, errors;
    reg [63:0] expected;

    initial begin
        errors = 0;

        // Create VCD file
        $dumpfile("NextPC_tb.vcd");
        $dumpvars(0, tb_NextPClogic);
        $display("VCD file will be generated as: NextPC_tb.vcd");

        // Loop through all 8 combinations of the 3 control signals
        for (i = 0; i < 8; i = i + 1) begin
            Branch = i[2];
            ALUZero = i[1];
            Uncondbranch = i[0];

            // Perform 10 random tests for each combination
            repeat(10) begin
                CurrentPC = {$random, $random};
                SignExtImm64 = {$random, $random};

                #1; // small delay for combinational logic

                // Compute expected NextPC
                expected = CurrentPC + 64'd4; // default sequential
                if (Branch && ALUZero)
                    expected = CurrentPC + SignExtImm64;
                if (Uncondbranch)
                    expected = CurrentPC + SignExtImm64;

                // Check result
                if (NextPC !== expected) begin
                    $display("ERROR: CurrentPC=%h, SignExtImm64=%h, Branch=%b, ALUZero=%b, Uncondbranch=%b, NextPC=%h, Expected=%h",
                             CurrentPC, SignExtImm64, Branch, ALUZero, Uncondbranch, NextPC, expected);
                    errors = errors + 1;
                end
            end
        end

        // Final summary
        if (errors == 0)
            $display("All NextPClogic tests passed!");
        else
            $display("Total NextPClogic errors: %0d", errors);

        $finish;
    end

endmodule