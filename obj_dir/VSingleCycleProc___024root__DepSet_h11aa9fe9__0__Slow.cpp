// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleProc.h for the primary calling header

#include "VSingleCycleProc__pch.h"
#include "VSingleCycleProc___024root.h"

VL_ATTR_COLD void VSingleCycleProc___024root___eval_static(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSingleCycleProc___024root___eval_initial__TOP(VSingleCycleProc___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleProc___024root___eval_initial(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___eval_initial\n"); );
    // Body
    VSingleCycleProc___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = vlSelf->CLK;
}

VL_ATTR_COLD void VSingleCycleProc___024root___eval_initial__TOP(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[1U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[2U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[3U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[4U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[5U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[6U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[7U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[8U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[9U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0xaU] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0xbU] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0xcU] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0xdU] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0xeU] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0xfU] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x10U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x11U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x12U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x13U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x14U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x15U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x16U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x17U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x18U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x19U] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x1aU] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x1bU] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x1cU] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x1dU] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__registers[0x1eU] = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__i = 0x1fU;
    vlSelf->SingleCycleProc__DOT__rf__DOT__last_rw = 0U;
    vlSelf->SingleCycleProc__DOT__rf__DOT__last_data = 0ULL;
    vlSelf->SingleCycleProc__DOT__rf__DOT__last_write_valid = 0U;
    vlSelf->SingleCycleProc__DOT__dmem__DOT__mem[0U] = 1ULL;
    vlSelf->SingleCycleProc__DOT__dmem__DOT__mem[1U] = 0xaULL;
    vlSelf->SingleCycleProc__DOT__dmem__DOT__mem[2U] = 5ULL;
    vlSelf->SingleCycleProc__DOT__dmem__DOT__mem[3U] = 0xffbea7deadbeeffULL;
    vlSelf->SingleCycleProc__DOT__dmem__DOT__i = 4U;
    while (VL_GTS_III(32, 0x100U, vlSelf->SingleCycleProc__DOT__dmem__DOT__i)) {
        vlSelf->SingleCycleProc__DOT__dmem__DOT__mem[(0xffU 
                                                      & vlSelf->SingleCycleProc__DOT__dmem__DOT__i)] = 0ULL;
        vlSelf->SingleCycleProc__DOT__dmem__DOT__i 
            = ((IData)(1U) + vlSelf->SingleCycleProc__DOT__dmem__DOT__i);
    }
}

VL_ATTR_COLD void VSingleCycleProc___024root___eval_final(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleProc___024root___dump_triggers__stl(VSingleCycleProc___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSingleCycleProc___024root___eval_phase__stl(VSingleCycleProc___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleProc___024root___eval_settle(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VSingleCycleProc___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("SingleCycleProc.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSingleCycleProc___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleProc___024root___dump_triggers__stl(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingleCycleProc___024root___stl_sequent__TOP__0(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->SingleCycleProc__DOT__instruction = (((
                                                   ((((((0ULL 
                                                         == vlSelf->currentpc) 
                                                        | (4ULL 
                                                           == vlSelf->currentpc)) 
                                                       | (8ULL 
                                                          == vlSelf->currentpc)) 
                                                      | (0xcULL 
                                                         == vlSelf->currentpc)) 
                                                     | (0x10ULL 
                                                        == vlSelf->currentpc)) 
                                                    | (0x14ULL 
                                                       == vlSelf->currentpc)) 
                                                   | (0x18ULL 
                                                      == vlSelf->currentpc)) 
                                                  | (0x1cULL 
                                                     == vlSelf->currentpc))
                                                  ? 
                                                 ((0ULL 
                                                   == vlSelf->currentpc)
                                                   ? 0xf84003e9U
                                                   : 
                                                  ((4ULL 
                                                    == vlSelf->currentpc)
                                                    ? 0xf84083eaU
                                                    : 
                                                   ((8ULL 
                                                     == vlSelf->currentpc)
                                                     ? 0xf84103ebU
                                                     : 
                                                    ((0xcULL 
                                                      == vlSelf->currentpc)
                                                      ? 0xf84183ecU
                                                      : 
                                                     ((0x10ULL 
                                                       == vlSelf->currentpc)
                                                       ? 0xf84203edU
                                                       : 
                                                      ((0x14ULL 
                                                        == vlSelf->currentpc)
                                                        ? 0xaa0b014aU
                                                        : 
                                                       ((0x18ULL 
                                                         == vlSelf->currentpc)
                                                         ? 0x8a0a018cU
                                                         : 0xb400008cU)))))))
                                                  : 
                                                 (((((((((0x20ULL 
                                                          == vlSelf->currentpc) 
                                                         | (0x24ULL 
                                                            == vlSelf->currentpc)) 
                                                        | (0x28ULL 
                                                           == vlSelf->currentpc)) 
                                                       | (0x2cULL 
                                                          == vlSelf->currentpc)) 
                                                      | (0x30ULL 
                                                         == vlSelf->currentpc)) 
                                                     | (0x34ULL 
                                                        == vlSelf->currentpc)) 
                                                    | (0x38ULL 
                                                       == vlSelf->currentpc)) 
                                                   | (0x3cULL 
                                                      == vlSelf->currentpc))
                                                   ? 
                                                  ((0x20ULL 
                                                    == vlSelf->currentpc)
                                                    ? 0x8b0901adU
                                                    : 
                                                   ((0x24ULL 
                                                     == vlSelf->currentpc)
                                                     ? 0xcb09018cU
                                                     : 
                                                    ((0x28ULL 
                                                      == vlSelf->currentpc)
                                                      ? 0x17fffffdU
                                                      : 
                                                     ((0x2cULL 
                                                       == vlSelf->currentpc)
                                                       ? 0xf80203edU
                                                       : 
                                                      ((0x30ULL 
                                                        == vlSelf->currentpc)
                                                        ? 0xf84203edU
                                                        : 
                                                       ((0x34ULL 
                                                         == vlSelf->currentpc)
                                                         ? 0xd2e24689U
                                                         : 
                                                        ((0x38ULL 
                                                          == vlSelf->currentpc)
                                                          ? 0xd2cacf0aU
                                                          : 0xaa0a0129U)))))))
                                                   : 
                                                  ((0x40ULL 
                                                    == vlSelf->currentpc)
                                                    ? 0xd2b3578aU
                                                    : 
                                                   ((0x44ULL 
                                                     == vlSelf->currentpc)
                                                     ? 0xaa0a0129U
                                                     : 
                                                    ((0x48ULL 
                                                      == vlSelf->currentpc)
                                                      ? 0xd29bde0aU
                                                      : 
                                                     ((0x4cULL 
                                                       == vlSelf->currentpc)
                                                       ? 0xaa0a0129U
                                                       : 
                                                      ((0x50ULL 
                                                        == vlSelf->currentpc)
                                                        ? 0xf80283e9U
                                                        : 
                                                       ((0x54ULL 
                                                         == vlSelf->currentpc)
                                                         ? 0xf84283eaU
                                                         : 0U))))))));
    vlSelf->SingleCycleProc__DOT__MemWrite = 0U;
    vlSelf->SingleCycleProc__DOT__RegWrite = 0U;
    vlSelf->SingleCycleProc__DOT__MemRead = 0U;
    vlSelf->SingleCycleProc__DOT__MemtoReg = 0U;
    vlSelf->SingleCycleProc__DOT__Uncondbranch = 0U;
    vlSelf->SingleCycleProc__DOT__Branch = 0U;
    vlSelf->SingleCycleProc__DOT__ALUOp = 0U;
    vlSelf->SingleCycleProc__DOT__ALUSrc = 0U;
    if (((((((((0x7c2U == (vlSelf->SingleCycleProc__DOT__instruction 
                           >> 0x15U)) | (0x7c0U == 
                                         (vlSelf->SingleCycleProc__DOT__instruction 
                                          >> 0x15U))) 
              | (0x458U == (vlSelf->SingleCycleProc__DOT__instruction 
                            >> 0x15U))) | (0x658U == 
                                           (vlSelf->SingleCycleProc__DOT__instruction 
                                            >> 0x15U))) 
            | (0x450U == (vlSelf->SingleCycleProc__DOT__instruction 
                          >> 0x15U))) | (0x550U == 
                                         (vlSelf->SingleCycleProc__DOT__instruction 
                                          >> 0x15U))) 
          | (0x488U == (0x7feU & (vlSelf->SingleCycleProc__DOT__instruction 
                                  >> 0x15U)))) | (0x688U 
                                                  == 
                                                  (0x7feU 
                                                   & (vlSelf->SingleCycleProc__DOT__instruction 
                                                      >> 0x15U))))) {
        if ((0x7c2U != (vlSelf->SingleCycleProc__DOT__instruction 
                        >> 0x15U))) {
            if ((0x7c0U == (vlSelf->SingleCycleProc__DOT__instruction 
                            >> 0x15U))) {
                vlSelf->SingleCycleProc__DOT__MemWrite = 1U;
            }
        }
        if ((0x7c2U == (vlSelf->SingleCycleProc__DOT__instruction 
                        >> 0x15U))) {
            vlSelf->SingleCycleProc__DOT__RegWrite = 1U;
            vlSelf->SingleCycleProc__DOT__MemRead = 1U;
            vlSelf->SingleCycleProc__DOT__MemtoReg = 1U;
            vlSelf->SingleCycleProc__DOT__ALUOp = 2U;
            vlSelf->SingleCycleProc__DOT__ALUSrc = 1U;
        } else {
            if ((0x7c0U != (vlSelf->SingleCycleProc__DOT__instruction 
                            >> 0x15U))) {
                vlSelf->SingleCycleProc__DOT__RegWrite = 1U;
            }
            if ((0x7c0U == (vlSelf->SingleCycleProc__DOT__instruction 
                            >> 0x15U))) {
                vlSelf->SingleCycleProc__DOT__ALUOp = 2U;
                vlSelf->SingleCycleProc__DOT__ALUSrc = 1U;
            } else {
                vlSelf->SingleCycleProc__DOT__ALUOp 
                    = ((0x458U == (vlSelf->SingleCycleProc__DOT__instruction 
                                   >> 0x15U)) ? 2U : 
                       ((0x658U == (vlSelf->SingleCycleProc__DOT__instruction 
                                    >> 0x15U)) ? 6U
                         : ((0x450U == (vlSelf->SingleCycleProc__DOT__instruction 
                                        >> 0x15U)) ? 0U
                             : ((0x550U == (vlSelf->SingleCycleProc__DOT__instruction 
                                            >> 0x15U))
                                 ? 1U : ((0x488U == 
                                          (0x7feU & 
                                           (vlSelf->SingleCycleProc__DOT__instruction 
                                            >> 0x15U)))
                                          ? 2U : 6U)))));
                if ((0x458U != (vlSelf->SingleCycleProc__DOT__instruction 
                                >> 0x15U))) {
                    if ((0x658U != (vlSelf->SingleCycleProc__DOT__instruction 
                                    >> 0x15U))) {
                        if ((0x450U != (vlSelf->SingleCycleProc__DOT__instruction 
                                        >> 0x15U))) {
                            if ((0x550U != (vlSelf->SingleCycleProc__DOT__instruction 
                                            >> 0x15U))) {
                                vlSelf->SingleCycleProc__DOT__ALUSrc = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x694U == (0x7fcU & (vlSelf->SingleCycleProc__DOT__instruction 
                                     >> 0x15U)))) {
        vlSelf->SingleCycleProc__DOT__RegWrite = 1U;
        vlSelf->SingleCycleProc__DOT__ALUOp = 7U;
        vlSelf->SingleCycleProc__DOT__ALUSrc = 1U;
    } else if ((0x5a0U == (0x7f8U & (vlSelf->SingleCycleProc__DOT__instruction 
                                     >> 0x15U)))) {
        vlSelf->SingleCycleProc__DOT__ALUOp = 7U;
    }
    if ((1U & (~ ((((((((0x7c2U == (vlSelf->SingleCycleProc__DOT__instruction 
                                    >> 0x15U)) | (0x7c0U 
                                                  == 
                                                  (vlSelf->SingleCycleProc__DOT__instruction 
                                                   >> 0x15U))) 
                       | (0x458U == (vlSelf->SingleCycleProc__DOT__instruction 
                                     >> 0x15U))) | 
                      (0x658U == (vlSelf->SingleCycleProc__DOT__instruction 
                                  >> 0x15U))) | (0x450U 
                                                 == 
                                                 (vlSelf->SingleCycleProc__DOT__instruction 
                                                  >> 0x15U))) 
                    | (0x550U == (vlSelf->SingleCycleProc__DOT__instruction 
                                  >> 0x15U))) | (0x488U 
                                                 == 
                                                 (0x7feU 
                                                  & (vlSelf->SingleCycleProc__DOT__instruction 
                                                     >> 0x15U)))) 
                  | (0x688U == (0x7feU & (vlSelf->SingleCycleProc__DOT__instruction 
                                          >> 0x15U))))))) {
        if ((0x694U != (0x7fcU & (vlSelf->SingleCycleProc__DOT__instruction 
                                  >> 0x15U)))) {
            if ((0x5a0U != (0x7f8U & (vlSelf->SingleCycleProc__DOT__instruction 
                                      >> 0x15U)))) {
                if ((0xa0U == (0x7e0U & (vlSelf->SingleCycleProc__DOT__instruction 
                                         >> 0x15U)))) {
                    vlSelf->SingleCycleProc__DOT__Uncondbranch = 1U;
                }
            }
            if ((0x5a0U == (0x7f8U & (vlSelf->SingleCycleProc__DOT__instruction 
                                      >> 0x15U)))) {
                vlSelf->SingleCycleProc__DOT__Branch = 1U;
            }
        }
    }
    vlSelf->SingleCycleProc__DOT__rf__DOT__readA = 
        ((((IData)(vlSelf->SingleCycleProc__DOT__rf__DOT__last_write_valid) 
           & ((0x1fU & (vlSelf->SingleCycleProc__DOT__instruction 
                        >> 5U)) == (IData)(vlSelf->SingleCycleProc__DOT__rf__DOT__last_rw))) 
          & (0x1fU != (0x1fU & (vlSelf->SingleCycleProc__DOT__instruction 
                                >> 5U)))) ? vlSelf->SingleCycleProc__DOT__rf__DOT__last_data
          : ([&]() {
                vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__0__addr 
                    = (0x1fU & (vlSelf->SingleCycleProc__DOT__instruction 
                                >> 5U));
                vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__0__Vfuncout 
                    = ((0x1fU == (IData)(vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__0__addr))
                        ? 0ULL : ((0x1eU < (IData)(vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__0__addr))
                                   ? 0ULL : ((0x1eU 
                                              >= (IData)(vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__0__addr))
                                              ? vlSelf->SingleCycleProc__DOT__rf__DOT__registers
                                             [vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__0__addr]
                                              : 0ULL)));
            }(), vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__0__Vfuncout));
    vlSelf->SingleCycleProc__DOT__Reg2Loc = 0U;
    vlSelf->SingleCycleProc__DOT__SignOp = 0U;
    if (((((((((0x7c2U == (vlSelf->SingleCycleProc__DOT__instruction 
                           >> 0x15U)) | (0x7c0U == 
                                         (vlSelf->SingleCycleProc__DOT__instruction 
                                          >> 0x15U))) 
              | (0x458U == (vlSelf->SingleCycleProc__DOT__instruction 
                            >> 0x15U))) | (0x658U == 
                                           (vlSelf->SingleCycleProc__DOT__instruction 
                                            >> 0x15U))) 
            | (0x450U == (vlSelf->SingleCycleProc__DOT__instruction 
                          >> 0x15U))) | (0x550U == 
                                         (vlSelf->SingleCycleProc__DOT__instruction 
                                          >> 0x15U))) 
          | (0x488U == (0x7feU & (vlSelf->SingleCycleProc__DOT__instruction 
                                  >> 0x15U)))) | (0x688U 
                                                  == 
                                                  (0x7feU 
                                                   & (vlSelf->SingleCycleProc__DOT__instruction 
                                                      >> 0x15U))))) {
        if ((0x7c2U != (vlSelf->SingleCycleProc__DOT__instruction 
                        >> 0x15U))) {
            if ((0x7c0U == (vlSelf->SingleCycleProc__DOT__instruction 
                            >> 0x15U))) {
                vlSelf->SingleCycleProc__DOT__Reg2Loc = 1U;
            }
        }
        if ((0x7c2U == (vlSelf->SingleCycleProc__DOT__instruction 
                        >> 0x15U))) {
            vlSelf->SingleCycleProc__DOT__SignOp = 1U;
        } else if ((0x7c0U == (vlSelf->SingleCycleProc__DOT__instruction 
                               >> 0x15U))) {
            vlSelf->SingleCycleProc__DOT__SignOp = 1U;
        } else if ((0x458U != (vlSelf->SingleCycleProc__DOT__instruction 
                               >> 0x15U))) {
            if ((0x658U != (vlSelf->SingleCycleProc__DOT__instruction 
                            >> 0x15U))) {
                if ((0x450U != (vlSelf->SingleCycleProc__DOT__instruction 
                                >> 0x15U))) {
                    if ((0x550U != (vlSelf->SingleCycleProc__DOT__instruction 
                                    >> 0x15U))) {
                        vlSelf->SingleCycleProc__DOT__SignOp = 0U;
                    }
                }
            }
        }
    } else {
        if ((0x694U != (0x7fcU & (vlSelf->SingleCycleProc__DOT__instruction 
                                  >> 0x15U)))) {
            if ((0x5a0U == (0x7f8U & (vlSelf->SingleCycleProc__DOT__instruction 
                                      >> 0x15U)))) {
                vlSelf->SingleCycleProc__DOT__Reg2Loc = 1U;
            }
        }
        if ((0x694U == (0x7fcU & (vlSelf->SingleCycleProc__DOT__instruction 
                                  >> 0x15U)))) {
            vlSelf->SingleCycleProc__DOT__SignOp = 0U;
        } else if ((0x5a0U == (0x7f8U & (vlSelf->SingleCycleProc__DOT__instruction 
                                         >> 0x15U)))) {
            vlSelf->SingleCycleProc__DOT__SignOp = 2U;
        } else if ((0xa0U == (0x7e0U & (vlSelf->SingleCycleProc__DOT__instruction 
                                        >> 0x15U)))) {
            vlSelf->SingleCycleProc__DOT__SignOp = 3U;
        }
    }
    vlSelf->SingleCycleProc__DOT__IsMovz = 0U;
    if ((1U & (~ ((((((((0x7c2U == (vlSelf->SingleCycleProc__DOT__instruction 
                                    >> 0x15U)) | (0x7c0U 
                                                  == 
                                                  (vlSelf->SingleCycleProc__DOT__instruction 
                                                   >> 0x15U))) 
                       | (0x458U == (vlSelf->SingleCycleProc__DOT__instruction 
                                     >> 0x15U))) | 
                      (0x658U == (vlSelf->SingleCycleProc__DOT__instruction 
                                  >> 0x15U))) | (0x450U 
                                                 == 
                                                 (vlSelf->SingleCycleProc__DOT__instruction 
                                                  >> 0x15U))) 
                    | (0x550U == (vlSelf->SingleCycleProc__DOT__instruction 
                                  >> 0x15U))) | (0x488U 
                                                 == 
                                                 (0x7feU 
                                                  & (vlSelf->SingleCycleProc__DOT__instruction 
                                                     >> 0x15U)))) 
                  | (0x688U == (0x7feU & (vlSelf->SingleCycleProc__DOT__instruction 
                                          >> 0x15U))))))) {
        if ((0x694U == (0x7fcU & (vlSelf->SingleCycleProc__DOT__instruction 
                                  >> 0x15U)))) {
            vlSelf->SingleCycleProc__DOT__IsMovz = 1U;
        }
    }
    vlSelf->SingleCycleProc__DOT__RBsel = (0x1fU & 
                                           ((IData)(vlSelf->SingleCycleProc__DOT__Reg2Loc)
                                             ? vlSelf->SingleCycleProc__DOT__instruction
                                             : (vlSelf->SingleCycleProc__DOT__instruction 
                                                >> 0x10U)));
    vlSelf->SingleCycleProc__DOT__sext__DOT__hw = 0U;
    vlSelf->SingleCycleProc__DOT__sext__DOT__imm16 = 0U;
    if (vlSelf->SingleCycleProc__DOT__IsMovz) {
        vlSelf->SingleCycleProc__DOT__sext__DOT__imm16 
            = (0xffffU & (vlSelf->SingleCycleProc__DOT__instruction 
                          >> 5U));
        vlSelf->SingleCycleProc__DOT__sext__DOT__hw 
            = (3U & (vlSelf->SingleCycleProc__DOT__instruction 
                     >> 0x15U));
        vlSelf->SingleCycleProc__DOT__SignExOut = VL_SHIFTL_QQI(64,64,32, (QData)((IData)(vlSelf->SingleCycleProc__DOT__sext__DOT__imm16)), 
                                                                VL_SHIFTL_III(32,32,32, (IData)(vlSelf->SingleCycleProc__DOT__sext__DOT__hw), 4U));
    } else {
        vlSelf->SingleCycleProc__DOT__SignExOut = (
                                                   (2U 
                                                    & (IData)(vlSelf->SingleCycleProc__DOT__SignOp))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleProc__DOT__SignOp))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->SingleCycleProc__DOT__instruction 
                                                                             >> 0x19U))))) 
                                                      << 0x1cU) 
                                                     | (QData)((IData)(
                                                                       (0xffffffcU 
                                                                        & (vlSelf->SingleCycleProc__DOT__instruction 
                                                                           << 2U)))))
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->SingleCycleProc__DOT__instruction 
                                                                             >> 0x17U))))) 
                                                      << 0x15U) 
                                                     | (QData)((IData)(
                                                                       (0x1ffffcU 
                                                                        & (vlSelf->SingleCycleProc__DOT__instruction 
                                                                           >> 3U))))))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->SingleCycleProc__DOT__SignOp))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->SingleCycleProc__DOT__instruction 
                                                                             >> 0x14U))))) 
                                                      << 9U) 
                                                     | (QData)((IData)(
                                                                       (0x1ffU 
                                                                        & (vlSelf->SingleCycleProc__DOT__instruction 
                                                                           >> 0xcU)))))
                                                     : 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->SingleCycleProc__DOT__instruction 
                                                                             >> 0x15U))))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(
                                                                       (0xfffU 
                                                                        & (vlSelf->SingleCycleProc__DOT__instruction 
                                                                           >> 0xaU)))))));
    }
    vlSelf->SingleCycleProc__DOT__rf__DOT__readB = 
        ((((IData)(vlSelf->SingleCycleProc__DOT__rf__DOT__last_write_valid) 
           & ((IData)(vlSelf->SingleCycleProc__DOT__RBsel) 
              == (IData)(vlSelf->SingleCycleProc__DOT__rf__DOT__last_rw))) 
          & (0x1fU != (IData)(vlSelf->SingleCycleProc__DOT__RBsel)))
          ? vlSelf->SingleCycleProc__DOT__rf__DOT__last_data
          : ([&]() {
                vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__1__addr 
                    = vlSelf->SingleCycleProc__DOT__RBsel;
                vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__1__Vfuncout 
                    = ((0x1fU == (IData)(vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__1__addr))
                        ? 0ULL : ((0x1eU < (IData)(vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__1__addr))
                                   ? 0ULL : ((0x1eU 
                                              >= (IData)(vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__1__addr))
                                              ? vlSelf->SingleCycleProc__DOT__rf__DOT__registers
                                             [vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__1__addr]
                                              : 0ULL)));
            }(), vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__1__Vfuncout));
    vlSelf->SingleCycleProc__DOT__alu_in_b = ((IData)(vlSelf->SingleCycleProc__DOT__ALUSrc)
                                               ? vlSelf->SingleCycleProc__DOT__SignExOut
                                               : vlSelf->SingleCycleProc__DOT__rf__DOT__readB);
    vlSelf->SingleCycleProc__DOT__aluout = ((8U & (IData)(vlSelf->SingleCycleProc__DOT__ALUOp))
                                             ? 0ULL
                                             : ((4U 
                                                 & (IData)(vlSelf->SingleCycleProc__DOT__ALUOp))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->SingleCycleProc__DOT__ALUOp))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->SingleCycleProc__DOT__ALUOp))
                                                   ? vlSelf->SingleCycleProc__DOT__alu_in_b
                                                   : 
                                                  (vlSelf->SingleCycleProc__DOT__rf__DOT__readA 
                                                   - vlSelf->SingleCycleProc__DOT__alu_in_b))
                                                  : 0ULL)
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->SingleCycleProc__DOT__ALUOp))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->SingleCycleProc__DOT__ALUOp))
                                                   ? 0ULL
                                                   : 
                                                  (vlSelf->SingleCycleProc__DOT__rf__DOT__readA 
                                                   + vlSelf->SingleCycleProc__DOT__alu_in_b))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->SingleCycleProc__DOT__ALUOp))
                                                   ? 
                                                  (vlSelf->SingleCycleProc__DOT__rf__DOT__readA 
                                                   | vlSelf->SingleCycleProc__DOT__alu_in_b)
                                                   : 
                                                  (vlSelf->SingleCycleProc__DOT__rf__DOT__readA 
                                                   & vlSelf->SingleCycleProc__DOT__alu_in_b)))));
    vlSelf->SingleCycleProc__DOT__zero = (0ULL == vlSelf->SingleCycleProc__DOT__aluout);
    vlSelf->MemtoRegOut = ((IData)(vlSelf->SingleCycleProc__DOT__MemtoReg)
                            ? ((IData)(vlSelf->SingleCycleProc__DOT__MemRead)
                                ? vlSelf->SingleCycleProc__DOT__dmem__DOT__mem
                               [(0xffU & (IData)((vlSelf->SingleCycleProc__DOT__aluout 
                                                  >> 3U)))]
                                : 0ULL) : vlSelf->SingleCycleProc__DOT__aluout);
    vlSelf->SingleCycleProc__DOT__nextpc = (4ULL + vlSelf->currentpc);
    if (((IData)(vlSelf->SingleCycleProc__DOT__Branch) 
         & (IData)(vlSelf->SingleCycleProc__DOT__zero))) {
        vlSelf->SingleCycleProc__DOT__nextpc = (vlSelf->currentpc 
                                                + vlSelf->SingleCycleProc__DOT__SignExOut);
    }
    if (vlSelf->SingleCycleProc__DOT__Uncondbranch) {
        vlSelf->SingleCycleProc__DOT__nextpc = (vlSelf->currentpc 
                                                + vlSelf->SingleCycleProc__DOT__SignExOut);
    }
}

VL_ATTR_COLD void VSingleCycleProc___024root___eval_stl(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSingleCycleProc___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VSingleCycleProc___024root___eval_triggers__stl(VSingleCycleProc___024root* vlSelf);

VL_ATTR_COLD bool VSingleCycleProc___024root___eval_phase__stl(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSingleCycleProc___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSingleCycleProc___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleProc___024root___dump_triggers__act(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge CLK)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleProc___024root___dump_triggers__nba(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge CLK)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingleCycleProc___024root___ctor_var_reset(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->startpc = VL_RAND_RESET_Q(64);
    vlSelf->currentpc = VL_RAND_RESET_Q(64);
    vlSelf->MemtoRegOut = VL_RAND_RESET_Q(64);
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleProc__DOT__nextpc = VL_RAND_RESET_Q(64);
    vlSelf->SingleCycleProc__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleProc__DOT__RBsel = VL_RAND_RESET_I(5);
    vlSelf->SingleCycleProc__DOT__Reg2Loc = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleProc__DOT__ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleProc__DOT__MemtoReg = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleProc__DOT__RegWrite = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleProc__DOT__MemRead = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleProc__DOT__MemWrite = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleProc__DOT__Branch = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleProc__DOT__Uncondbranch = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleProc__DOT__ALUOp = VL_RAND_RESET_I(4);
    vlSelf->SingleCycleProc__DOT__SignOp = VL_RAND_RESET_I(2);
    vlSelf->SingleCycleProc__DOT__aluout = VL_RAND_RESET_Q(64);
    vlSelf->SingleCycleProc__DOT__SignExOut = VL_RAND_RESET_Q(64);
    vlSelf->SingleCycleProc__DOT__alu_in_b = VL_RAND_RESET_Q(64);
    vlSelf->SingleCycleProc__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleProc__DOT__IsMovz = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 31; ++__Vi0) {
        vlSelf->SingleCycleProc__DOT__rf__DOT__registers[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SingleCycleProc__DOT__rf__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleProc__DOT__rf__DOT__last_rw = VL_RAND_RESET_I(5);
    vlSelf->SingleCycleProc__DOT__rf__DOT__last_data = VL_RAND_RESET_Q(64);
    vlSelf->SingleCycleProc__DOT__rf__DOT__last_write_valid = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleProc__DOT__rf__DOT__readA = VL_RAND_RESET_Q(64);
    vlSelf->SingleCycleProc__DOT__rf__DOT__readB = VL_RAND_RESET_Q(64);
    vlSelf->SingleCycleProc__DOT__rf__DOT____Vlvbound_h00cb4df4__0 = VL_RAND_RESET_Q(64);
    vlSelf->SingleCycleProc__DOT__sext__DOT__hw = VL_RAND_RESET_I(2);
    vlSelf->SingleCycleProc__DOT__sext__DOT__imm16 = VL_RAND_RESET_I(16);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->SingleCycleProc__DOT__dmem__DOT__mem[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->SingleCycleProc__DOT__dmem__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__0__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__0__addr = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__1__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_SingleCycleProc__DOT__rf__DOT__safe_read__1__addr = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__CLK__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
