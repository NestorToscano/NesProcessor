// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleProc.h for the primary calling header

#include "VSingleCycleProc__pch.h"
#include "VSingleCycleProc___024root.h"

void VSingleCycleProc___024root___eval_act(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___eval_act\n"); );
}

VL_INLINE_OPT void VSingleCycleProc___024root___nba_sequent__TOP__0(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__SingleCycleProc__DOT__rf__DOT__registers__v0;
    __Vdlyvdim0__SingleCycleProc__DOT__rf__DOT__registers__v0 = 0;
    QData/*63:0*/ __Vdlyvval__SingleCycleProc__DOT__rf__DOT__registers__v0;
    __Vdlyvval__SingleCycleProc__DOT__rf__DOT__registers__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleProc__DOT__rf__DOT__registers__v0;
    __Vdlyvset__SingleCycleProc__DOT__rf__DOT__registers__v0 = 0;
    CData/*7:0*/ __Vdlyvdim0__SingleCycleProc__DOT__dmem__DOT__mem__v0;
    __Vdlyvdim0__SingleCycleProc__DOT__dmem__DOT__mem__v0 = 0;
    QData/*63:0*/ __Vdlyvval__SingleCycleProc__DOT__dmem__DOT__mem__v0;
    __Vdlyvval__SingleCycleProc__DOT__dmem__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleProc__DOT__dmem__DOT__mem__v0;
    __Vdlyvset__SingleCycleProc__DOT__dmem__DOT__mem__v0 = 0;
    // Body
    __Vdlyvset__SingleCycleProc__DOT__dmem__DOT__mem__v0 = 0U;
    __Vdlyvset__SingleCycleProc__DOT__rf__DOT__registers__v0 = 0U;
    if (vlSelf->SingleCycleProc__DOT__MemWrite) {
        __Vdlyvval__SingleCycleProc__DOT__dmem__DOT__mem__v0 
            = vlSelf->SingleCycleProc__DOT__rf__DOT__readB;
        __Vdlyvset__SingleCycleProc__DOT__dmem__DOT__mem__v0 = 1U;
        __Vdlyvdim0__SingleCycleProc__DOT__dmem__DOT__mem__v0 
            = (0xffU & (IData)((vlSelf->SingleCycleProc__DOT__aluout 
                                >> 3U)));
    }
    if (((IData)(vlSelf->SingleCycleProc__DOT__RegWrite) 
         & (0x1fU != (0x1fU & vlSelf->SingleCycleProc__DOT__instruction)))) {
        vlSelf->SingleCycleProc__DOT__rf__DOT____Vlvbound_h00cb4df4__0 
            = vlSelf->MemtoRegOut;
        if ((0x1eU >= (0x1fU & vlSelf->SingleCycleProc__DOT__instruction))) {
            __Vdlyvval__SingleCycleProc__DOT__rf__DOT__registers__v0 
                = vlSelf->SingleCycleProc__DOT__rf__DOT____Vlvbound_h00cb4df4__0;
            __Vdlyvset__SingleCycleProc__DOT__rf__DOT__registers__v0 = 1U;
            __Vdlyvdim0__SingleCycleProc__DOT__rf__DOT__registers__v0 
                = (0x1fU & vlSelf->SingleCycleProc__DOT__instruction);
        }
        vlSelf->SingleCycleProc__DOT__rf__DOT__last_rw 
            = (0x1fU & vlSelf->SingleCycleProc__DOT__instruction);
        vlSelf->SingleCycleProc__DOT__rf__DOT__last_data 
            = vlSelf->MemtoRegOut;
        vlSelf->SingleCycleProc__DOT__rf__DOT__last_write_valid = 1U;
    } else {
        vlSelf->SingleCycleProc__DOT__rf__DOT__last_write_valid = 0U;
    }
    vlSelf->currentpc = ((IData)(vlSelf->reset) ? vlSelf->startpc
                          : vlSelf->SingleCycleProc__DOT__nextpc);
    if (__Vdlyvset__SingleCycleProc__DOT__dmem__DOT__mem__v0) {
        vlSelf->SingleCycleProc__DOT__dmem__DOT__mem[__Vdlyvdim0__SingleCycleProc__DOT__dmem__DOT__mem__v0] 
            = __Vdlyvval__SingleCycleProc__DOT__dmem__DOT__mem__v0;
    }
    if (__Vdlyvset__SingleCycleProc__DOT__rf__DOT__registers__v0) {
        vlSelf->SingleCycleProc__DOT__rf__DOT__registers[__Vdlyvdim0__SingleCycleProc__DOT__rf__DOT__registers__v0] 
            = __Vdlyvval__SingleCycleProc__DOT__rf__DOT__registers__v0;
    }
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

void VSingleCycleProc___024root___eval_nba(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VSingleCycleProc___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VSingleCycleProc___024root___eval_triggers__act(VSingleCycleProc___024root* vlSelf);

bool VSingleCycleProc___024root___eval_phase__act(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VSingleCycleProc___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VSingleCycleProc___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VSingleCycleProc___024root___eval_phase__nba(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VSingleCycleProc___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleProc___024root___dump_triggers__nba(VSingleCycleProc___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleProc___024root___dump_triggers__act(VSingleCycleProc___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleProc___024root___eval(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VSingleCycleProc___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("SingleCycleProc.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VSingleCycleProc___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("SingleCycleProc.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VSingleCycleProc___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VSingleCycleProc___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VSingleCycleProc___024root___eval_debug_assertions(VSingleCycleProc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleProc___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
}
#endif  // VL_DEBUG
