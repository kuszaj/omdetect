#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__DMC__)
    /* 0xABC => (A, B, C) */
    #define OMD_CC_VERSION OMD_VERSION((__DMC__ & 0xf00) >> 8, (__DMC__ & 0x0f0) >> 4, __DMC__ & 0x00f)
#endif
