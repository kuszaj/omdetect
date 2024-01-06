#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__VERSION_NUMBER__)
    /* ABCC => (A, B, CC) */
    #define OMD_CC_VERSION OMD_VERSION(  \
        __VERSION_NUMBER__ / 1000,       \
        (__VERSION_NUMBER__ / 100) % 10, \
        __VERSION_NUMBER__ % 100         \
    )
#endif
