#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__VER__)
    /* AABB => (AA, BB, 0) */
    #define OMD_CC_VERSION OMD_VERSION(__VER__ / 100, __VER__ % 100, 0)
#endif
