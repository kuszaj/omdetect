#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(_WIN32_WCE)
    /* ABB => (A, BB) */
    #define OMD_PLATFORM_VERSION OMD_VERSION(_WIN32_WCE / 100, _WIN32_WCE % 100, 0)
#endif
