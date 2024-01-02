#include <omdetect/internal/preamble.h>

/* Enforce resolving OMD_ARCH_NAME here. */
#if defined(OMD_ARCH_NAME)
#undef OMD_ARCH_NAME
#endif

#if OMD_ARCH == OMD_ARCH_AARCH64
    #define OMD_ARCH_NAME OMD_ARCH_AARCH64_NAME
#elif OMD_ARCH == OMD_ARCH_ALPHA
    #define OMD_ARCH_NAME OMD_ARCH_ALPHA_NAME
#elif OMD_ARCH == OMD_ARCH_ARM
    #define OMD_ARCH_NAME OMD_ARCH_ARM_NAME
#elif OMD_ARCH == OMD_ARCH_AMD64
    #define OMD_ARCH_NAME OMD_ARCH_AMD64_NAME
#elif OMD_ARCH == OMD_ARCH_BLACKFIN
    #define OMD_ARCH_NAME OMD_ARCH_BLACKFIN_NAME
#elif OMD_ARCH == OMD_ARCH_CONVEX
    #define OMD_ARCH_NAME OMD_ARCH_CONVEX_NAME
#elif OMD_ARCH == OMD_ARCH_E2K
    #define OMD_ARCH_NAME OMD_ARCH_E2K_NAME
#elif OMD_ARCH == OMD_ARCH_EPIPHANY
    #define OMD_ARCH_NAME OMD_ARCH_EPIPHANY_NAME
#elif OMD_ARCH == OMD_ARCH_IA64
    #define OMD_ARCH_NAME OMD_ARCH_IA64_NAME
#elif OMD_ARCH == OMD_ARCH_LOONGARCH
    #define OMD_ARCH_NAME OMD_ARCH_LOONGARCH_NAME
#elif OMD_ARCH == OMD_ARCH_M68K
    #define OMD_ARCH_NAME OMD_ARCH_M68K_NAME
#elif OMD_ARCH == OMD_ARCH_MIPS
    #define OMD_ARCH_NAME OMD_ARCH_MIPS_NAME
#elif OMD_ARCH == OMD_ARCH_PA_RISC
    #define OMD_ARCH_NAME OMD_ARCH_PA_RISC_NAME
#elif OMD_ARCH == OMD_ARCH_PPC
    #define OMD_ARCH_NAME OMD_ARCH_PPC_NAME
#elif OMD_ARCH == OMD_ARCH_PPC64
    #define OMD_ARCH_NAME OMD_ARCH_PPC64_NAME
#elif OMD_ARCH == OMD_ARCH_PTX
    #define OMD_ARCH_NAME OMD_ARCH_PTX_NAME
#elif OMD_ARCH == OMD_ARCH_PYRAMID
    #define OMD_ARCH_NAME OMD_ARCH_PYRAMID_NAME
#elif OMD_ARCH == OMD_ARCH_RISCV
    #define OMD_ARCH_NAME OMD_ARCH_RISCV_NAME
#elif OMD_ARCH == OMD_ARCH_RS6000
    #define OMD_ARCH_NAME OMD_ARCH_RS6000_NAME
#elif OMD_ARCH == OMD_ARCH_SPARC
    #define OMD_ARCH_NAME OMD_ARCH_SPARC_NAME
#elif OMD_ARCH == OMD_ARCH_SUPERH
    #define OMD_ARCH_NAME OMD_ARCH_SUPERH_NAME
#elif OMD_ARCH == OMD_ARCH_S370
    #define OMD_ARCH_NAME OMD_ARCH_S370_NAME
#elif OMD_ARCH == OMD_ARCH_S390
    #define OMD_ARCH_NAME OMD_ARCH_S390_NAME
#elif OMD_ARCH == OMD_ARCH_X80
    #define OMD_ARCH_NAME OMD_ARCH_X80_NAME
#elif OMD_ARCH == OMD_ARCH_X86
    #define OMD_ARCH_NAME OMD_ARCH_X86_NAME
#elif OMD_ARCH == OMD_ARCH_Z
    #define OMD_ARCH_NAME OMD_ARCH_Z_NAME
#endif

/* Safeguard */
#if !defined(OMD_ARCH_NAME)
    #define OMD_ARCH_NAME OMD_ARCH_UNKNOWN_NAME
#endif