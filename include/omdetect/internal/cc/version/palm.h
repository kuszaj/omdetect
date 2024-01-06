#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(_PACC_VER)
    /* 0xABBCCxxx => (A, BB, CC) */
    #define OMD_CC_VERSION OMD_VERSION( \
        (_PACC_VER & 0xf0000000) >> 28, \
        (_PACC_VER & 0x0ff00000) >> 20, \
        (_PACC_VER & 0x000ff000) >> 12  \
    )
#endif
