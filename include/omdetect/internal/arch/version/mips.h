#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__mips)
    #define OMD_ARCH_VERSION OMD_VERSION(__mips, 0, 0)
#elif defined(_MIPS_ISA_MIPS4) || defined(__MIPS_ISA4__)
    #define OMD_ARCH_VERSION OMD_VERSION(4, 0, 0)
#elif defined(_MIPS_ISA_MIPS3) || defined(__MIPS_ISA3__)
    #define OMD_ARCH_VERSION OMD_VERSION(3, 0, 0)
#elif defined(_MIPS_ISA_MIPS2) || defined(__MIPS_ISA2__) || defined(_R4000)
    #define OMD_ARCH_VERSION OMD_VERSION(2, 0, 0)
#elif defined(_MIPS_ISA_MIPS1) || defined(_R3000)
    #define OMD_ARCH_VERSION OMD_VERSION(1, 0, 0)
#endif
