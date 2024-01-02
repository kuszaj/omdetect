#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__alpha_ev6__)
    #define OMD_ARCH_VERSION OMD_VERSION(6, 0, 0)
#elif defined(__alpha_ev5__)
    #define OMD_ARCH_VERSION OMD_VERSION(5, 0, 0)
#elif defined(__alpha_ev4__)
    #define OMD_ARCH_VERSION OMD_VERSION(4, 0, 0)
#endif
