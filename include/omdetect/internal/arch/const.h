#include <omdetect/internal/preamble.h>

/**
 * Arch identifiers.
 */
#define OMD_ARCH_UNKNOWN        0x00
#define OMD_ARCH_AARCH64        0x01  /* AArch64 */
#define OMD_ARCH_ALPHA          0x02  /* Alpha */
#define OMD_ARCH_AMD64          0x03  /* AMD64 */
#define OMD_ARCH_ARM            0x04  /* ARM */
#define OMD_ARCH_BLACKFIN       0x05  /* Blackfin */
#define OMD_ARCH_CONVEX         0x06  /* Convex */
#define OMD_ARCH_E2K            0x07  /* E2K */
#define OMD_ARCH_EPIPHANY       0x08  /* Adapteva Epiphany */
#define OMD_ARCH_IA64           0x09  /* Intel Itanium */
#define OMD_ARCH_LOONGARCH      0x0a  /* LoongArch */
#define OMD_ARCH_M68K           0x0b  /* Motorola 68k */
#define OMD_ARCH_MIPS           0x0c  /* MIPS */
#define OMD_ARCH_PA_RISC        0x0d  /* PA-RISC */
#define OMD_ARCH_PPC            0x0e  /* PowerPC */
#define OMD_ARCH_PPC64          0x0f  /* PowerPC (64 bit) */
#define OMD_ARCH_PTX            0x10  /* PTX */
#define OMD_ARCH_PYRAMID        0x11  /* Pyramid 9810 */
#define OMD_ARCH_RISCV          0x12  /* RISC-V */
#define OMD_ARCH_RS6000         0x13  /* RS/6000 */
#define OMD_ARCH_SPARC          0x14  /* SPARC */
#define OMD_ARCH_SUPERH         0x15  /* SuperH */
#define OMD_ARCH_S370           0x16  /* System/370 */
#define OMD_ARCH_S390           0x17  /* System/390 */
#define OMD_ARCH_X80            0x18  /* Intel 8080 */
#define OMD_ARCH_X86            0x19  /* x86 */
#define OMD_ARCH_Z              0x1a  /* z/Architecture */

/**
 * Arch aliases.
 */
#define OMD_ARCH_ARM64          OMD_ARCH_AARCH64
#define OMD_ARCH_X86_64         OMD_ARCH_AMD64

/**
 * Arch names.
 */
#define OMD_ARCH_UNKNOWN_NAME   "Unknown"
#define OMD_ARCH_AARCH64_NAME   "AArch64"
#define OMD_ARCH_AMD64_NAME     "AMD64"
#define OMD_ARCH_ALPHA_NAME     "Alpha"
#define OMD_ARCH_ARM_NAME       "ARM"
#define OMD_ARCH_BLACKFIN_NAME  "Blackfin"
#define OMD_ARCH_CONVEX_NAME    "Convex"
#define OMD_ARCH_E2K_NAME       "E2K"
#define OMD_ARCH_EPIPHANY_NAME  "Adapteva Epiphany"
#define OMD_ARCH_IA64_NAME      "Intel Itanium"
#define OMD_ARCH_LOONGARCH_NAME "LoongArch"
#define OMD_ARCH_M68K_NAME      "Motorola 68k"
#define OMD_ARCH_MIPS_NAME      "MIPS"
#define OMD_ARCH_PA_RISC_NAME   "PA-RISC"
#define OMD_ARCH_PPC_NAME       "PowerPC"
#define OMD_ARCH_PPC64_NAME     "PowerPC (64 bit)"
#define OMD_ARCH_PTX_NAME       "PTX"
#define OMD_ARCH_PYRAMID_NAME   "Pyramid 9810"
#define OMD_ARCH_RISCV_NAME     "RISC-V"
#define OMD_ARCH_RS6000_NAME    "RS/6000"
#define OMD_ARCH_SPARC_NAME     "SPARC"
#define OMD_ARCH_SUPERH_NAME    "SuperH"
#define OMD_ARCH_S370_NAME      "System/370"
#define OMD_ARCH_S390_NAME      "System/390"
#define OMD_ARCH_X80_NAME       "Intel 8080"
#define OMD_ARCH_X86_NAME       "x86"
#define OMD_ARCH_Z_NAME         "z/Architecture"

/**
 * Arch alias names.
 */
#define OMD_ARCH_ARM64_NAME     OMD_ARCH_AARCH64_NAME
#define OMD_ARCH_X86_64_NAME    OMD_ARCH_AMD64_NAME
