#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

/* Enforce resolving OMD_CC_VERSION here. */
#if defined(OMD_CC_VERSION)
#undef OMD_CC_VERSION
#endif

#if OMD_CC == OMD_CC_ARM
    #include <omdetect/internal/cc/version/arm.h>
#elif OMD_CC == OMD_CC_AZTEC
    #include <omdetect/internal/cc/version/aztec.h>
#elif OMD_CC == OMD_CC_BORLAND
    #include <omdetect/internal/cc/version/borland.h>
#elif OMD_CC == OMD_CC_CC65
    #include <omdetect/internal/cc/version/cc65.h>
#elif OMD_CC == OMD_CC_CLANG || OMD_CC == OMD_CC_APPLE_CLANG
    #include <omdetect/internal/cc/version/clang.h>
#elif OMD_CC == OMD_CC_COMEAU
    #include <omdetect/internal/cc/version/comeau.h>
#elif OMD_CC == OMD_CC_COMPAQ
    #include <omdetect/internal/cc/version/compaq.h>
#elif OMD_CC == OMD_CC_CRAY
    #include <omdetect/internal/cc/version/cray.h>
#elif OMD_CC == OMD_CC_CWARRIOR
    #include <omdetect/internal/cc/version/cwarrior.h>
#elif OMD_CC == OMD_CC_DIAB
    #include <omdetect/internal/cc/version/diab.h>
#elif OMD_CC == OMD_CC_DIGNUS
    #include <omdetect/internal/cc/version/dignus.h>
#elif OMD_CC == OMD_CC_DJGPP
    #include <omdetect/internal/cc/version/djgpp.h>
#elif OMD_CC == OMD_CC_DMC
    #include <omdetect/internal/cc/version/dmc.h>
#elif OMD_CC == OMD_CC_EDG
    #include <omdetect/internal/cc/version/edg.h>
#elif OMD_CC == OMD_CC_EKOPATH
    #include <omdetect/internal/cc/version/ekopath.h>
#elif OMD_CC == OMD_CC_GCC
    #include <omdetect/internal/cc/version/gcc.h>
#elif OMD_CC == OMD_CC_GHS
    #include <omdetect/internal/cc/version/ghs.h>
#elif OMD_CC == OMD_CC_HP_ACC
    #include <omdetect/internal/cc/version/hp_acc.h>
#elif OMD_CC == OMD_CC_IAR
    #include <omdetect/internal/cc/version/iar.h>
#elif OMD_CC == OMD_CC_IBM_XL
    #include <omdetect/internal/cc/version/ibm_xl.h>
#elif OMD_CC == OMD_CC_IBMZ_XL
    #include <omdetect/internal/cc/version/ibmz_xl.h>
#elif OMD_CC == OMD_CC_ICC
    #include <omdetect/internal/cc/version/icc.h>
#elif OMD_CC == OMD_CC_KCC
    #include <omdetect/internal/cc/version/kcc.h>
#elif OMD_CC == OMD_CC_KEIL_C166 || OMD_CC == OMD_CC_KEIL_C51 || OMD_CC == OMD_CC_KEIL_CARM
    #include <omdetect/internal/cc/version/keil.h>
#elif OMD_CC == OMD_CC_MINGW || OMD_CC == OMD_CC_MINGW64
    #include <omdetect/internal/cc/version/mingw.h>
#elif OMD_CC == OMD_CC_MIPSPRO
    #include <omdetect/internal/cc/version/mipspro.h>
#elif OMD_CC == OMD_CC_MPW
    #include <omdetect/internal/cc/version/mpw.h>
#elif OMD_CC == OMD_CC_MSVC
    #include <omdetect/internal/cc/version/msvc.h>
#elif OMD_CC == OMD_CC_NVCC
    #include <omdetect/internal/cc/version/nvcc.h>
#elif OMD_CC == OMD_CC_OPEN64
    #include <omdetect/internal/cc/version/open64.h>
#elif OMD_CC == OMD_CC_ORANGE
    #include <omdetect/internal/cc/version/orange.h>
#elif OMD_CC == OMD_CC_PALM
    #include <omdetect/internal/cc/version/palm.h>
#elif OMD_CC == OMD_CC_PGI
    #include <omdetect/internal/cc/version/pgi.h>
#elif OMD_CC == OMD_CC_SDCC
    #include <omdetect/internal/cc/version/sdcc.h>
#elif OMD_CC == OMD_CC_SUNPRO
    #include <omdetect/internal/cc/version/sunpro.h>
#elif OMD_CC == OMD_CC_TCC
    #include <omdetect/internal/cc/version/tcc.h>
#elif OMD_CC == OMD_CC_THINK
    #include <omdetect/internal/cc/version/think.h>
#elif OMD_CC == OMD_CC_WATCOM
    #include <omdetect/internal/cc/version/watcom.h>
#endif

/* Safeguard */
#if !defined(OMD_CC_VERSION)
    #define OMD_CC_VERSION OMD_NO_VERSION
#endif

#define OMD_CC_MAJOR OMD_VERSION_MAJOR(OMD_CC_VERSION)
#define OMD_CC_MINOR OMD_VERSION_MINOR(OMD_CC_VERSION)
#define OMD_CC_PATCH OMD_VERSION_PATCH(OMD_CC_VERSION)
