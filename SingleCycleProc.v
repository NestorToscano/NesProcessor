`timescale 1ns / 1ps

module SingleCycleProc(
    input              reset,        // Active High
    input      [63:0]  startpc,      // Starting PC
    output reg [63:0]  currentpc,    // Current PC
    output     [63:0]  MemtoRegOut,  // Output of MemtoReg mux
    input              CLK           // Clock
);

   // =========================
   // Internal wires
   // =========================
   wire [63:0] nextpc;
   wire [31:0] instruction;

   // Instruction fields
   wire [4:0]  Rt;     // Destination register
   wire [4:0]  Rn;     // First source (base)
   wire [4:0]  Rm;     // Second source
   wire [4:0]  RBsel;  // Second register after Reg2Loc mux
   wire [10:0] opcode;

   // Control signals
   wire        Reg2Loc;
   wire        ALUSrc;
   wire        MemtoReg;
   wire        RegWrite;
   wire        MemRead;
   wire        MemWrite;
   wire        Branch;
   wire        Uncondbranch;
   wire [3:0]  ALUOp;
   wire [1:0]  SignOp;

   // Datapath signals
   wire [63:0] regoutA;
   wire [63:0] regoutB;
   wire [63:0] aluout;
   wire [63:0] readdata;
   wire [63:0] SignExOut;
   wire [63:0] alu_in_b;
   wire        zero;

   // =========================
   // Instruction decoding
   // =========================
   assign Rt     = instruction[4:0];
   assign Rn     = instruction[9:5];
   assign Rm     = instruction[20:16];
   assign opcode = instruction[31:21];
   assign RBsel  = Reg2Loc ? Rt : Rm; // select based on instruction type

   // =========================
   // Instruction Memory
   // =========================
   InstructionMemory imem(
      .Data(instruction),
      .Address(currentpc)
   );

   // =========================
   // Control Unit
   // =========================
    wire IsMovz;
    
    SC_Control control(
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
       .IsMovz(IsMovz),           // <-- new connection
       .opcode(opcode)
    );

   // =========================
   // Register File
   // =========================
   RegisterFile rf(
      .BusA (regoutA),
      .BusB (regoutB),
      .BusW (MemtoRegOut),
      .RA   (Rn),
      .RB   (RBsel),
      .RW   (Rt),
      .RegWr(RegWrite),
      .Clk  (CLK)
   );

   // =========================
   // Sign Extender
   // =========================
    SignExtender sext(
       .SignExOut (SignExOut),
       .Instruction(instruction[25:0]),
       .SignOp(SignOp),
       .IsMovz(IsMovz)            // <-- new port
    );

   // =========================
   // ALU Input Mux (ALUSrc)
   // =========================
   mux2to1_64 alu_b_mux(
      .in0 (regoutB),
      .in1 (SignExOut),
      .sel (ALUSrc),
      .out (alu_in_b)
   );

   // =========================
   // ALU
   // =========================
   ALU alu(
      .BusW   (aluout),
      .BusA   (regoutA),
      .BusB   (alu_in_b),
      .ALUCtrl(ALUOp),
      .Zero   (zero)
   );

   // =========================
   // Data Memory
   // =========================
   DataMemory dmem(
      .ReadData   (readdata),
      .Address    (aluout),
      .WriteData  (regoutB),
      .MemoryRead (MemRead),
      .MemoryWrite(MemWrite),
      .Clock      (CLK)
   );

   // =========================
   // MemtoReg Mux (Writeback)
   // =========================
   assign MemtoRegOut = MemtoReg ? readdata : aluout;

   // =========================
   // Next PC Logic
   // =========================
   NextPClogic npcl(
      .NextPC       (nextpc),
      .CurrentPC    (currentpc),
      .SignExtImm64 (SignExOut),
      .Branch       (Branch),
      .ALUZero      (zero),
      .Uncondbranch (Uncondbranch)
   );

   // =========================
   // Program Counter Update
   // =========================
   always @(posedge CLK) begin
      if (reset)
         currentpc <= #3 startpc;
      else
         currentpc <= #3 nextpc;
   end

endmodule
