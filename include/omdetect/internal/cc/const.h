#include <omdetect/internal/preamble.h>

/**
 * Compiler identifiers.
 */
#define OMD_CC_UNKNOWN          0x00
#define OMD_CC_ACC              0x01  /* ACC */
#define OMD_CC_ACK              0x02  /* Amsterdam Compiler Kit */
#define OMD_CC_APPLE_CLANG      0x03  /* Apple Clang */
#define OMD_CC_ARM              0x04  /* ARM Compiler */
#define OMD_CC_AZTEC            0x05  /* Aztec C */
#define OMD_CC_BORLAND          0x06  /* Borland C++ */
#define OMD_CC_CC65             0x07  /* CC65 */
#define OMD_CC_CLANG            0x08  /* Clang */
#define OMD_CC_COMEAU           0x09  /* Comeau C++ */
#define OMD_CC_COMPAQ           0x0a  /* Compaq */
#define OMD_CC_COMPCERT         0x0b  /* CompCert */
#define OMD_CC_CONVEX           0x0c  /* Convex C */
#define OMD_CC_CRAY             0x0d  /* Cray */
#define OMD_CC_CWARRIOR         0x0e  /* Metroworks CodeWarrior */
#define OMD_CC_DIAB             0x0f  /* Diab */
#define OMD_CC_DICE             0x10  /* DICE */
#define OMD_CC_DIGNUS           0x11  /* Dignus Systems/C++ */
#define OMD_CC_DJGPP            0x12  /* DJGPP */
#define OMD_CC_DMC              0x13  /* Digital Mars */
#define OMD_CC_EDG              0x14  /* EDG C++ Frontend */
#define OMD_CC_EKOPATH          0x15  /* EKOPath */
#define OMD_CC_GCC              0x16  /* GCC */
#define OMD_CC_GHS              0x17  /* Green Hill */
#define OMD_CC_HIGHC            0x18  /* MetaWare High */
#define OMD_CC_HP_ACC           0x19  /* HP aC++ */
#define OMD_CC_HP_ANSI          0x1a  /* HP ANSI C */
#define OMD_CC_IAR              0x1b  /* IAR */
#define OMD_CC_IBM_XL           0x1c  /* IBM XL */
#define OMD_CC_IBMZ_XL          0x1d  /* IBM z/OS XL */
#define OMD_CC_ICC              0x1e  /* ICC */
#define OMD_CC_IMAGECRAFT       0x1f  /* ImageCraft C */
#define OMD_CC_KCC              0x20  /* KAI C++ */
#define OMD_CC_KEIL_C166        0x21  /* Keil C166 */
#define OMD_CC_KEIL_C51         0x22  /* Keil C51 */
#define OMD_CC_KEIL_CARM        0x23  /* Keil CARM */
#define OMD_CC_LCC              0x24  /* LCC */
#define OMD_CC_LLVM             0x25  /* LLVM */
#define OMD_CC_MCST             0x26  /* MCST LCC */
#define OMD_CC_MINGW            0x27  /* MinGW */
#define OMD_CC_MINGW64          0x28  /* MinGW-w64 */
#define OMD_CC_MIPSPRO          0x29  /* MIPSpro */
#define OMD_CC_MPW              0x2a  /* MPW */
#define OMD_CC_MRI              0x2b  /* Microtec */
#define OMD_CC_MSVC             0x2c  /* MSVC */
#define OMD_CC_NVCC             0x2d  /* NVCC */
#define OMD_CC_NWCC             0x2e  /* nwcc */
#define OMD_CC_OPEN64           0x2f  /* Open64 */
#define OMD_CC_OPENSERVER       0x30  /* SCO OpenServer */
#define OMD_CC_ORANGE           0x31  /* Orange C */
#define OMD_CC_PALM             0x32  /* Palm */
#define OMD_CC_PGI              0x33  /* Portland Group Compiler */
#define OMD_CC_SDCC             0x34  /* SDCC */
#define OMD_CC_SNC              0x35  /* SN Compiler */
#define OMD_CC_STRATUS_VOS      0x36  /* Stratus VOS C */
#define OMD_CC_SUNPRO           0x37  /* Oracle Solaris Studio */
#define OMD_CC_TCC              0x38  /* TCC */
#define OMD_CC_TENDRA           0x39  /* TenDRA */
#define OMD_CC_THINK            0x3a  /* THINK C */
#define OMD_CC_TURBO            0x3b  /* Borland Turbo C */
#define OMD_CC_WATCOM           0x3c  /* Watcom C++ */
#define OMD_CC_Z88DK            0x3d  /* Z88DK */

/**
 * Compiler names.
 */
#define OMD_CC_UNKNOWN_NAME     "Unknown"
#define OMD_CC_ACC_NAME         "ACC"
#define OMD_CC_ACK_NAME         "Amsterdam Compiler Kit"
#define OMD_CC_APPLE_CLANG_NAME "Apple Clang"
#define OMD_CC_ARM_NAME         "ARM Compiler"
#define OMD_CC_AZTEC_NAME       "Aztec C"
#define OMD_CC_BORLAND_NAME     "Borland C++"
#define OMD_CC_CC65_NAME        "CC65"
#define OMD_CC_CLANG_NAME       "Clang"
#define OMD_CC_COMEAU_NAME      "Comeau C++"
#define OMD_CC_COMPAQ_NAME      "Compaq"
#define OMD_CC_COMPCERT_NAME    "CompCert"
#define OMD_CC_CONVEX_NAME      "Convex C"
#define OMD_CC_CRAY_NAME        "Cray"
#define OMD_CC_CWARRIOR_NAME    "Metroworks CodeWarrior"
#define OMD_CC_DIAB_NAME        "Diab"
#define OMD_CC_DICE_NAME        "DICE"
#define OMD_CC_DMC_NAME         "Digital Mars"
#define OMD_CC_DIGNUS_NAME      "Dignus Systems/C++"
#define OMD_CC_DJGPP_NAME       "DJGPP"
#define OMD_CC_EDG_NAME         "EDG C++ Frontend"
#define OMD_CC_EKOPATH_NAME     "EKOPath"
#define OMD_CC_GCC_NAME         "GCC"
#define OMD_CC_GHS_NAME         "Green Hill"
#define OMD_CC_HIGHC_NAME       "MetaWare High"
#define OMD_CC_HP_ACC_NAME      "HP aC++"
#define OMD_CC_HP_ANSI_NAME     "HP ANSI C"
#define OMD_CC_IAR_NAME         "IAR"
#define OMD_CC_IBM_XL_NAME      "IBM XL"
#define OMD_CC_IBMZ_XL_NAME     "IBM z/OS XL"
#define OMD_CC_ICC_NAME         "ICC"
#define OMD_CC_IMAGECRAFT_NAME  "ImageCraft C"
#define OMD_CC_KCC_NAME         "KAI C++"
#define OMD_CC_KEIL_C166_NAME   "Keil C166"
#define OMD_CC_KEIL_C51_NAME    "Keil C51"
#define OMD_CC_KEIL_CARM_NAME   "Keil CARM"
#define OMD_CC_LCC_NAME         "LCC"
#define OMD_CC_LLVM_NAME        "LLVM"
#define OMD_CC_MCST_NAME        "MCST LCC"
#define OMD_CC_MINGW_NAME       "MinGW"
#define OMD_CC_MINGW64_NAME     "MinGW-w64"
#define OMD_CC_MIPSPRO_NAME     "MIPSpro"
#define OMD_CC_MPW_NAME         "MPW"
#define OMD_CC_MRI_NAME         "Microtec"
#define OMD_CC_MSVC_NAME        "MSVC"
#define OMD_CC_NVCC_NAME        "NVCC"
#define OMD_CC_NWCC_NAME        "nwcc"
#define OMD_CC_OPEN64_NAME      "Open64"
#define OMD_CC_OPENSERVER_NAME  "SCO OpenServer"
#define OMD_CC_ORANGE_NAME      "Orange C"
#define OMD_CC_PALM_NAME        "Palm"
#define OMD_CC_PGI_NAME         "Portland Group Compiler"
#define OMD_CC_SDCC_NAME        "SDCC"
#define OMD_CC_SNC_NAME         "SN Compiler"
#define OMD_CC_STRATUS_VOS_NAME "Stratus VOS C"
#define OMD_CC_SUNPRO_NAME      "Oracle Solaris Studio"
#define OMD_CC_TCC_NAME         "TCC"
#define OMD_CC_TENDRA_NAME      "TenDRA"
#define OMD_CC_THINK_NAME       "THINK C"
#define OMD_CC_TURBO_NAME       "Borland Turbo C"
#define OMD_CC_WATCOM_NAME      "Watcom C++"
#define OMD_CC_Z88DK_NAME       "Z88DK"
