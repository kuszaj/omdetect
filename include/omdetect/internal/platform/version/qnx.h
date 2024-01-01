#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__QNXNTO__)
    #include <sys/neutrino.h>
    #if defined(_NTO_VERSION)
        /* ABB => (A, BB, 0) */
        #define OMD_PLATFORM_VERSION OMD_VERSION(_NTO_VERSION / 100, _NTO_VERSION % 100, 0)
    #else
        #define OMD_PLATFORM_VERSION OMD_VERSION(6, 0, 0)
    #endif
#elif defined(__QNX__)
    #define OMD_PLATFORM_VERSION OMD_VERSION(4, 0, 0)
#endif
