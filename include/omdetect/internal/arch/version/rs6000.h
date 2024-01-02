#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(_ARCH_PWR8)
    #define OMD_ARCH_VERSION OMD_VERSION(8, 0, 0)
#elif defined(_ARCH_PWR7)
    #define OMD_ARCH_VERSION OMD_VERSION(7, 0, 0)
#elif defined(_ARCH_PWR6E) || defined(_ARCH_PWR6)
    #define OMD_ARCH_VERSION OMD_VERSION(6, 0, 0)
#elif defined(_ARCH_PWR5X) || defined(_ARCH_PWR5)
    #define OMD_ARCH_VERSION OMD_VERSION(5, 0, 0)
#elif defined(_ARCH_PWR4)
    #define OMD_ARCH_VERSION OMD_VERSION(4, 0, 0)
#elif defined(_ARCH_PWR3)
    #define OMD_ARCH_VERSION OMD_VERSION(3, 0, 0)
#elif defined(_ARCH_PWR2)
    #define OMD_ARCH_VERSION OMD_VERSION(2, 0, 0)
#elif defined(_ARCH_PWR)
    #define OMD_ARCH_VERSION OMD_VERSION(1, 0, 0)
#endif
