#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__OPENCC__)
    #if defined(__OPENCC_MINOR__)
        #define OMD_CC_VERSION OMD_VERSION(__OPENCC__, __OPENCC_MINOR__, 0)
    #else
        #define OMD_CC_VERSION OMD_VERSION(__OPENCC__, 0, 0)
    #endif
#endif
