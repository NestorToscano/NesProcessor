#include "VSingleCycleProc.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  // Instantiate DUT (Device Under Test)
  VSingleCycleProc *top = new VSingleCycleProc;

  // Create waveform dump
  VerilatedVcdC *tfp = new VerilatedVcdC;
  top->trace(tfp, 99);
  tfp->open("trace.vcd");

  // Simulation time counter
  vluint64_t sim_time = 0;

  // Initial conditions
  top->reset = 1;
  top->startpc = 0; // Start PC = 0
  top->CLK = 0;

  // Apply reset for first few cycles
  for (int i = 0; i < 10; i++)
  {
    top->CLK = !top->CLK;
    top->eval();
    tfp->dump(sim_time++);
  }
  top->reset = 0;

  // Run simulation for a fixed number of cycles
  for (int cycle = 0; cycle < 200; cycle++)
  {
    // Rising edge
    top->CLK = 1;
    top->eval();
    tfp->dump(sim_time++);

    // Print useful signals to console
    std::cout << "Cycle " << std::setw(3) << cycle
              << " | PC: 0x" << std::hex << std::setw(8) << top->currentpc
              << " | MemtoRegOut: 0x" << std::hex << std::setw(8) << top->MemtoRegOut
              << std::endl;

    // Falling edge
    top->CLK = 0;
    top->eval();
    tfp->dump(sim_time++);

    // End condition (optional): stop if PC reaches some value
    if (top->currentpc > 256)
      break;
  }

  // Close trace
  tfp->close();
  delete tfp;
  delete top;
  return 0;
}
