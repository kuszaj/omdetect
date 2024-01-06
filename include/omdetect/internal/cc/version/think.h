#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(THINKC4)
    #define OMD_CC_VERSION OMD_VERSION(4, 0, 0)
#elif defined(THINKC3)
    #define OMD_CC_VERSION OMD_VERSION(3, 0, 0)
#endif
