`timescale 1ns / 1ps
`default_nettype none

module tb_RegisterFile;

    reg  [63:0] BusW;
    reg  [4:0]  RA, RB, RW;
    reg         RegWr;
    reg         Clk;
    wire [63:0] BusA, BusB;

    // Instantiate the register file
    RegisterFile DUT (
        .BusA(BusA),
        .BusB(BusB),
        .BusW(BusW),
        .RA(RA),
        .RB(RB),
        .RW(RW),
        .RegWr(RegWr),
        .Clk(Clk)
    );

    integer i;
    reg [63:0] expected_regs [31:0];  // Local copy to track expected register values
    reg [63:0] random_value;

    // Clock generation
    initial Clk = 0;
    always #5 Clk = ~Clk;  // 10ns period

    initial begin
        // Initialize expected values to 0
        for (i = 0; i < 32; i = i + 1)
            expected_regs[i] = 64'd0;

        // Test each register with write enable ON
        for (i = 0; i < 32; i = i + 1) begin
            RW = i[4:0];
            RA = i[4:0];
            RB = i[4:0];
            random_value = $urandom;

            BusW = random_value;
            RegWr = 1;

            @(posedge Clk);  // Trigger write
            if (i != 31)
                expected_regs[i] = random_value;  // Update expected register except XZR

            // Wait for output delay (#3 inside DUT)
            #4;

            // Check read outputs
            if (BusA !== expected_regs[RA])
                $display("ERROR: RA=%0d, expected=%h, got=%h", RA, expected_regs[RA], BusA);
            if (BusB !== expected_regs[RB])
                $display("ERROR: RB=%0d, expected=%h, got=%h", RB, expected_regs[RB], BusB);
        end

        // Test with write enable OFF
        RegWr = 0;
        for (i = 0; i < 32; i = i + 1) begin
            RW = i[4:0];
            RA = i[4:0];
            RB = i[4:0];
            random_value = $urandom;
            BusW = random_value;

            @(posedge Clk);  // Attempted write, should be ignored

            // Wait for output delay (#3 inside DUT)
            #4;

            // Reads should return previous values (stored in expected_regs)
            if (BusA !== expected_regs[RA])
                $display("ERROR (WE=0): RA=%0d, expected=%h, got=%h", RA, expected_regs[RA], BusA);
            if (BusB !== expected_regs[RB])
                $display("ERROR (WE=0): RB=%0d, expected=%h, got=%h", RB, expected_regs[RB], BusB);
        end

        // Check XZR register 31
        RW = 5'd31; RA = 5'd31; RB = 5'd31; BusW = 64'hDEADBEEF; RegWr = 1;
        @(posedge Clk);
        #4;
        if (BusA !== 64'd0 || BusB !== 64'd0)
            $display("ERROR: XZR read not zero! BusA=%h, BusB=%h", BusA, BusB);

        $display("Testbench completed!");
        $finish;
    end

endmodule