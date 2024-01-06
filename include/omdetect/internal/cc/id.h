#include <omdetect/internal/preamble.h>

/* Enforce resolving OMD_CC here. */
#if defined(OMD_CC)
#undef OMD_CC
#endif

#if defined(__ACC__)
    /* ACC */
    #define OMD_CC OMD_CC_ACC
#elif defined(__ACK__)
    /* Amsterdam Compiler Kit */
    #define OMD_CC OMD_CC_ACK
#elif defined(__CC_ARM)
    /* ARM Compiler */
    #define OMD_CC OMD_CC_ARM
#elif defined(AZTEC_C) || defined(__AZTEC_C__)
    /* Aztec C */
    #define OMD_CC OMD_CC_AZTEC
#elif defined(__BORLANDC__) || defined(__CODEGEARC__)
    /* Borland C++ */
    #define OMD_CC OMD_CC_BORLAND
#elif defined(__CC65__)
    /* CC65 */
    #define OMD_CC OMD_CC_CC65
#elif defined(__clang__)
    #if defined(__ibmxl__) || defined(__xlC__) || defined(__xlc__)
        /* IBM XL */
        #define OMD_CC OMD_CC_IBM_XL
    #elif defined(__apple_build_version__)
        /* Apple Clang */
        #define OMD_CC OMD_CC_APPLE_CLANG
    #elif defined(__SCCZ80) || defined(SCCZ80)
        /* Z88DK */
        #define OMD_CC OMD_CC_Z88DK
    #else
        /* Clang */
        #define OMD_CC OMD_CC_CLANG
    #endif
#elif defined(__COMO__)
    /* Comeau C++ */
    #define OMD_CC OMD_CC_COMEAU
#elif defined(__COMPCERT__)
    /* CompCert */
    #define OMD_CC OMD_CC_COMPCERT
#elif defined(__convexc__)
    /* Convex C */
    #define OMD_CC OMD_CC_CONVEX
#elif defined(_CRAYC)
    /* Cray */
    #define OMD_CC OMD_CC_CRAY
#elif defined(__CWCC__) || defined(__MWERKS__)
    /* Metroworks CodeWarrior */
    #define OMD_CC OMD_CC_CWARRIOR
#elif defined(__DCC__)
    /* Diab */
    #define OMD_CC OMD_CC_DIAB
#elif defined(__DECC) || defined(__DECCXX)
    /* Compaq */
    #define OMD_CC OMD_CC_COMPAQ
#elif defined(_DICE)
    /* DICE */
    #define OMD_CC OMD_CC_DICE
#elif defined(__DJGPP__) || defined(__GO32__)
    /* DJGPP */
    #define OMD_CC OMD_CC_DJGPP
#elif defined(__DMC__)
    /* Digital Mars */
    #define OMD_CC OMD_CC_DMC
#elif defined(__EDG__)
    #if defined(__LCC__) || defined(__MCST__)
        /* MCST LCC */
        #define OMD_CC OMD_CC_MCST
    #else
        /* EDG C++ Frontend */
        #define OMD_CC OMD_CC_EDG
    #endif
#elif defined(__ghs__)
    /* Green Hill */
    #define OMD_CC OMD_CC_GHS
#elif defined(__GNUC__)
    #if defined(__INTEL_COMPILER) || defined(__ICC) || defined(__ICL) || defined(__ECC)
        /* ICC */
        #define OMD_CC OMD_CC_ICC
    #elif defined(__MINGW64__) || (defined(__MINGW32__) && defined(__MINGW64_VERSION_MAJOR))
        /* MinGW-w64 */
        #define OMD_CC OMD_CC_MINGW64
    #elif defined(__MINGW32__)
        /* MinGW */
        #define OMD_CC OMD_CC_MINGW
    #else
        /* GCC */
        #define OMD_CC OMD_CC_GCC
    #endif
#elif defined(__HIGHC__)
    /* MetaWare High */
    #define OMD_CC OMD_CC_HIGHC
#elif defined(__HP_aCC)
    /* HP aC++ */
    #define OMD_CC OMD_CC_HP_ACC
#elif defined(__HP_cc)
    /* HP ANSI C */
    #define OMD_CC OMD_CC_HP_ANSI
#elif defined(__IAR_SYSTEMS_ICC__)
    /* IAR */
    #define OMD_CC OMD_CC_IAR
#elif defined(__ibmxl__) || defined(__xlC__) || defined(__xlc__)
    /* IBM XL */
    #define OMD_CC OMD_CC_IBM_XL
#elif (defined(__IBMC__) || defined(__IBMCPP__)) && !defined(__xlC__) && defined(__COMPILER_VER__)
    /* IBM z/OS XL */
    #define OMD_CC OMD_CC_IBMZ_XL
#elif defined(__IMAGECRAFT__)
    /* ImageCraft C */
    #define OMD_CC OMD_CC_IMAGECRAFT
#elif defined(__INTEL_COMPILER) || defined(__ICC) || defined(__ICL) || defined(__ECC)
    /* ICC */
    #define OMD_CC OMD_CC_ICC
#elif defined(__KCC)
    /* KAI C++ */
    #define OMD_CC OMD_CC_KCC
#elif defined(__C166__)
    /* Keil C166 */
    #define OMD_CC OMD_CC_KEIL_C166
#elif defined(__C51__) || defined(__CX51__)
    /* Keil C51 */
    #define OMD_CC OMD_CC_KEIL_C51
#elif defined(__KEIL__) && defined(__CA__)
    /* Keil CARM */
    #define OMD_CC OMD_CC_KEIL_CARM
#elif defined(__LCC__)
    #if defined(__MCST__) || defined(__EDG__)
        /* MCST LCC */
        #define OMD_CC OMD_CC_MCST
    #else
        /* LCC */
        #define OMD_CC OMD_CC_LCC
    #endif
#elif defined(__MINGW64__) || (defined(__MINGW32__) && defined(__MINGW64_VERSION_MAJOR))
    /* MinGW-w64 */
    #define OMD_CC OMD_CC_MINGW64
#elif defined(__MINGW32__)
    /* MinGW */
    #define OMD_CC OMD_CC_MINGW
#elif defined(__MRC__) || defined(MPW_C) || defined(MPW_CPLUS)
    /* MPW */
    #define OMD_CC OMD_CC_MPW
#elif defined(_MRI)
    /* Microtec */
    #define OMD_CC OMD_CC_MRI
#elif defined(_MSC_VER)
    #if defined(__INTEL_COMPILER)
        /* ICC */
        #define OMD_CC OMD_CC_ICC
    #else
        /* MSVC */
        #define OMD_CC OMD_CC_MSVC
    #endif
#elif defined(__NVCC__)
    /* NVCC */
    #define OMD_CC OMD_CC_NVCC
#elif defined(__NWCC__)
    /* nwcc */
    #define OMD_CC OMD_CC_NWCC
#elif defined(__OPEN64__) || defined(__OPENCC__)
    /* Open64 */
    #define OMD_CC OMD_CC_OPEN64
#elif defined(__ORANGEC__)
    /* Orange C */
    #define OMD_CC OMD_CC_ORANGE
#elif defined(_PACC_VER)
    /* Palm */
    #define OMD_CC OMD_CC_PALM
#elif defined(__PATHCC__)
    /* EKOPath */
    #define OMD_CC OMD_CC_EKOPATH
#elif defined(__PGI)
    /* Portland Group Compiler */
    #define OMD_CC OMD_CC_PGI
#elif defined(__SDCC) || defined(SDCC)
    #if defined(__SCCZ80) || defined(SCCZ80)
        /* Z88DK */
        #define OMD_CC OMD_CC_Z88DK
    #else
        /* SDCC */
        #define OMD_CC OMD_CC_SDCC
    #endif
#elif defined(_SCO_DS)
    /* SCO OpenServer */
    #define OMD_CC OMD_CC_OPENSERVER
#elif defined(__sgi) || defined(sgi)
    /* MIPSpro */
    #define OMD_CC OMD_CC_MIPSPRO
#elif defined(__SNC__)
    /* SN Compiler */
    #define OMD_CC OMD_CC_SNC
#elif defined(__SUNPRO_C) || defined(__SUNPRO_CC)
    /* Oracle Solaris Studio */
    #define OMD_CC OMD_CC_SUNPRO
#elif defined(__SYSC__)
    /* Dignus Systems/C++ */
    #define OMD_CC OMD_CC_DIGNUS
#elif defined(__TenDRA__)
    /* TenDRA */
    #define OMD_CC OMD_CC_TENDRA
#elif defined(THINKC4) || defined(THINKC3)
    /* THINK C */
    #define OMD_CC OMD_CC_THINK
#elif defined(__TINYC__)
    /* TCC */
    #define OMD_CC OMD_CC_TCC
#elif defined(__TURBOC__)
    /* Borland Turbo C */
    #define OMD_CC OMD_CC_TURBO
#elif defined(__VOSC__)
    /* Stratus VOS C */
    #define OMD_CC OMD_CC_STRATUS_VOS
#elif defined(__WATCOMC__)
    /* Watcom C++ */
    #define OMD_CC OMD_CC_WATCOM
#elif defined(__SCCZ80) || defined(SCCZ80)
    /* Z88DK */
    #define OMD_CC OMD_CC_Z88DK
#elif defined(__llvm__)
    /* LLVM */
    #define OMD_CC OMD_CC_LLVM
#endif

/* Safeguard */
#if !defined(OMD_CC)
    #define OMD_CC OMD_CC_UNKNOWN
#endif
