// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSingleCycleProc.h for the primary calling header

#ifndef VERILATED_VSINGLECYCLEPROC___024ROOT_H_
#define VERILATED_VSINGLECYCLEPROC___024ROOT_H_  // guard

#include "verilated.h"


class VSingleCycleProc__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSingleCycleProc___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(reset,0,0);
    CData/*4:0*/ SingleCycleProc__DOT__RBsel;
    CData/*0:0*/ SingleCycleProc__DOT__Reg2Loc;
    CData/*0:0*/ SingleCycleProc__DOT__ALUSrc;
    CData/*0:0*/ SingleCycleProc__DOT__MemtoReg;
    CData/*0:0*/ SingleCycleProc__DOT__RegWrite;
    CData/*0:0*/ SingleCycleProc__DOT__MemRead;
    CData/*0:0*/ SingleCycleProc__DOT__MemWrite;
    CData/*0:0*/ SingleCycleProc__DOT__Branch;
    CData/*0:0*/ SingleCycleProc__DOT__Uncondbranch;
    CData/*3:0*/ SingleCycleProc__DOT__ALUOp;
    CData/*1:0*/ SingleCycleProc__DOT__SignOp;
    CData/*0:0*/ SingleCycleProc__DOT__zero;
    CData/*0:0*/ SingleCycleProc__DOT__IsMovz;
    CData/*4:0*/ SingleCycleProc__DOT__rf__DOT__last_rw;
    CData/*0:0*/ SingleCycleProc__DOT__rf__DOT__last_write_valid;
    CData/*1:0*/ SingleCycleProc__DOT__sext__DOT__hw;
    CData/*4:0*/ __Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__0__addr;
    CData/*4:0*/ __Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__1__addr;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLK__0;
    CData/*0:0*/ __VactContinue;
    SData/*15:0*/ SingleCycleProc__DOT__sext__DOT__imm16;
    IData/*31:0*/ SingleCycleProc__DOT__instruction;
    IData/*31:0*/ SingleCycleProc__DOT__rf__DOT__i;
    IData/*31:0*/ SingleCycleProc__DOT__dmem__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VL_IN64(startpc,63,0);
    VL_OUT64(currentpc,63,0);
    VL_OUT64(MemtoRegOut,63,0);
    QData/*63:0*/ SingleCycleProc__DOT__nextpc;
    QData/*63:0*/ SingleCycleProc__DOT__aluout;
    QData/*63:0*/ SingleCycleProc__DOT__SignExOut;
    QData/*63:0*/ SingleCycleProc__DOT__alu_in_b;
    QData/*63:0*/ SingleCycleProc__DOT__rf__DOT__last_data;
    QData/*63:0*/ SingleCycleProc__DOT__rf__DOT__readA;
    QData/*63:0*/ SingleCycleProc__DOT__rf__DOT__readB;
    QData/*63:0*/ SingleCycleProc__DOT__rf__DOT____Vlvbound_h00cb4df4__0;
    QData/*63:0*/ __Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__0__Vfuncout;
    QData/*63:0*/ __Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__1__Vfuncout;
    VlUnpacked<QData/*63:0*/, 31> SingleCycleProc__DOT__rf__DOT__registers;
    VlUnpacked<QData/*63:0*/, 256> SingleCycleProc__DOT__dmem__DOT__mem;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSingleCycleProc__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSingleCycleProc___024root(VSingleCycleProc__Syms* symsp, const char* v__name);
    ~VSingleCycleProc___024root();
    VL_UNCOPYABLE(VSingleCycleProc___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
