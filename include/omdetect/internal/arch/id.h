#include <omdetect/internal/preamble.h>

/* Enforce resolving OMD_ARCH here. */
#if defined(OMD_ARCH)
#undef OMD_ARCH
#endif

#if defined(__aarch64__) || defined(_M_ARM64) || defined(_M_ARM64EC) || defined(__AARCH64EL__) || defined(__arm64)
    /* AArch64 */
    #define OMD_ARCH OMD_ARCH_AARCH64
#elif defined(__ARM_ARCH) || defined(__TARGET_ARCH_ARM) || defined(__TARGET_ARCH_THUMB) || defined(_M_ARM) ||          \
      defined(__arm__) || defined(__thumb__) || defined(__arm) ||                                                      \
      defined(_ARM) || defined(_M_ARM) || defined(_M_ARMT)
    /* ARM */
    #define OMD_ARCH OMD_ARCH_ARM
#elif defined(__alpha__) || defined(__alpha) || defined(_M_ALPHA)
    /* Alpha */
    #define OMD_ARCH OMD_ARCH_ALPHA
#elif defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64) ||                            \
      defined(_M_X64) || defined(_M_AMD64)
    /* AMD64 */
    #define OMD_ARCH OMD_ARCH_AMD64
#elif defined(__bfin) || defined(__BFIN__) || defined(__ADSPBLACKFIN__) || defined(bfin) || defined(BFIN)
    /* Blackfin */
    #define OMD_ARCH OMD_ARCH_BLACKFIN
#elif defined(__convex__)
    /* Convex */
    #define OMD_ARCH OMD_ARCH_CONVEX
#elif defined(__e2k__)
    /* E2K */
    #define OMD_ARCH OMD_ARCH_E2K
#elif defined(__epiphany__)
    /* Adapteva Epiphany */
    #define OMD_ARCH OMD_ARCH_EPIPHANY
#elif defined(__loongarch__)
    /* LoongArch */
    #define OMD_ARCH OMD_ARCH_LOONGARCH
#elif defined(__CUDA_ARCH__)
    /* PTX */
    #define OMD_ARCH OMD_ARCH_PTX
#elif defined(pyr)
    /* Pyramid 9810 */
    #define OMD_ARCH OMD_ARCH_PYRAMID
#elif defined(__riscv)
    /* RISC-V */
    #define OMD_ARCH OMD_ARCH_RISCV
#elif defined(__m68k__) || defined(M68000) || defined(__MC68K__)
    /* Motorola 68k */
    #define OMD_ARCH OMD_ARCH_M68K
#elif defined(__mips__) || defined(mips) || defined(__mips) || defined(__MIPS__)
    /* MIPS */
    #define OMD_ARCH OMD_ARCH_MIPS
#elif defined(__hppa__) || defined(__HPPA__) || defined(__hppa) ||                                                     \
      defined(_PA_RISC2_0) || defined(__RISC2_0__) || defined(__HPPA20__) || defined(__PA8000__) ||                    \
      defined(_PA_RISC1_1) || defined(__HPPA11__) || defined(__PA7100__) || defined(_PA_RISC1_0)
    /* PA-RISC */
    #define OMD_ARCH OMD_ARCH_PA_RISC
#elif defined(__ia64__) || defined(_IA64) || defined(__IA64__) ||                                                      \
      defined(__ia64) || defined(_M_IA64) || defined(__itanium__)
    /* Intel Itanium */
    #define OMD_ARCH OMD_ARCH_IA64
#elif defined(__THW_RS6000) || defined(_IBMR2) || defined(_POWER) ||                                                   \
      defined(_ARCH_PWR) || defined(_ARCH_PWR2) || defined(_ARCH_PWR3) || defined(_ARCH_PWR4) ||                       \
      defined(_ARCH_PWR5) || defined(_ARCH_PWR5X) || defined(_ARCH_PWR6) || defined(_ARCH_PWR6E) ||                    \
      defined(_ARCH_PWR7)|| defined(_ARCH_PWR8)
    /* RS/6000 */
    #define OMD_ARCH OMD_ARCH_RS6000
#elif defined(__powerpc64__) || defined(__ppc64__) || defined(__PPC64__) || defined(_ARCH_PPC64) || defined(_XENON)
    /* PowerPC (64 bit) */
    #define OMD_ARCH OMD_ARCH_PPC64
#elif defined(__powerpc) || defined(__powerpc__) || defined(__POWERPC__) || defined(__ppc__) || defined(__PPC__) ||    \
      defined(_ARCH_PPC) || defined(_M_PPC) || defined(__PPCGECKO__) || defined(__PPCBROADWAY__) || defined(__ppc)
    /* PowerPC */
    #define OMD_ARCH OMD_ARCH_PPC
#elif defined(__sparc__) || defined(__sparc)
    /* SPARC */
    #define OMD_ARCH OMD_ARCH_SPARC
#elif defined(__sh__)
    /* SuperH */
    #define OMD_ARCH OMD_ARCH_SUPERH
#elif defined(__zarch__) || defined(__SYSC_ZARCH__)
    /* z/Architecture */
    #define OMD_ARCH OMD_ARCH_Z
#elif defined(__s390x__) || defined(__s390__) || defined(__TOS_390__)
    /* System/390 */
    #define OMD_ARCH OMD_ARCH_S390
#elif defined(__370__) || defined(__THW_370__)
    /* System/370 */
    #define OMD_ARCH OMD_ARCH_S370
#elif defined(i386) || defined(__i386) ||                                                                              \
      defined(__i386__) || defined(__i486__) || defined(__i586__) || defined(__i686__) ||                              \
      defined(__IA32__) || defined(__X86__) || defined(_X86_) ||                                                       \
      defined(__THW_INTEL__) || defined(__I86__) || defined(__INTEL__) ||                                              \
      defined(__386__) || defined(__386) || defined(_M_I386)
    /* x86 */
    #define OMD_ARCH OMD_ARCH_X86
#elif defined(__8085__) || defined(__8080__) || defined(__Z80) || defined(__Z180)
    /* Intel 8080 */
    #define OMD_ARCH OMD_ARCH_X80
#endif

/* Safeguard */
#if !defined(OMD_ARCH)
    #define OMD_ARCH OMD_ARCH_UNKNOWN
#endif
