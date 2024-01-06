#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__SYSC_VER__)
    /* ABBCC => (A, BB, CC) */
    #define OMD_CC_VERSION OMD_VERSION(__SYSC_VER__ / 10000, (__SYSC_VER__ / 1000) % 100, __SYSC_VER__ % 1000)
#endif
