#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#include <BeBuild.h>
#if defined(B_HAIKU_VERSION)
    /* 0x00AABBCC => (AA, BB, CC) */
    #define OMD_PLATFORM_VERSION OMD_VERSION(
        (B_HAIKU_VERSION & 0x00ff0000) >> 16,
        (B_HAIKU_VERSION & 0x0000ff00) >> 8,
        B_HAIKU_VERSION & 0x000000ff
    )
#endif
