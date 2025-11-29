`timescale 1ns / 1ps
`default_nettype none

module tb_mux2to1_8;

    // Testbench signals
    reg  [7:0] in0;
    reg  [7:0] in1;
    reg        sel;
    wire [7:0] out;

    // Instantiate DUT
    mux2to1_8 dut (
        .in0(in0),
        .in1(in1),
        .sel(sel),
        .out(out)
    );

    integer i, j;
    integer pass_count = 0;
    integer fail_count = 0;

    // VCD dump for waveform viewing
    initial begin
        $dumpfile("tb_mux2to1_8.vcd");
        $dumpvars(0, tb_mux2to1_8);
    end

    // Exhaustive testing
    initial begin
        for (i = 0; i < 256; i = i + 1) begin
            in0 = i[7:0];
            for (j = 0; j < 256; j = j + 1) begin
                in1 = j[7:0];

                // sel = 0 test
                sel = 0;
                #5;
                if (out === in0) pass_count = pass_count + 1;
                else fail_count = fail_count + 1;

                // sel = 1 test
                sel = 1;
                #5;
                if (out === in1) pass_count = pass_count + 1;
                else fail_count = fail_count + 1;
            end
        end

        $display("Simulation complete!");
        $display("Total passes: %0d", pass_count);
        $display("Total fails:  %0d", fail_count);

        if (fail_count == 0)
            $display("All outputs correct!");
        else
            $display("Some outputs incorrect!");

        $finish;
    end

endmodule
