// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleProc__Syms.h"


VL_ATTR_COLD void VSingleCycleProc___024root__trace_init_sub__TOP__0(VSingleCycleProc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+105,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+106,0,"startpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+108,0,"currentpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+110,0,"MemtoRegOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+112,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("SingleCycleProc", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+105,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+106,0,"startpc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+108,0,"currentpc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+110,0,"MemtoRegOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+112,0,"CLK",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+3,0,"nextpc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+5,0,"instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"Rt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+7,0,"Rn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+8,0,"Rm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"RBsel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+10,0,"opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->declBit(c+11,0,"Reg2Loc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"MemtoReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"RegWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"MemRead",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"MemWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"Branch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"Uncondbranch",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"ALUOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"SignOp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declQuad(c+21,0,"regoutA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"regoutB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,0,"aluout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+27,0,"readdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+29,0,"SignExOut",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+31,0,"alu_in_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+33,0,"zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"IsMovz",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+25,0,"BusW",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+21,0,"BusA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+31,0,"BusB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+19,0,"ALUCtrl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+33,0,"Zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("alu_b_mux", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+23,0,"in0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+29,0,"in1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+12,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+31,0,"out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("control", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+34,0,"IsMovz",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+11,0,"Reg2Loc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+12,0,"ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"MemtoReg",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"RegWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+15,0,"MemRead",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"MemWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+17,0,"Branch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"Uncondbranch",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+19,0,"ALUOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+20,0,"SignOp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+10,0,"opcode",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 10,0);
    tracep->popPrefix();
    tracep->pushPrefix("dmem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+27,0,"ReadData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+25,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"WriteData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+15,0,"MemoryRead",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"MemoryWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"Clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+1,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+35,0,"idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->pushPrefix("imem", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"Data",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+108,0,"Address",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+113,0,"T_rd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+114,0,"MemSize",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("npcl", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+3,0,"NextPC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+108,0,"CurrentPC",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+29,0,"SignExtImm64",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+17,0,"Branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+33,0,"ALUZero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+18,0,"Uncondbranch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("rf", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+21,0,"BusA",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"BusB",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+110,0,"BusW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+7,0,"RA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+9,0,"RB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+6,0,"RW",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBit(c+14,0,"RegWr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+112,0,"Clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("registers", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 31; ++i) {
        tracep->declQuad(c+36+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 63,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+2,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+98,0,"last_rw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declQuad(c+99,0,"last_data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBit(c+101,0,"last_write_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+21,0,"readA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declQuad(c+23,0,"readB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->popPrefix();
    tracep->pushPrefix("sext", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declQuad(c+29,0,"SignExOut",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 63,0);
    tracep->declBus(c+102,0,"Instruction",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 25,0);
    tracep->declBus(c+20,0,"SignOp",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+34,0,"IsMovz",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+103,0,"hw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+104,0,"imm16",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 15,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VSingleCycleProc___024root__trace_init_top(VSingleCycleProc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root__trace_init_top\n"); );
    // Body
    VSingleCycleProc___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSingleCycleProc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VSingleCycleProc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleProc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleProc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSingleCycleProc___024root__trace_register(VSingleCycleProc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VSingleCycleProc___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VSingleCycleProc___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VSingleCycleProc___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VSingleCycleProc___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSingleCycleProc___024root__trace_const_0_sub_0(VSingleCycleProc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingleCycleProc___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root__trace_const_0\n"); );
    // Init
    VSingleCycleProc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleProc___024root*>(voidSelf);
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSingleCycleProc___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingleCycleProc___024root__trace_const_0_sub_0(VSingleCycleProc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+113,(0x14U),32);
    bufp->fullIData(oldp+114,(0x28U),32);
}

VL_ATTR_COLD void VSingleCycleProc___024root__trace_full_0_sub_0(VSingleCycleProc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingleCycleProc___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root__trace_full_0\n"); );
    // Init
    VSingleCycleProc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleProc___024root*>(voidSelf);
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSingleCycleProc___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingleCycleProc___024root__trace_full_0_sub_0(VSingleCycleProc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->SingleCycleProc__DOT__dmem__DOT__i),32);
    bufp->fullIData(oldp+2,(vlSelf->SingleCycleProc__DOT__rf__DOT__i),32);
    bufp->fullQData(oldp+3,(vlSelf->SingleCycleProc__DOT__nextpc),64);
    bufp->fullIData(oldp+5,(vlSelf->SingleCycleProc__DOT__instruction),32);
    bufp->fullCData(oldp+6,((0x1fU & vlSelf->SingleCycleProc__DOT__instruction)),5);
    bufp->fullCData(oldp+7,((0x1fU & (vlSelf->SingleCycleProc__DOT__instruction 
                                      >> 5U))),5);
    bufp->fullCData(oldp+8,((0x1fU & (vlSelf->SingleCycleProc__DOT__instruction 
                                      >> 0x10U))),5);
    bufp->fullCData(oldp+9,(vlSelf->SingleCycleProc__DOT__RBsel),5);
    bufp->fullSData(oldp+10,((vlSelf->SingleCycleProc__DOT__instruction 
                              >> 0x15U)),11);
    bufp->fullBit(oldp+11,(vlSelf->SingleCycleProc__DOT__Reg2Loc));
    bufp->fullBit(oldp+12,(vlSelf->SingleCycleProc__DOT__ALUSrc));
    bufp->fullBit(oldp+13,(vlSelf->SingleCycleProc__DOT__MemtoReg));
    bufp->fullBit(oldp+14,(vlSelf->SingleCycleProc__DOT__RegWrite));
    bufp->fullBit(oldp+15,(vlSelf->SingleCycleProc__DOT__MemRead));
    bufp->fullBit(oldp+16,(vlSelf->SingleCycleProc__DOT__MemWrite));
    bufp->fullBit(oldp+17,(vlSelf->SingleCycleProc__DOT__Branch));
    bufp->fullBit(oldp+18,(vlSelf->SingleCycleProc__DOT__Uncondbranch));
    bufp->fullCData(oldp+19,(vlSelf->SingleCycleProc__DOT__ALUOp),4);
    bufp->fullCData(oldp+20,(vlSelf->SingleCycleProc__DOT__SignOp),2);
    bufp->fullQData(oldp+21,(vlSelf->SingleCycleProc__DOT__rf__DOT__readA),64);
    bufp->fullQData(oldp+23,(vlSelf->SingleCycleProc__DOT__rf__DOT__readB),64);
    bufp->fullQData(oldp+25,(vlSelf->SingleCycleProc__DOT__aluout),64);
    bufp->fullQData(oldp+27,(((IData)(vlSelf->SingleCycleProc__DOT__MemRead)
                               ? vlSelf->SingleCycleProc__DOT__dmem__DOT__mem
                              [(0xffU & (IData)((vlSelf->SingleCycleProc__DOT__aluout 
                                                 >> 3U)))]
                               : 0ULL)),64);
    bufp->fullQData(oldp+29,(vlSelf->SingleCycleProc__DOT__SignExOut),64);
    bufp->fullQData(oldp+31,(vlSelf->SingleCycleProc__DOT__alu_in_b),64);
    bufp->fullBit(oldp+33,(vlSelf->SingleCycleProc__DOT__zero));
    bufp->fullBit(oldp+34,(vlSelf->SingleCycleProc__DOT__IsMovz));
    bufp->fullCData(oldp+35,((0xffU & (IData)((vlSelf->SingleCycleProc__DOT__aluout 
                                               >> 3U)))),8);
    bufp->fullQData(oldp+36,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0]),64);
    bufp->fullQData(oldp+38,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[1]),64);
    bufp->fullQData(oldp+40,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[2]),64);
    bufp->fullQData(oldp+42,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[3]),64);
    bufp->fullQData(oldp+44,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[4]),64);
    bufp->fullQData(oldp+46,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[5]),64);
    bufp->fullQData(oldp+48,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[6]),64);
    bufp->fullQData(oldp+50,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[7]),64);
    bufp->fullQData(oldp+52,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[8]),64);
    bufp->fullQData(oldp+54,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[9]),64);
    bufp->fullQData(oldp+56,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[10]),64);
    bufp->fullQData(oldp+58,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[11]),64);
    bufp->fullQData(oldp+60,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[12]),64);
    bufp->fullQData(oldp+62,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[13]),64);
    bufp->fullQData(oldp+64,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[14]),64);
    bufp->fullQData(oldp+66,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[15]),64);
    bufp->fullQData(oldp+68,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[16]),64);
    bufp->fullQData(oldp+70,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[17]),64);
    bufp->fullQData(oldp+72,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[18]),64);
    bufp->fullQData(oldp+74,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[19]),64);
    bufp->fullQData(oldp+76,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[20]),64);
    bufp->fullQData(oldp+78,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[21]),64);
    bufp->fullQData(oldp+80,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[22]),64);
    bufp->fullQData(oldp+82,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[23]),64);
    bufp->fullQData(oldp+84,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[24]),64);
    bufp->fullQData(oldp+86,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[25]),64);
    bufp->fullQData(oldp+88,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[26]),64);
    bufp->fullQData(oldp+90,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[27]),64);
    bufp->fullQData(oldp+92,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[28]),64);
    bufp->fullQData(oldp+94,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[29]),64);
    bufp->fullQData(oldp+96,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[30]),64);
    bufp->fullCData(oldp+98,(vlSelf->SingleCycleProc__DOT__rf__DOT__last_rw),5);
    bufp->fullQData(oldp+99,(vlSelf->SingleCycleProc__DOT__rf__DOT__last_data),64);
    bufp->fullBit(oldp+101,(vlSelf->SingleCycleProc__DOT__rf__DOT__last_write_valid));
    bufp->fullIData(oldp+102,((0x3ffffffU & vlSelf->SingleCycleProc__DOT__instruction)),26);
    bufp->fullCData(oldp+103,(vlSelf->SingleCycleProc__DOT__sext__DOT__hw),2);
    bufp->fullSData(oldp+104,(vlSelf->SingleCycleProc__DOT__sext__DOT__imm16),16);
    bufp->fullBit(oldp+105,(vlSelf->reset));
    bufp->fullQData(oldp+106,(vlSelf->startpc),64);
    bufp->fullQData(oldp+108,(vlSelf->currentpc),64);
    bufp->fullQData(oldp+110,(vlSelf->MemtoRegOut),64);
    bufp->fullBit(oldp+112,(vlSelf->CLK));
}
