#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

/* Enforce resolving OMD_ARCH_VERSION here. */
#if defined(OMD_ARCH_VERSION)
#undef OMD_ARCH_VERSION
#endif

#if OMD_ARCH == OMD_ARCH_AARCH64
    #include <omdetect/internal/arch/version/aarch64.h>
#elif OMD_ARCH == OMD_ARCH_ALPHA
    #include <omdetect/internal/arch/version/alpha.h>
#elif OMD_ARCH == OMD_ARCH_ARM
    #include <omdetect/internal/arch/version/arm.h>
#elif OMD_ARCH == OMD_ARCH_BLACKFIN
    #include <omdetect/internal/arch/version/blackfin.h>
#elif OMD_ARCH == OMD_ARCH_CONVEX
    #include <omdetect/internal/arch/version/convex.h>
#elif OMD_ARCH == OMD_ARCH_E2K
    #include <omdetect/internal/arch/version/e2k.h>
#elif OMD_ARCH == OMD_ARCH_M68K
    #include <omdetect/internal/arch/version/m64k.h>
#elif OMD_ARCH == OMD_ARCH_MIPS
    #include <omdetect/internal/arch/version/mips.h>
#elif OMD_ARCH == OMD_ARCH_PA_RISC
    #include <omdetect/internal/arch/version/pa_risc.h>
#elif OMD_ARCH == OMD_ARCH_PPC || OMD_ARCH == OMD_ARCH_PPC64
    #include <omdetect/internal/arch/version/ppc.h>
#elif OMD_ARCH == OMD_ARCH_PTX
    #include <omdetect/internal/arch/version/ptx.h>
#elif OMD_ARCH == OMD_ARCH_RS6000
    #include <omdetect/internal/arch/version/rs6000.h>
#elif OMD_ARCH == OMD_ARCH_SPARC
    #include <omdetect/internal/arch/version/sparc.h>
#elif OMD_ARCH == OMD_ARCH_SUPERH
    #include <omdetect/internal/arch/version/superh.h>
#elif OMD_ARCH == OMD_ARCH_X86
    #include <omdetect/internal/arch/version/x86.h>
#endif

/* Safeguard */
#if !defined(OMD_ARCH_VERSION)
    #define OMD_ARCH_VERSION OMD_NO_VERSION
#endif

#define OMD_ARCH_MAJOR OMD_VERSION_MAJOR(OMD_ARCH_VERSION)
#define OMD_ARCH_MINOR OMD_VERSION_MINOR(OMD_ARCH_VERSION)
#define OMD_ARCH_PATCH OMD_VERSION_PATCH(OMD_ARCH_VERSION)
