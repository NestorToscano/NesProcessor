# Single-Cycle ARMv8-like Processor (Verilog + Verilator)

Lightweight single-cycle ARMv8-style CPU implemented in Verilog with a C++ testbench for simulation via Verilator. Intended for learning, experimentation, and small ISA/microarchitecture changes.

## Highlights
- Simple, easy-to-follow single-cycle datapath and control.
- 64-bit register file and ALU implementing core ARMv8-like operations.
- Separate instruction and data memories (Verilog).
- Verilator-based C++ testbench that produces VCD waveforms.

## Files
- SingleCycleProc.v — top-level processor
- ALU.v — arithmetic and logic unit
- SC_Control.v — instruction decode / control logic
- RegisterFile.v — 64-bit register file
- InstructionMemory.v — program memory (edit to change test programs)
- DataMemory.v — load/store memory model
- NextPClogic.v — PC / branch update logic
- SignExtender.v — immediate generation
- mux2to1_64.v — helper mux
- testbench.cpp — Verilator testbench and stimulus
- trace.vcd — example waveform output (generated)
- obj_dir/VSingleCycleProc — Verilator build output (generated)

## Quick build & run
Run from the project root (Windows / PowerShell or CMD):
```sh
verilator --cc SingleCycleProc.v --exe testbench.cpp --no-timing --trace --build \
  SC_Control.v ALU.v RegisterFile.v InstructionMemory.v DataMemory.v \
  NextPClogic.v SignExtender.v mux2to1_64.v

# then run the simulator:
.\obj_dir\VSingleCycleProc.exe
```

The simulator prints basic status and generates trace.vcd for waveform inspection (e.g., in GTKWave).

## How to modify / extend
- Change the test program: edit InstructionMemory.v or replace its ROM contents.
- Add instructions / change decoding: modify SC_Control.v and update ALU.v / SignExtender.v as needed.
- Update tests/waveforms: edit testbench.cpp to add scenarios or assertions.