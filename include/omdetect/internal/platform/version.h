#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

/* Enforce resolving OMD_PLATFORM_VERSION here. */
#if defined(OMD_PLATFORM_VERSION)
#undef OMD_PLATFORM_VERSION
#endif

#if OMD_PLATFORM == OMD_PLATFORM_AIX
    #include <omdetect/internal/platform/version/aix.h>
#elif OMD_PLATFORM == OMD_PLATFORM_ANDROID
    #include <omdetect/internal/platform/version/android.h>
#elif OMD_PLATFORM == OMD_PLATFORM_BEOS
    #include <omdetect/internal/platform/version/beos.h>
#elif OMD_PLATFORM == OMD_PLATFORM_BSD
    #include <omdetect/internal/platform/version/bsd.h>
#elif OMD_PLATFORM == OMD_PLATFORM_CYGWIN
    #include <omdetect/internal/platform/version/cygwin.h>
#elif OMD_PLATFORM == OMD_PLATFORM_DRAGONFLY
    #include <omdetect/internal/platform/version/dragonfly.h>
#elif OMD_PLATFORM == OMD_PLATFORM_EMSCRIPTEN
    #include <omdetect/internal/platform/version/emscripten.h>
#elif OMD_PLATFORM == OMD_PLATFORM_FREEBSD
    #include <omdetect/internal/platform/version/freebsd.h>
#elif OMD_PLATFORM == OMD_PLATFORM_FUCHSIA
    #include <omdetect/internal/platform/version/fuchsia.h>
#elif OMD_PLATFORM == OMD_PLATFORM_HAIKU
    #include <omdetect/internal/platform/version/haiku.h>
#elif OMD_PLATFORM == OMD_PLATFORM_IOS || OMD_PLATFORM == OMD_PLATFORM_IOS_SIMULATOR
    #include <omdetect/internal/platform/version/ios.h>
#elif OMD_PLATFORM == OMD_PLATFORM_LINUX
    #include <omdetect/internal/platform/version/linux.h>
#elif OMD_PLATFORM == OMD_PLATFORM_MACOS
    #include <omdetect/internal/platform/version/macos.h>
#elif OMD_PLATFORM == OMD_PLATFORM_NETBSD
    #include <omdetect/internal/platform/version/netbsd.h>
#elif OMD_PLATFORM == OMD_PLATFORM_OPENBSD
    #include <omdetect/internal/platform/version/openbsd.h>
#elif OMD_PLATFORM == OMD_PLATFORM_OS400
    #include <omdetect/internal/platform/version/os400.h>
#elif OMD_PLATFORM == OMD_PLATFORM_QNX
    #include <omdetect/internal/platform/version/qnx.h>
#elif OMD_PLATFORM == OMD_PLATFORM_SOLARIS
    #include <omdetect/internal/platform/version/solaris.h>
#elif OMD_PLATFORM == OMD_PLATFORM_UNICOS
    #include <omdetect/internal/platform/version/unicos.h>
#elif OMD_PLATFORM == OMD_PLATFORM_VMS
    #include <omdetect/internal/platform/version/vms.h>
#elif OMD_PLATFORM == OMD_PLATFORM_VXWORKS
    #include <omdetect/internal/platform/version/vxworks.h>
#elif OMD_PLATFORM == OMD_PLATFORM_WINDOWS_CE
    #include <omdetect/internal/platform/version/windows_ce.h>
#elif OMD_PLATFORM == OMD_PLATFORM_WINDU
    #include <omdetect/internal/platform/version/windu.h>
#endif

/* Safeguard */
#if !defined(OMD_PLATFORM_VERSION)
    #define OMD_PLATFORM_VERSION OMD_NO_VERSION
#endif

#define OMD_PLATFORM_MAJOR OMD_VERSION_MAJOR(OMD_PLATFORM_VERSION)
#define OMD_PLATFORM_MINOR OMD_VERSION_MINOR(OMD_PLATFORM_VERSION)
#define OMD_PLATFORM_PATCH OMD_VERSION_PATCH(OMD_PLATFORM_VERSION)
