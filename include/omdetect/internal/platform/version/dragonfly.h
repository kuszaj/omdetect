#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#include <sys/param.h>

#if __DragonFly_version >= 200000
    /* ABBBCC => (A, BBB, CC) */
    #define OMD_PLATFORM_VERSION OMD_VERSION(
        __DragonFly_version / 100000,
        (__DragonFly_version / 100) % 1000,
        __DragonFly_version % 100
    )
#elif __DragonFly_version >= 197500
    #define OMD_PLATFORM_VERSION OMD_VERSION(1, 12, 0)
#elif __DragonFly_version >= 196000
    #define OMD_PLATFORM_VERSION OMD_VERSION(1, 10, 0)
#elif __DragonFly_version >= 180000
    #define OMD_PLATFORM_VERSION OMD_VERSION(1, 8, 0)
#elif __DragonFly_version >= 160000
    #define OMD_PLATFORM_VERSION OMD_VERSION(1, 6, 0)
#elif __DragonFly_version >= 140000
    #define OMD_PLATFORM_VERSION OMD_VERSION(1, 4, 0)
#elif __DragonFly_version >= 120000
    #define OMD_PLATFORM_VERSION OMD_VERSION(1, 2, 0)
#endif
