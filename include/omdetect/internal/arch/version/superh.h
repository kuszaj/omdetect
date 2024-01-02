#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__SH5__)
    #define OMD_ARCH_VERSION OMD_VERSION(5, 0, 0)
#elif defined(__SH4__)
    #define OMD_ARCH_VERSION OMD_VERSION(4, 0, 0)
#elif defined(__SH3__) || defined(__sh3__)
    #define OMD_ARCH_VERSION OMD_VERSION(3, 0, 0)
#elif defined(__sh2__)
    #define OMD_ARCH_VERSION OMD_VERSION(2, 0, 0)
#elif defined(__sh1__)
    #define OMD_ARCH_VERSION OMD_VERSION(1, 0, 0)
#endif
