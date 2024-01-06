#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__KCC_VERSION)
    /* 0xABCC => (A, B, CC) */
    #define OMD_CC_VERSION OMD_VERSION( \
        (__KCC_VERSION & 0xf000) >> 12, \
        (__KCC_VERSION & 0x0f00) >> 8,  \
        __KCC_VERSION & 0x00ff          \
    )
#endif
