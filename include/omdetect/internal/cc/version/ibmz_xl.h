#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__COMPILER_VER__)
    /* 0xxABBCCyy => (A, BB, CC) */
    #define OMD_CC_VERSION OMD_VERSION(        \
        (__COMPILER_VER__ & 0x0f000000) >> 24, \
        (__COMPILER_VER__ & 0x00ff0000) >> 16, \
        (__COMPILER_VER__ & 0x0000ff00) >> 8   \
    )
#elif defined(__IBMC__)
    /* xABBC => (A, BB, C) */
    #define OMD_CC_VERSION OMD_VERSION((__IBMC__ / 1000) % 10, (__IBMC__ 10) % 100, __IBMC__ % 10)
#elif defined(__IBMCPP__)
    /* xABBC => (A, BB, C) */
    #define OMD_CC_VERSION OMD_VERSION((__IBMCPP__ / 1000) % 10, (__IBMCPP__ 10) % 100, __IBMCPP__ % 10)
#endif
