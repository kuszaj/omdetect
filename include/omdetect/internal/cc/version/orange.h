#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__ORANGEC_MAJOR__)
    #if defined(__ORANGEC_MINOR__)
        #if defined(__ORANGEC_PATCHLEVEL__)
            #define OMD_CC_VERSION OMD_VERSION(__ORANGEC_MAJOR__, __ORANGEC_MINOR__, __ORANGEC_PATCHLEVEL__)
        #else
            #define OMD_CC_VERSION OMD_VERSION(__ORANGEC_MAJOR__, __ORANGEC_MINOR__, 0)
        #endif
    #else
        #define OMD_CC_VERSION OMD_VERSION(__ORANGEC_MAJOR__, 0, 0)
    #endif
#endif
