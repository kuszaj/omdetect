#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__SUNPRO_CC)
    #if __SUNPRO_CC < 0x5100
        /* 0xABC => (A, B, C) */
        #define OMD_CC_VERSION OMD_VERSION( \
            (__SUNPRO_CC & 0xf00) >> 8,     \
            (__SUNPRO_CC & 0x0f0) >> 4,     \
            __SUNPRO_CC & 0x00f             \
        )
    #else
        /* 0xABBC => (A, BB, C) */
        #define OMD_CC_VERSION OMD_VERSION( \
            (__SUNPRO_CC & 0xf000) >> 12,   \
            (__SUNPRO_CC & 0x0ff0) >> 4,    \
            __SUNPRO_CC & 0x000f            \
        )
    #endif
#elif defined(__SUNPRO_C)
    #if __SUNPRO_C < 0x5100
        /* 0xABC => (A, B, C) */
        #define OMD_CC_VERSION OMD_VERSION( \
            (__SUNPRO_C & 0xf00) >> 8,      \
            (__SUNPRO_C & 0x0f0) >> 4,      \
            __SUNPRO_C & 0x00f              \
        )
    #else
        /* 0xABBC => (A, BB, C) */
        #define OMD_CC_VERSION OMD_VERSION( \
            (__SUNPRO_C & 0xf000) >> 12,    \
            (__SUNPRO_C & 0x0ff0) >> 4,     \
            __SUNPRO_C & 0x000f             \
        )
    #endif
#endif
