#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__GHS_VERSION_NUMBER__)
    /* ABC => (A, B, C) */
    #define OMD_CC_VERSION OMD_VERSION(     \
        __GHS_VERSION_NUMBER__ / 100,       \
        (__GHS_VERSION_NUMBER__ / 10) % 10, \
        __GHS_VERSION_NUMBER__ % 10         \
    )
#endif
