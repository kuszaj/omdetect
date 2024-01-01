#include <omdetect/internal/preamble.h>

/* Enforce resolving OMD_PLATFORM here. */
#if defined(OMD_PLATFORM)
#undef OMD_PLATFORM
#endif

#if defined(__CYGWIN__)
    /* Cygwin */
    #define OMD_PLATFORM OMD_PLATFORM_CYGWIN
#elif defined(__INTERIX)
    /* Interix */
    #define OMD_PLATFORM OMD_PLATFORM_INTERIX
#elif defined(__ANDROID__)
    /* Android */
    #define OMD_PLATFORM OMD_PLATFORM_ANDROID
#elif defined(__EMSCRIPTEN__) || defined(EMSCRIPTEN)
    /* Emscripten */
    #define OMD_PLATFORM OMD_PLATFORM_EMSCRIPTEN
#elif defined(_AIX)
    /* IBM AIX */
    #define OMD_PLATFORM OMD_PLATFORM_AIX
#elif defined(UTS)
    /* Amdahl UTS */
    #define OMD_PLATFORM OMD_PLATFORM_AMDAHL_UTS
#elif defined (__amigaos4__) || defined(__amigaos__) || defined(AMIGA)
    #if defined(__MORPHOS__)
        /* MorphOS */
        #define OMD_PLATFORM OMD_PLATFORM_MORPHOS
    #elif defined(__AROS__)
        /* AROS */
        #define OMD_PLATFORM OMD_PLATFORM_AROS
    #else
        /* AmigaOS */
        #define OMD_PLATFORM OMD_PLATFORM_AMIGA
    #endif
#elif defined(aegis)
    /* Apollo AEGIS */
    #define OMD_PLATFORM OMD_PLATFORM_APOLLO_AEGIS
#elif defined(apollo)
    /* Apollo Domain/OS */
    #define OMD_PLATFORM OMD_PLATFORM_APOLLO_DOMAIN_OS
#elif defined(__HAIKU__)
    /* Haiku */
    #define OMD_PLATFORM OMD_PLATFORM_HAIKU
#elif defined(__BEOS__)
    /* BeOS */
    #define OMD_PLATFORM OMD_PLATFORM_BEOS
#elif defined(__bg__) || defined(__THW_BLUEGENE) || defined(__THW_BLUEGENE__)
    #if defined(__bgq__) || defined(__TOS_BGQ__)
        /* IBM Blue Gene/Q */
        #define OMD_PLATFORM OMD_PLATFORM_BLUE_GENE_Q
    #elif defined(__bgp__) || defined(__TOS_BGP__)
        /* IBM Blue Gene/P */
        #define OMD_PLATFORM OMD_PLATFORM_BLUE_GENE_P
    #elif defined(__blrts) || defined(__blrts__) || defined(__TOS_BLRTS__)
        /* IBM Blue Gene/L */
        #define OMD_PLATFORM OMD_PLATFORM_BLUE_GENE_L
    #endif
#elif defined(__convex__)
    /* ConvexOS */
    #define OMD_PLATFORM OMD_PLATFORM_CONVEX
#elif defined(__CPM) || defined(CPM)
    /* CP/M */
    #define OMD_PLATFORM OMD_PLATFORM_CPM
#elif defined(pyr)
    /* Pyramid DC/OSx */
    #define OMD_PLATFORM OMD_PLATFORM_DC_OSX
#elif defined(__DGUX__) || defined(__dgux__) || defined(DGUX)
    /* DG/UX */
    #define OMD_PLATFORM OMD_PLATFORM_DG_UX
#elif defined(__ECOS)
    /* eCos */
    #define OMD_PLATFORM OMD_PLATFORM_ECOS
#elif defined(__EMX__)
    /* EMX */
    #define OMD_PLATFORM OMD_PLATFORM_EMX
#elif defined(EPLAN9)
    /* Plan 9 */
    #define OMD_PLATFORM OMD_PLATFORM_PLAN9
#elif defined(__Fuchsia__)
    /* Fuchsia */
    #define OMD_PLATFORM OMD_PLATFORM_FUCHSIA
#elif defined(__gnu_hurd__)
    /* GNU/Hurd */
    #define OMD_PLATFORM OMD_PLATFORM_GNU_HURD
#elif defined(__hiuxmpp)
    /* HI-UX MPP */
    #define OMD_PLATFORM OMD_PLATFORM_HI_UX_MPP
#elif defined(_hpux) || defined(__hpux)
    /* HP-UX */
    #define OMD_PLATFORM OMD_PLATFORM_HP_UX
#elif defined(__INTEGRITY)
    /* INTEGRITY */
    #define OMD_PLATFORM OMD_PLATFORM_INTEGRITY
#elif defined(__Lynx__)
    /* LynxOS */
    #define OMD_PLATFORM OMD_PLATFORM_LYNX
#elif defined(__minix)
    /* MINIX */
    #define OMD_PLATFORM OMD_PLATFORM_MINIX
#elif defined(__MINT__)
    /* MiNT */
    #define OMD_PLATFORM OMD_PLATFORM_MINT
#elif defined(mpeix) || defined(__mpexl)
    /* MPE/iX */
    #define OMD_PLATFORM OMD_PLATFORM_MPE_IX
#elif defined(MSDOS) || defined(__MSDOS__) || defined(_MSDOS) || defined(__DOS__)
    /* MSDOS */
    #define OMD_PLATFORM OMD_PLATFORM_MSDOS
#elif defined(__MSX) || defined(MSX)
    /* MSX */
    #define OMD_PLATFORM OMD_PLATFORM_MSX
#elif defined(__MVS__) || defined(__HOS_MVS__)
    /* z/OS */
    #define OMD_PLATFORM OMD_PLATFORM_ZOS
#elif defined(__native_client__)
    /* Google Native Client */
    #define OMD_PLATFORM OMD_PLATFORM_NACL
#elif defined(NeXT)
    /* NeXTSTEP */
    #define OMD_PLATFORM OMD_PLATFORM_NEXTSTEP
#elif defined(__nucleus__)
    /* Nucleus RTOS */
    #define OMD_PLATFORM OMD_PLATFORM_NUCLEUS_RTOS
#elif defined(OS2) || defined(_OS2) || defined(__OS2__) || defined(__TOS_OS2__)
    /* OS/2 */
    #define OMD_PLATFORM OMD_PLATFORM_OS2
#elif defined(__OS400__)
    /* IBM OS/400 */
    #define OMD_PLATFORM OMD_PLATFORM_OS400
#elif defined(__OS9000) || defined(_OSK)
    /* Microware OS-9 */
    #define OMD_PLATFORM OMD_PLATFORM_OS9
#elif defined(__osf__) || defined(__osf)
    /* Tru64 (OSF/1) */
    #define OMD_PLATFORM OMD_PLATFORM_TRU64
#elif defined(__palmos__)
    /* Palm OS */
    #define OMD_PLATFORM OMD_PLATFORM_PALMOS
#elif defined(__REACTOS__)
    /* ReactOS */
    #define OMD_PLATFORM OMD_PLATFORM_REACTOS
#elif defined(__QNXNTO__) || defined(__QNX__)
    /* QNX */
    #define OMD_PLATFORM OMD_PLATFORM_QNX
#elif defined(_SCO_DS)
    /* SCO OpenServer */
    #define OMD_PLATFORM OMD_PLATFORM_OPENSERVER
#elif defined(__serenity__)
    /* SerenityOS */
    #define OMD_PLATFORM OMD_PLATFORM_SERENITY
#elif defined(_SEQUENT_) || defined(sequent)
    /* DYNIX/ptx */
    #define OMD_PLATFORM OMD_PLATFORM_DYNIX_PTX
#elif defined(__sgi) || defined(sgi)
    /* IRIX */
    #define OMD_PLATFORM OMD_PLATFORM_IRIX
#elif defined(sinux)
    /* SINUX */
    #define OMD_PLATFORM OMD_PLATFORM_SINUX
#elif defined(__sun) || defined(sun)
    #if defined(__illumos__)
        /* illumos */
        #define OMD_PLATFORM OMD_PLATFORM_ILLUMOS
    #elif defined(__SVR4) || defined(__svr4__)
        /* Solaris */
        #define OMD_PLATFORM OMD_PLATFORM_SOLARIS
    #else
        /* SunOS */
        #define OMD_PLATFORM OMD_PLATFORM_SUNOS
    #endif
#elif defined(__SYLLABLE__)
    /* Syllable */
    #define OMD_PLATFORM OMD_PLATFORM_SYLLABLE
#elif defined(__SYMBIAN32__)
    /* Symbian OS */
    #define OMD_PLATFORM OMD_PLATFORM_SYMBIAN
#elif defined(__TANDEM)
    /* Tandem NonStop */
    #define OMD_PLATFORM OMD_PLATFORM_NONSTOP
#elif defined(ultrix) || defined(__ultrix) || defined(__ultrix__)
    /* Ultrix */
    #define OMD_PLATFORM OMD_PLATFORM_ULTRIX
#elif defined(_CRAY) || defined(__crayx1)
    /* UNICOS/mp */
    #define OMD_PLATFORM OMD_PLATFORM_UNICOS_MP
#elif defined(_UNICOS)
    /* UNICOS */
    #define OMD_PLATFORM OMD_PLATFORM_UNICOS
#elif defined(_UNIXWARE7) || defined(sco)
    /* UnixWare */
    #define OMD_PLATFORM OMD_PLATFORM_UNIXWARE
#elif defined(_UWIN)
    /* U/Win */
    #define OMD_PLATFORM OMD_PLATFORM_UWIN
#elif defined(VMS) || defined(__VMS)
    /* VMS */
    #define OMD_PLATFORM OMD_PLATFORM_VMS
#elif defined(__VXWORKS__) || defined(__vxworks)
    /* VsWorks */
    #define OMD_PLATFORM OMD_PLATFORM_VXWORKS
#elif defined(__VOS__)
    /* Stratus VOS */
    #define OMD_PLATFORM OMD_PLATFORM_STRATUS_VOS
#elif defined(__APPLE__) && defined(__MACH__) && !defined(__unix__)
    #include <TargetConditionals.h>
    #if defined(TARGET_OS_SIMULATOR) || defined(TARGET_IPHONE_SIMULATOR)
        /* iOS simulator */
        #define OMD_PLATFORM OMD_PLATFORM_IOS_SIMULATOR
    #elif defined(TARGET_OS_IOS) || defined(TARGET_OS_IPHONE)
        /* iOS */
        #define OMD_PLATFORM OMD_PLATFORM_IOS
    #elif defined(TARGET_OS_OSX) || defined(TARGET_OS_MAC)
        /* macOS */
        #define OMD_PLATFORM OMD_PLATFORM_MACOS
    #endif
#elif defined(__APPLE__) && defined(__MACH__) && defined(__unix__)
    #include <sys/param.h>
    #if defined(BSD)
        #if defined(__DragonFly__)
            /* Dragonfly BSD */
            #define OMD_PLATFORM OMD_PLATFORM_DRAGONFLY
        #elif defined(__FreeBSD__)
            /* FreeBSD */
            #define OMD_PLATFORM OMD_PLATFORM_FREEBSD
        #elif defined(__OpenBSD__)
            /* OpenBSD */
            #define OMD_PLATFORM OMD_PLATFORM_OPENBSD
        #elif defined(__NetBSD__)
            /* NetBSD */
            #define OMD_PLATFORM OMD_PLATFORM_NETBSD
        #elif defined(__bsdi__)
            /* BSDi */
            #define OMD_PLATFORM OMD_PLATFORM_BSDI
        #else
            /* BSD */
            #define OMD_PLATFORM OMD_PLATFORM_BSD
        #endif
    #endif
#elif defined(__linux__) || defined(__gnu_linux__)
    /* Linux */
    #define OMD_PLATFORM OMD_PLATFORM_LINUX
#elif defined(__unix__) || defined(__unix) || defined(_XOPEN_SOURCE) || defined(_POSIX_SOURCE)
    /* UNIX */
    #define OMD_PLATFORM OMD_PLATFORM_UNIX
#elif defined(_WINDU_SOURCE)
    /* Wind/U */
    #define OMD_PLATFORM OMD_PLATFORM_WINDU
#elif defined(_WIN32_WCE)
    /* Windows CE */
    #define OMD_PLATFORM OMD_PLATFORM_WINDOWS_CE
#elif defined(_WIN64) || defined(_WIN32) || defined(_WIN16) || defined(__WIN32__) || defined(__TOS_WIN__) ||           \
      defined(__WINDOWS__)
    /* Windows */
    #define OMD_PLATFORM OMD_PLATFORM_WINDOWS
#endif

/* Safeguard */
#if !defined(OMD_PLATFORM)
    #define OMD_PLATFORM OMD_PLATFORM_UNKNOWN
#endif
