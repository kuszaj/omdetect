#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#include <linux/version.h>
#if defined(LINUX_VERSION_MAJOR) && defined(LINUX_VERSION_PATCHLEVEL) && defined(LINUX_VERSION_SUBLEVEL)
    #define OMD_PLATFORM_VERSION OMD_VERSION(LINUX_VERSION_MAJOR, LINUX_VERSION_PATCHLEVEL, LINUX_VERSION_SUBLEVEL)
#elif defined(LINUX_VERSION_CODE)
    /* 0xAABBCC => (AA, BB, CC) */
    #define OMD_PLATFORM_VERSION OMD_VERSION(  \
        (LINUX_VERSION_CODE & 0xff0000) >> 16, \
        (LINUX_VERSION_CODE & 0x00ff00) >> 8,  \
        LINUX_VERSION_CODE & 0x0000ff          \
    )
#endif
