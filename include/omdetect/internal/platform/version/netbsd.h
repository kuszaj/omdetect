#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#include <sys/param.h>

#if defined(__NetBSD_Version__)
    /* AABBCCCC00 => (AA, BB, CCCC) */
    #define OMD_PLATFORM_VERSION OMD_VERSION( \
        __NetBSD_Version__ / 100000000,       \
        (__NetBSD_Version__ / 1000000) % 100, \
        (__NetBSD_Version__ / 100) % 1000     \
    )
#elif defined(NetBSD1_3)
    #define OMD_PLATFORM_VERSION OMD_VERSION(1, 3, 0)
#elif defined(NetBSD1_2)
    #define OMD_PLATFORM_VERSION OMD_VERSION(1, 2, 0)
#elif defined(NetBSD1_1)
    #define OMD_PLATFORM_VERSION OMD_VERSION(1, 1, 0)
#elif defined(NetBSD1_0)
    #define OMD_PLATFORM_VERSION OMD_VERSION(1, 0, 0)
#endif
