#include <omdetect/internal/preamble.h>

/**
 * Platform identifiers.
 */
#define OMD_PLATFORM_UNKNOWN               0x00
#define OMD_PLATFORM_AIX                   0x01  /* IBM AIX */
#define OMD_PLATFORM_AMDAHL_UTS            0x02  /* Amdahl UTS */
#define OMD_PLATFORM_AMIGA                 0x03  /* AmigaOS */
#define OMD_PLATFORM_ANDROID               0x04  /* Android */
#define OMD_PLATFORM_APOLLO_AEGIS          0x05  /* Apollo AEGIS */
#define OMD_PLATFORM_APOLLO_DOMAIN_OS      0x06  /* Apollo Domain/OS */
#define OMD_PLATFORM_AROS                  0x07  /* AROS */
#define OMD_PLATFORM_BEOS                  0x08  /* BeOS */
#define OMD_PLATFORM_BLUE_GENE_L           0x09  /* IBM Blue Gene/L */
#define OMD_PLATFORM_BLUE_GENE_P           0x0a  /* IBM Blue Gene/P */
#define OMD_PLATFORM_BLUE_GENE_Q           0x0b  /* IBM Blue Gene/Q */
#define OMD_PLATFORM_BSD                   0x0c  /* BSD */
#define OMD_PLATFORM_BSDI                  0x0d  /* BSDi */
#define OMD_PLATFORM_CONVEX                0x0e  /* ConvexOS */
#define OMD_PLATFORM_CPM                   0x0f  /* CP/M */
#define OMD_PLATFORM_CYGWIN                0x10  /* Cygwin */
#define OMD_PLATFORM_DC_OSX                0x11  /* Pyramid DC/OSx */
#define OMD_PLATFORM_DG_UX                 0x12  /* DG/UX */
#define OMD_PLATFORM_DRAGONFLY             0x13  /* DragonFly BSD */
#define OMD_PLATFORM_DYNIX_PTX             0x14  /* DYNIX/ptx */
#define OMD_PLATFORM_ECOS                  0x15  /* eCos */
#define OMD_PLATFORM_EMX                   0x16  /* EMX */
#define OMD_PLATFORM_EMSCRIPTEN            0x17  /* Emscripten */
#define OMD_PLATFORM_FREEBSD               0x18  /* FreeBSD */
#define OMD_PLATFORM_FUCHSIA               0x19  /* Fuchsia */
#define OMD_PLATFORM_GNU_HURD              0x1a  /* GNU/Hurd */
#define OMD_PLATFORM_HAIKU                 0x1b  /* Haiku */
#define OMD_PLATFORM_HI_UX_MPP             0x1c  /* HI-UX MPP */
#define OMD_PLATFORM_HP_UX                 0x1d  /* HP-UX */
#define OMD_PLATFORM_ILLUMOS               0x1e  /* illumos */
#define OMD_PLATFORM_INTEGRITY             0x1f  /* INTEGRITY */
#define OMD_PLATFORM_INTERIX               0x20  /* Interix */
#define OMD_PLATFORM_IOS                   0x21  /* iOS */
#define OMD_PLATFORM_IOS_SIMULATOR         0x22  /* iOS simulator */
#define OMD_PLATFORM_IRIX                  0x23  /* IRIX */
#define OMD_PLATFORM_LINUX                 0x24  /* Linux */
#define OMD_PLATFORM_LYNX                  0x25  /* LynxOS */
#define OMD_PLATFORM_MACOS                 0x26  /* macOS */
#define OMD_PLATFORM_MINIX                 0x27  /* MINIX */
#define OMD_PLATFORM_MINT                  0x28  /* MiNT */
#define OMD_PLATFORM_MORPHOS               0x29  /* MorphOS */
#define OMD_PLATFORM_MPE_IX                0x2a  /* MPE/iX */
#define OMD_PLATFORM_MSDOS                 0x2b  /* MSDOS */
#define OMD_PLATFORM_MSX                   0x2c  /* MSX */
#define OMD_PLATFORM_NACL                  0x2d  /* Google Native Client */
#define OMD_PLATFORM_NETBSD                0x2e  /* NetBSD */
#define OMD_PLATFORM_NEXTSTEP              0x2f  /* NeXTSTEP */
#define OMD_PLATFORM_NONSTOP               0x30  /* Tandem NonStop */
#define OMD_PLATFORM_NUCLEUS_RTOS          0x31  /* Nucleus RTOS */
#define OMD_PLATFORM_OPENBSD               0x32  /* OpenBSD */
#define OMD_PLATFORM_OPENSERVER            0x33  /* SCO OpenServer */
#define OMD_PLATFORM_OS2                   0x34  /* OS/2 */
#define OMD_PLATFORM_OS400                 0x35  /* IBM OS/400 */
#define OMD_PLATFORM_OS9                   0x36  /* Microware OS-9 */
#define OMD_PLATFORM_PALMOS                0x37  /* Palm OS */
#define OMD_PLATFORM_PLAN9                 0x38  /* Plan 9 */
#define OMD_PLATFORM_QNX                   0x39  /* QNX */
#define OMD_PLATFORM_REACTOS               0x3a  /* ReactOS */
#define OMD_PLATFORM_SERENITY              0x3b  /* SerenityOS */
#define OMD_PLATFORM_SINUX                 0x3c  /* SINUX */
#define OMD_PLATFORM_SOLARIS               0x3d  /* Solaris */
#define OMD_PLATFORM_STRATUS_VOS           0x3e  /* Stratus VOS */
#define OMD_PLATFORM_SUNOS                 0x3f  /* SunOS */
#define OMD_PLATFORM_SYLLABLE              0x40  /* Syllable */
#define OMD_PLATFORM_SYMBIAN               0x41  /* Symbian OS */
#define OMD_PLATFORM_TRU64                 0x42  /* Tru64 (OSF/1) */
#define OMD_PLATFORM_ULTRIX                0x43  /* Ultrix */
#define OMD_PLATFORM_UNICOS                0x44  /* UNICOS */
#define OMD_PLATFORM_UNICOS_MP             0x45  /* UNICOS/mp */
#define OMD_PLATFORM_UNIX                  0x46  /* UNIX */
#define OMD_PLATFORM_UNIXWARE              0x47  /* UnixWare */
#define OMD_PLATFORM_UWIN                  0x48  /* U/Win */
#define OMD_PLATFORM_VMS                   0x49  /* VMS */
#define OMD_PLATFORM_VXWORKS               0x4a  /* VxWorks */
#define OMD_PLATFORM_WINDOWS               0x4b  /* Windows */
#define OMD_PLATFORM_WINDOWS_CE            0x4c  /* Windows CE */
#define OMD_PLATFORM_WINDU                 0x4d  /* Wind/U */
#define OMD_PLATFORM_ZOS                   0x4e  /* z/OS */

/**
 * Platform names.
 */
#define OMD_PLATFORM_UNKNOWN_NAME          "Unknown"
#define OMD_PLATFORM_AIX_NAME              "IBM AIX"
#define OMD_PLATFORM_AMDAHL_UTS_NAME       "Amdahl UTS"
#define OMD_PLATFORM_AMIGA_NAME            "AmigaOS"
#define OMD_PLATFORM_ANDROID_NAME          "Android"
#define OMD_PLATFORM_APOLLO_AEGIS_NAME     "Apollo AEGIS"
#define OMD_PLATFORM_APOLLO_DOMAIN_OS_NAME "Apollo Domain/OS"
#define OMD_PLATFORM_AROS_NAME             "AROS"
#define OMD_PLATFORM_BEOS_NAME             "BeOS"
#define OMD_PLATFORM_BLUE_GENE_L_NAME      "IBM Blue Gene/L"
#define OMD_PLATFORM_BLUE_GENE_P_NAME      "IBM Blue Gene/P"
#define OMD_PLATFORM_BLUE_GENE_Q_NAME      "IBM Blue Gene/Q"
#define OMD_PLATFORM_BSD_NAME              "BSD"
#define OMD_PLATFORM_BSDI_NAME             "BSDi"
#define OMD_PLATFORM_CONVEX_NAME           "ConvexOS"
#define OMD_PLATFORM_CPM_NAME              "CP/M"
#define OMD_PLATFORM_CYGWIN_NAME           "Cygwin"
#define OMD_PLATFORM_DC_OSX_NAME           "Pyramid DC/OSx"
#define OMD_PLATFORM_DG_UX_NAME            "DG/UX"
#define OMD_PLATFORM_DRAGONFLY_NAME        "DragonFly BSD"
#define OMD_PLATFORM_DYNIX_PTX_NAME        "DYNIX/ptx"
#define OMD_PLATFORM_ECOS_NAME             "eCos"
#define OMD_PLATFORM_EMX_NAME              "EMX"
#define OMD_PLATFORM_EMSCRIPTEN_NAME       "Emscripten"
#define OMD_PLATFORM_FREEBSD_NAME          "FreeBSD"
#define OMD_PLATFORM_FUCHSIA_NAME          "Fuchsia"
#define OMD_PLATFORM_GNU_HURD_NAME         "GNU/Hurd"
#define OMD_PLATFORM_HAIKU_NAME            "Haiku"
#define OMD_PLATFORM_HP_UX_NAME            "HP-UX"
#define OMD_PLATFORM_HI_UX_MPP_NAME        "HI-UX MPP"
#define OMD_PLATFORM_ILLUMOS_NAME          "illumos"
#define OMD_PLATFORM_INTEGRITY_NAME        "INTEGRITY"
#define OMD_PLATFORM_INTERIX_NAME          "Interix"
#define OMD_PLATFORM_IOS_NAME              "iOS"
#define OMD_PLATFORM_IOS_SIMULATOR_NAME    "iOS (simulator)"
#define OMD_PLATFORM_IRIX_NAME             "IRIX"
#define OMD_PLATFORM_LINUX_NAME            "Linux"
#define OMD_PLATFORM_LYNX_NAME             "LynxOS"
#define OMD_PLATFORM_MACOS_NAME            "macOS"
#define OMD_PLATFORM_MINIX_NAME            "MINIX"
#define OMD_PLATFORM_MINT_NAME             "MiNT"
#define OMD_PLATFORM_MORPHOS_NAME          "MorphOS"
#define OMD_PLATFORM_MPE_IX_NAME           "MPE/iX"
#define OMD_PLATFORM_MSDOS_NAME            "MSDOS"
#define OMD_PLATFORM_MSX_NAME              "MSX"
#define OMD_PLATFORM_NACL_NAME             "Google Native Client"
#define OMD_PLATFORM_NETBSD_NAME           "NetBSD"
#define OMD_PLATFORM_NEXTSTEP_NAME         "NeXTSTEP"
#define OMD_PLATFORM_NONSTOP_NAME          "Tandem NonStop"
#define OMD_PLATFORM_NUCLEUS_RTOS_NAME     "Nucleus RTOS"
#define OMD_PLATFORM_OPENBSD_NAME          "OpenBSD"
#define OMD_PLATFORM_OPENSERVER_NAME       "SCO OpenServer"
#define OMD_PLATFORM_OS2_NAME              "OS/2"
#define OMD_PLATFORM_OS400_NAME            "IBM OS/400"
#define OMD_PLATFORM_OS9_NAME              "Microware OS-9"
#define OMD_PLATFORM_PALMOS_NAME           "Palm OS"
#define OMD_PLATFORM_PLAN9_NAME            "Plan 9"
#define OMD_PLATFORM_QNX_NAME              "QNX"
#define OMD_PLATFORM_REACTOS_NAME          "ReactOS"
#define OMD_PLATFORM_SERENITY_NAME         "SerenityOS"
#define OMD_PLATFORM_SINUX_NAME            "SINUX"
#define OMD_PLATFORM_SOLARIS_NAME          "Solaris"
#define OMD_PLATFORM_STRATUS_VOS_NAME      "Stratus VOS"
#define OMD_PLATFORM_SUNOS_NAME            "SunOS"
#define OMD_PLATFORM_SYLLABLE_NAME         "Syllable"
#define OMD_PLATFORM_SYMBIAN_NAME          "Symbian OS"
#define OMD_PLATFORM_TRU64_NAME            "Tru64 (OSF/1)"
#define OMD_PLATFORM_ULTRIX_NAME           "Ultrix"
#define OMD_PLATFORM_UNICOS_NAME           "UNICOS"
#define OMD_PLATFORM_UNICOS_MP_NAME        "UNICOS/mp"
#define OMD_PLATFORM_UNIX_NAME             "UNIX"
#define OMD_PLATFORM_UNIXWARE_NAME         "UnixWare"
#define OMD_PLATFORM_UWIN_NAME             "U/Win"
#define OMD_PLATFORM_VMS_NAME              "VMS"
#define OMD_PLATFORM_VXWORKS_NAME          "VxWorks"
#define OMD_PLATFORM_WINDOWS_NAME          "Windows"
#define OMD_PLATFORM_WINDOWS_CE_NAME       "Windows CE"
#define OMD_PLATFORM_WINDU_NAME            "Wind/U"
#define OMD_PLATFORM_ZOS_NAME              "z/OS"
