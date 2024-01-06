#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__PATHCC__)
    #if defined(__PATHCC_MINOR__)
        #if defined(__PATHCC_PATCHLEVEL__)
            #define OMD_CC_VERSION OMD_VERSION(__PATHCC__, __PATHCC_MINOR__, __PATHCC_PATCHLEVEL__)
        #else
            #define OMD_CC_VERSION OMD_VERSION(__PATHCC__, __PATHCC_MINOR__, 0)
        #endif
    #else
        #define OMD_CC_VERSION OMD_VERSION(__PATHCC__, 0, 0)
    #endif
#endif
