#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__ARMCC_VERSION)
    /* ABCCC => (A, B, CCC) */
    #define OMD_CC_VERSION OMD_VERSION(__ARMCC_VERSION / 10000, (__ARMCC_VERSION / 1000) % 10, __ARMCC_VERSION % 1000)
#endif
