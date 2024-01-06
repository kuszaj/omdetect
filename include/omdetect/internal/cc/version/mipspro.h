#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(_SGI_COMPILER_VERSION)
    /* ABC => (A, B, C) */
    #define OMD_CC_VERSION OMD_VERSION(    \
        _SGI_COMPILER_VERSION / 100,       \
        (_SGI_COMPILER_VERSION / 10) % 10, \
        _SGI_COMPILER_VERSION % 10         \
    )
#elif defined(_COMPILER_VERSION)
    /* ABC => (A, B, C) */
    #define OMD_CC_VERSION OMD_VERSION( \
        _COMPILER_VERSION / 100,        \
        (_COMPILER_VERSION / 10) % 10,  \
        _COMPILER_VERSION % 10          \
    )
#endif
