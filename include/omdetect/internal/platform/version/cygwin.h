#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#include <cygwin/version.h>
#if defined(CYGWIN_VERSION_API_MAJOR)
    #define OMD_PLATFORM_VERSION OMD_VERSION(CYGWIN_VERSION_API_MAJOR, CYGWIN_VERSION_API_MINOR, 0)
#endif
