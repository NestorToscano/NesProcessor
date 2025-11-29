// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSingleCycleProc__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSingleCycleProc::VSingleCycleProc(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSingleCycleProc__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , reset{vlSymsp->TOP.reset}
    , startpc{vlSymsp->TOP.startpc}
    , currentpc{vlSymsp->TOP.currentpc}
    , MemtoRegOut{vlSymsp->TOP.MemtoRegOut}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSingleCycleProc::VSingleCycleProc(const char* _vcname__)
    : VSingleCycleProc(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSingleCycleProc::~VSingleCycleProc() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSingleCycleProc___024root___eval_debug_assertions(VSingleCycleProc___024root* vlSelf);
#endif  // VL_DEBUG
void VSingleCycleProc___024root___eval_static(VSingleCycleProc___024root* vlSelf);
void VSingleCycleProc___024root___eval_initial(VSingleCycleProc___024root* vlSelf);
void VSingleCycleProc___024root___eval_settle(VSingleCycleProc___024root* vlSelf);
void VSingleCycleProc___024root___eval(VSingleCycleProc___024root* vlSelf);

void VSingleCycleProc::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSingleCycleProc::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSingleCycleProc___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSingleCycleProc___024root___eval_static(&(vlSymsp->TOP));
        VSingleCycleProc___024root___eval_initial(&(vlSymsp->TOP));
        VSingleCycleProc___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSingleCycleProc___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSingleCycleProc::eventsPending() { return false; }

uint64_t VSingleCycleProc::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSingleCycleProc::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSingleCycleProc___024root___eval_final(VSingleCycleProc___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleProc::final() {
    VSingleCycleProc___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSingleCycleProc::hierName() const { return vlSymsp->name(); }
const char* VSingleCycleProc::modelName() const { return "VSingleCycleProc"; }
unsigned VSingleCycleProc::threads() const { return 1; }
void VSingleCycleProc::prepareClone() const { contextp()->prepareClone(); }
void VSingleCycleProc::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VSingleCycleProc::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSingleCycleProc___024root__trace_decl_types(VerilatedVcd* tracep);

void VSingleCycleProc___024root__trace_init_top(VSingleCycleProc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSingleCycleProc___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleProc___024root*>(voidSelf);
    VSingleCycleProc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VSingleCycleProc___024root__trace_decl_types(tracep);
    VSingleCycleProc___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VSingleCycleProc___024root__trace_register(VSingleCycleProc___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSingleCycleProc::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSingleCycleProc::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSingleCycleProc___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
