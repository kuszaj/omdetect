#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__VMS_VER)
    /* AABBCCCxx => (AA, BB, CCC) */
    #define OMD_PLATFORM_VERSION OMD_VERSION(
        __VMS_VER / 10000000,
        (__VMS_VER / 100000) % 100,
        (__VMS_VER / 100) % 1000
    )
#endif
