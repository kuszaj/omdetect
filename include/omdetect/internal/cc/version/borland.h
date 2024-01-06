#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__CODEGEARC__)
    /* 0xAABC => (AA, B, C) */
    #define OMD_CC_VERSION OMD_VERSION( \
        (__CODEGEARC__ & 0xff00) >> 8,  \
        (__CODEGEARC__ & 0x00f0) >> 4,  \
        __CODEGEARC__ & 0x000f          \
    )
#elif defined(__BORLANDC__)
    /* 0xAABC => (AA, B, C) */
    #define OMD_CC_VERSION OMD_VERSION( \
        (__BORLANDC__ & 0xff00) >> 8,   \
        (__BORLANDC__ & 0x00f0) >> 4,   \
        __BORLANDC__ & 0x000f           \
    )
#endif
