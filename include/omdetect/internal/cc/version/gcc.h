#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__GNUC__)
    #if defined(__GNUC_MINOR__)
        #if defined(__GNUC_PATCHLEVEL__)
            #define OMD_CC_VERSION OMD_VERSION(__GNUC__, __GNUC_MINOR__, __GNUC_PATCHLEVEL__)
        #else
            #define OMD_CC_VERSION OMD_VERSION(__GNUC__, __GNUC_MINOR__, 0)
        #endif
    #else
        #define OMD_CC_VERSION OMD_VERSION(__GNUC__, 0, 0)
    #endif
#endif
