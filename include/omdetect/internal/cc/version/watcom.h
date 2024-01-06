#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__WATCOMC__)
    /* AABB => (AA, BB, 0) */
    #define OMD_CC_VERSION OMD_VERSION(__WATCOMC__ / 10000, (__WATCOMC__ / 100) % 100, 0)
#endif
