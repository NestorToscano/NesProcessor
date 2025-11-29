`timescale 1ns / 1ps

module mux2to1_64( // originally mux2to1_8
    input wire [63:0] in0,
    input wire [63:0] in1,
    input wire       sel,
    output reg [63:0] out
    );
    always @(*) begin
        out = sel ? in1 : in0;
    end
endmodule
