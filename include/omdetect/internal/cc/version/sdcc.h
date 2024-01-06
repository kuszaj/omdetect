#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__SDCC_VERSION_MAJOR)
    #if defined(__SDCC_VERSION_MINOR)
        #if defined(__SDCC_VERSION_PATCH)
            #define OMD_CC_VERSION OMD_VERSION(__SDCC_VERSION_MAJOR, __SDCC_VERSION_MINOR, __SDCC_VERSION_PATCH)
        #else
            #define OMD_CC_VERSION OMD_VERSION(__SDCC_VERSION_MAJOR, __SDCC_VERSION_MINOR, 0)
        #endif
    #else
        #define OMD_CC_VERSION OMD_VERSION(__SDCC_VERSION_MAJOR, 0, 0)
    #endif
#elif defined(SDCC) && SDCC > 1
    /* ABC => (A, B, C) */
    #define OMD_CC_VERSION OMD_VERSION(SDCC / 100, (SDCC / 10) % 10, SDCC % 10)
#endif
