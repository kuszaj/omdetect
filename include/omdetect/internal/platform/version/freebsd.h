#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#include <sys/param.h>

#if defined(__FreeBSD_version)
    /* AABBCCC => (AA, BB, CCC) */
    #define OMD_PLATFORM_VERSION OMD_VERSION(
        __FreeBSD_version / 100000,
        (__FreeBSD_version / 1000) % 100,
        __FreeBSD_version % 1000
    )
#endif
