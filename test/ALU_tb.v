`timescale 1ns/1ps

module tb_ALU;

    // Inputs
    reg [63:0] BusA;
    reg [63:0] BusB;
    reg [3:0]  ALUCtrl;

    // Output
    wire [63:0] BusW;
    wire        Zero;

    // Instantiate the ALU
    ALU uut (
        .BusW(BusW),
        .BusA(BusA),
        .BusB(BusB),
        .ALUCtrl(ALUCtrl),
        .Zero(Zero)
    );

    // Test variables
    integer i;
    reg [63:0] expected;
    integer errors;

    // Individual ALU operation registers (Option 2)
    reg [3:0] alu0, alu1, alu2, alu3, alu4;

    initial begin
        errors = 0;

        // Assign ALU operation values
        alu0 = `AND;
        alu1 = `OR;
        alu2 = `ADD;
        alu3 = `SUB;
        alu4 = `PassB;

        // VCD dump
        $dumpfile("ALU_tb.vcd");
        $dumpvars(0, tb_ALU);
        $display("VCD file will be generated as: ALU_tb.vcd");

        // -------------------------------
        // Test all ALU functions
        // -------------------------------
        for (i = 0; i < 5; i = i + 1) begin
            case(i)
                0: ALUCtrl = alu0;
                1: ALUCtrl = alu1;
                2: ALUCtrl = alu2;
                3: ALUCtrl = alu3;
                4: ALUCtrl = alu4;
            endcase

            // Random tests
            repeat(100) begin
                BusA = {$random, $random}; // 64-bit random
                BusB = {$random, $random};

                #1; // small delay for BusW to update

                // Compute expected value
                case(ALUCtrl)
                    `AND:    expected = BusA & BusB;
                    `OR:     expected = BusA | BusB;
                    `ADD:    expected = BusA + BusB;
                    `SUB:    expected = BusA - BusB;
                    `PassB:  expected = BusB;
                    default: expected = 64'b0;
                endcase

                // Check result
                if (BusW !== expected) begin
                    $display("ERROR: ALUCtrl=%b, BusA=%h, BusB=%h, BusW=%h, Expected=%h", 
                             ALUCtrl, BusA, BusB, BusW, expected);
                    errors = errors + 1;
                end

                // Check Zero flag
                if (Zero !== (expected == 64'b0)) begin
                    $display("ERROR ZERO FLAG: ALUCtrl=%b, BusA=%h, BusB=%h, BusW=%h, Zero=%b", 
                             ALUCtrl, BusA, BusB, BusW, Zero);
                    errors = errors + 1;
                end
            end

            // -------------------------------
            // All ones / all zeros tests
            // -------------------------------
            BusA = 64'hFFFFFFFFFFFFFFFF; BusB = 64'hFFFFFFFFFFFFFFFF; #1;
            expected = (ALUCtrl == `AND) ? BusA & BusB :
                       (ALUCtrl == `OR)  ? BusA | BusB :
                       (ALUCtrl == `ADD) ? BusA + BusB :
                       (ALUCtrl == `SUB) ? BusA - BusB :
                       BusB;
            if (BusW !== expected) begin
                $display("ERROR (all ones): ALUCtrl=%b, BusW=%h, Expected=%h", ALUCtrl, BusW, expected);
                errors = errors + 1;
            end

            BusA = 64'b0; BusB = 64'b0; #1;
            expected = (ALUCtrl == `AND) ? BusA & BusB :
                       (ALUCtrl == `OR)  ? BusA | BusB :
                       (ALUCtrl == `ADD) ? BusA + BusB :
                       (ALUCtrl == `SUB) ? BusA - BusB :
                       BusB;
            if (BusW !== expected) begin
                $display("ERROR (all zeros): ALUCtrl=%b, BusW=%h, Expected=%h", ALUCtrl, BusW, expected);
                errors = errors + 1;
            end

            // -------------------------------
            // Force Zero flag tests
            // -------------------------------
            BusA = 64'b0; BusB = (ALUCtrl == `PassB) ? 64'b0 : 64'b0; #1;
            expected = (ALUCtrl == `AND) ? BusA & BusB :
                       (ALUCtrl == `OR)  ? BusA | BusB :
                       (ALUCtrl == `ADD) ? BusA + BusB :
                       (ALUCtrl == `SUB) ? BusA - BusB :
                       BusB;
            if (Zero !== 1'b1) begin
                $display("ERROR ZERO FLAG expected 1: ALUCtrl=%b, BusA=%h, BusB=%h, BusW=%h, Zero=%b", ALUCtrl, BusA, BusB, BusW, Zero);
                errors = errors + 1;
            end

            BusA = 64'b1; BusB = 64'b1; #1;
            expected = (ALUCtrl == `AND) ? BusA & BusB :
                       (ALUCtrl == `OR)  ? BusA | BusB :
                       (ALUCtrl == `ADD) ? BusA + BusB :
                       (ALUCtrl == `SUB) ? BusA - BusB :
                       BusB;
            if (Zero !== (expected == 64'b0)) begin
                $display("ERROR ZERO FLAG expected 0: ALUCtrl=%b, BusA=%h, BusB=%h, BusW=%h, Zero=%b", ALUCtrl, BusA, BusB, BusW, Zero);
                errors = errors + 1;
            end

            // -------------------------------
            // Overflow test for ADD
            // -------------------------------
            if (ALUCtrl == `ADD) begin
                BusA = 64'h7FFFFFFFFFFFFFFF; // max positive
                BusB = 64'h1;                // cause overflow
                #1;
                expected = BusA + BusB;
                if (BusW !== expected) begin
                    $display("ERROR ADD overflow test: BusW=%h, Expected=%h", BusW, expected);
                    errors = errors + 1;
                end
            end
        end

        // -------------------------------
        // Final message
        // -------------------------------
        if (errors == 0) begin
            $display("All ALU tests passed!");
        end else begin
            $display("Total ALU errors: %0d", errors);
        end

        $finish;
    end

endmodule