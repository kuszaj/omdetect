#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__I86__)
    #define OMD_ARCH_VERSION OMD_VERSION(__I86__, 0, 0)
#elif defined(_M_IX86)
    #define OMD_ARCH_VERSION OMD_VERSION(_M_IX86, 0, 0)
#elif defined(__i686__)
    #define OMD_ARCH_VERSION OMD_VERSION(6, 0, 0)
#elif defined(__i586__)
    #define OMD_ARCH_VERSION OMD_VERSION(5, 0, 0)
#elif defined(__i486__)
    #define OMD_ARCH_VERSION OMD_VERSION(4, 0, 0)
#elif defined(__i386__)
    #define OMD_ARCH_VERSION OMD_VERSION(3, 0, 0)
#endif
