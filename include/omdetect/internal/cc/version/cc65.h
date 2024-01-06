#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__CC65__)
    /* 0xABC => (A, B, C) */
    #define OMD_CC_VERSION OMD_VERSION((__CC65__ & 0xf00) >> 8, (__CC65__ & 0x0f0) >> 4, __CC65__ & 0x00f)
#endif
