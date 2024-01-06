#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__VERSION)
    /* ABB => (A, BB, 0) */
    #define OMD_CC_VERSION OMD_VERSION(__VERSION / 100, __VERSION % 100, 0)
#endif
