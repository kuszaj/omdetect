#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(_RELEASE)
    #if defined(_RELEASE_MINOR)
        #define OMD_CC_VERSION OMD_VERSION(_RELEASE, _RELEASE_MINOR, 0)
    #else
        #define OMD_CC_VERSION OMD_VERSION(_RELEASE, 0, 0)
    #endif
#endif
