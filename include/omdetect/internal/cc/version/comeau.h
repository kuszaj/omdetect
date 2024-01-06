#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__COMO_VERSION__)
    /* ABB => (A, BB) */
    #define OMD_CC_VERSION OMD_VERSION(__COMO_VERSION__ / 100, __COMO_VERSION__ % 100, 0)
#endif
