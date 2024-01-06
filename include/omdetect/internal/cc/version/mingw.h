#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__MINGW64_VERSION_MAJOR)
    #if defined(__MINGW64_VERSION_MINOR)
        #define OMD_CC_VERSION OMD_VERSION(__MINGW64_VERSION_MAJOR, __MINGW64_VERSION_MINOR, 0)
    #else
        #define OMD_CC_VERSION OMD_VERSION(__MINGW64_VERSION_MAJOR, 0, 0)
    #endif
#elif defined(__MINGW32_MAJOR_VERSION)
    #if defined(__MINGW32_MINOR_VERSION)
        #define OMD_CC_VERSION OMD_VERSION(__MINGW32_MAJOR_VERSION, __MINGW32_MINOR_VERSION, 0)
    #else
        #define OMD_CC_VERSION OMD_VERSION(__MINGW32_MAJOR_VERSION, 0, 0)
    #endif
#endif
