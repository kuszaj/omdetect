#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(_AIX43)
    #define OMD_PLATFORM_VERSION OMD_VERSION(4, 3, 0)
#elif defined(_AIX41)
    #define OMD_PLATFORM_VERSION OMD_VERSION(4, 1, 0)
#elif defined(_AIX32)
    #define OMD_PLATFORM_VERSION OMD_VERSION(3, 2, 0)
#elif defined(_AIX3)
    #define OMD_PLATFORM_VERSION OMD_VERSION(3, 0, 0)
#endif
