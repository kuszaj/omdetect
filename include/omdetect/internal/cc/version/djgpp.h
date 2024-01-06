#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__DJGPP__)
    #if defined(__DJGPP_MINOR__)
        #define OMD_CC_VERSION OMD_VERSION(__DJGPP__, __DJGPP_MINOR__, 0)
    #else
        #define OMD_CC_VERSION OMD_VERSION(__DJGPP__, 0, 0)
    #endif
#endif
