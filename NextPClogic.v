`timescale 1ns/1ps

module NextPClogic(
    output reg [63:0] NextPC,
    input  [63:0] CurrentPC,
    input  [63:0] SignExtImm64,
    input         Branch,
    input         ALUZero,
    input         Uncondbranch
);

always @(*) begin
    // Default: sequential next PC
    NextPC = CurrentPC + 64'd4;

    // Conditional branch
    if (Branch && ALUZero) begin
        NextPC = CurrentPC + SignExtImm64;
    end

    // Unconditional branch overrides everything
    if (Uncondbranch) begin
        NextPC = CurrentPC + SignExtImm64;
    end
end

endmodule
