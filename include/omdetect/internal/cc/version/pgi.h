#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__PGIC__)
    #if defined(__PGIC_MINOR__)
        #if defined(__PGIC_PATCHLEVEL__)
            #define OMD_CC_VERSION OMD_VERSION(__PGIC__, __PGIC_MINOR__, __PGIC_PATCHLEVEL__)
        #else
            #define OMD_CC_VERSION OMD_VERSION(__PGIC__, __PGIC_MINOR__, 0)
        #endif
    #else
        #define OMD_CC_VERSION OMD_VERSION(__PGIC__, 0, 0)
    #endif
#endif
