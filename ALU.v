`timescale 1ns/1ps

`define AND    4'b0000
`define OR     4'b0001
`define ADD    4'b0010
`define SUB    4'b0110
`define PassB  4'b0111

module ALU(
    output reg [63:0] BusW,
    input      [63:0] BusA,
    input      [63:0] BusB,
    input      [3:0]  ALUCtrl,
    output reg        Zero
);

always @(*) begin
    case(ALUCtrl)
        `AND:    BusW = BusA & BusB;
        `OR:     BusW = BusA | BusB;
        `ADD:    BusW = BusA + BusB;
        `SUB:    BusW = BusA - BusB;
        `PassB:  BusW = BusB;        // For CBZ / PassB
        default: BusW = 64'b0;
    endcase

    // Zero flag must reflect BusW after operation
    if (BusW == 64'b0)
        Zero = 1'b1;
    else
        Zero = 1'b0;
end

endmodule