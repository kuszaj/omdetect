#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(_WINDU_SOURCE)
    /* 0xAABBCC => (AA, BB, CC) */
    #define OMD_PLATFORM_VERSION OMD_VERSION(
        (_WINDU_SOURCE & 0xff0000) >> 16,
        (_WINDU_SOURCE & 0x00ff00) >> 8,
        _WINDU_SOURCE & 0x0000ff
    )
#endif
