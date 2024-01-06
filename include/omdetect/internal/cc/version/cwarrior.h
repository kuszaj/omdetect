#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__CWCC__)
    /* 0xABCC => (A, B, CC) */
    #define OMD_CC_VERSION OMD_VERSION((__CWCC__ & 0xf000) >> 12, (__CWCC__ & 0x0f00) >> 8, __CWCC__ & 0x00ff)
#elif defined(__MWERKS__)
    /* 0xABCC => (A, B, CC) */
    #define OMD_CC_VERSION OMD_VERSION((__MWERKS__ & 0xf000) >> 12, (__MWERKS__ & 0x0f00) >> 8, __MWERKS__ & 0x00ff)
#endif
