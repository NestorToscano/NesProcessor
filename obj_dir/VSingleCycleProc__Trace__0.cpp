// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleProc__Syms.h"


void VSingleCycleProc___024root__trace_chg_0_sub_0(VSingleCycleProc___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSingleCycleProc___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root__trace_chg_0\n"); );
    // Init
    VSingleCycleProc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleProc___024root*>(voidSelf);
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSingleCycleProc___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VSingleCycleProc___024root__trace_chg_0_sub_0(VSingleCycleProc___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->SingleCycleProc__DOT__dmem__DOT__i),32);
        bufp->chgIData(oldp+1,(vlSelf->SingleCycleProc__DOT__rf__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgQData(oldp+2,(vlSelf->SingleCycleProc__DOT__nextpc),64);
        bufp->chgIData(oldp+4,(vlSelf->SingleCycleProc__DOT__instruction),32);
        bufp->chgCData(oldp+5,((0x1fU & vlSelf->SingleCycleProc__DOT__instruction)),5);
        bufp->chgCData(oldp+6,((0x1fU & (vlSelf->SingleCycleProc__DOT__instruction 
                                         >> 5U))),5);
        bufp->chgCData(oldp+7,((0x1fU & (vlSelf->SingleCycleProc__DOT__instruction 
                                         >> 0x10U))),5);
        bufp->chgCData(oldp+8,(vlSelf->SingleCycleProc__DOT__RBsel),5);
        bufp->chgSData(oldp+9,((vlSelf->SingleCycleProc__DOT__instruction 
                                >> 0x15U)),11);
        bufp->chgBit(oldp+10,(vlSelf->SingleCycleProc__DOT__Reg2Loc));
        bufp->chgBit(oldp+11,(vlSelf->SingleCycleProc__DOT__ALUSrc));
        bufp->chgBit(oldp+12,(vlSelf->SingleCycleProc__DOT__MemtoReg));
        bufp->chgBit(oldp+13,(vlSelf->SingleCycleProc__DOT__RegWrite));
        bufp->chgBit(oldp+14,(vlSelf->SingleCycleProc__DOT__MemRead));
        bufp->chgBit(oldp+15,(vlSelf->SingleCycleProc__DOT__MemWrite));
        bufp->chgBit(oldp+16,(vlSelf->SingleCycleProc__DOT__Branch));
        bufp->chgBit(oldp+17,(vlSelf->SingleCycleProc__DOT__Uncondbranch));
        bufp->chgCData(oldp+18,(vlSelf->SingleCycleProc__DOT__ALUOp),4);
        bufp->chgCData(oldp+19,(vlSelf->SingleCycleProc__DOT__SignOp),2);
        bufp->chgQData(oldp+20,(vlSelf->SingleCycleProc__DOT__rf__DOT__readA),64);
        bufp->chgQData(oldp+22,(vlSelf->SingleCycleProc__DOT__rf__DOT__readB),64);
        bufp->chgQData(oldp+24,(vlSelf->SingleCycleProc__DOT__aluout),64);
        bufp->chgQData(oldp+26,(((IData)(vlSelf->SingleCycleProc__DOT__MemRead)
                                  ? vlSelf->SingleCycleProc__DOT__dmem__DOT__mem
                                 [(0xffU & (IData)(
                                                   (vlSelf->SingleCycleProc__DOT__aluout 
                                                    >> 3U)))]
                                  : 0ULL)),64);
        bufp->chgQData(oldp+28,(vlSelf->SingleCycleProc__DOT__SignExOut),64);
        bufp->chgQData(oldp+30,(vlSelf->SingleCycleProc__DOT__alu_in_b),64);
        bufp->chgBit(oldp+32,(vlSelf->SingleCycleProc__DOT__zero));
        bufp->chgBit(oldp+33,(vlSelf->SingleCycleProc__DOT__IsMovz));
        bufp->chgCData(oldp+34,((0xffU & (IData)((vlSelf->SingleCycleProc__DOT__aluout 
                                                  >> 3U)))),8);
        bufp->chgQData(oldp+35,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0]),64);
        bufp->chgQData(oldp+37,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[1]),64);
        bufp->chgQData(oldp+39,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[2]),64);
        bufp->chgQData(oldp+41,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[3]),64);
        bufp->chgQData(oldp+43,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[4]),64);
        bufp->chgQData(oldp+45,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[5]),64);
        bufp->chgQData(oldp+47,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[6]),64);
        bufp->chgQData(oldp+49,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[7]),64);
        bufp->chgQData(oldp+51,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[8]),64);
        bufp->chgQData(oldp+53,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[9]),64);
        bufp->chgQData(oldp+55,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[10]),64);
        bufp->chgQData(oldp+57,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[11]),64);
        bufp->chgQData(oldp+59,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[12]),64);
        bufp->chgQData(oldp+61,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[13]),64);
        bufp->chgQData(oldp+63,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[14]),64);
        bufp->chgQData(oldp+65,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[15]),64);
        bufp->chgQData(oldp+67,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[16]),64);
        bufp->chgQData(oldp+69,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[17]),64);
        bufp->chgQData(oldp+71,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[18]),64);
        bufp->chgQData(oldp+73,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[19]),64);
        bufp->chgQData(oldp+75,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[20]),64);
        bufp->chgQData(oldp+77,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[21]),64);
        bufp->chgQData(oldp+79,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[22]),64);
        bufp->chgQData(oldp+81,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[23]),64);
        bufp->chgQData(oldp+83,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[24]),64);
        bufp->chgQData(oldp+85,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[25]),64);
        bufp->chgQData(oldp+87,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[26]),64);
        bufp->chgQData(oldp+89,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[27]),64);
        bufp->chgQData(oldp+91,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[28]),64);
        bufp->chgQData(oldp+93,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[29]),64);
        bufp->chgQData(oldp+95,(vlSelf->SingleCycleProc__DOT__rf__DOT__registers[30]),64);
        bufp->chgCData(oldp+97,(vlSelf->SingleCycleProc__DOT__rf__DOT__last_rw),5);
        bufp->chgQData(oldp+98,(vlSelf->SingleCycleProc__DOT__rf__DOT__last_data),64);
        bufp->chgBit(oldp+100,(vlSelf->SingleCycleProc__DOT__rf__DOT__last_write_valid));
        bufp->chgIData(oldp+101,((0x3ffffffU & vlSelf->SingleCycleProc__DOT__instruction)),26);
        bufp->chgCData(oldp+102,(vlSelf->SingleCycleProc__DOT__sext__DOT__hw),2);
        bufp->chgSData(oldp+103,(vlSelf->SingleCycleProc__DOT__sext__DOT__imm16),16);
    }
    bufp->chgBit(oldp+104,(vlSelf->reset));
    bufp->chgQData(oldp+105,(vlSelf->startpc),64);
    bufp->chgQData(oldp+107,(vlSelf->currentpc),64);
    bufp->chgQData(oldp+109,(vlSelf->MemtoRegOut),64);
    bufp->chgBit(oldp+111,(vlSelf->CLK));
}

void VSingleCycleProc___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root__trace_cleanup\n"); );
    // Init
    VSingleCycleProc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleProc___024root*>(voidSelf);
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
