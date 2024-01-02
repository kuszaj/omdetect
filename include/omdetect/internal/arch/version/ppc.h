#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__ppc604__) || defined(_ARCH_604) || (defined(_M_PPC) && _M_PPC == 604)
    #define OMD_ARCH_VERSION OMD_VERSION(6, 0, 4)
#elif defined(__ppc603__) || defined(_ARCH_603) || (defined(_M_PPC) && _M_PPC == 603)
    #define OMD_ARCH_VERSION OMD_VERSION(6, 0, 3)
#elif defined(__ppc601__) || defined(_ARCH_601) || (defined(_M_PPC) && _M_PPC == 601)
    #define OMD_ARCH_VERSION OMD_VERSION(6, 0, 4)
#elif defined(_ARCH_450) || (defined(_M_PPC) && _M_PPC == 450)
    #define OMD_ARCH_VERSION OMD_VERSION(4, 5, 0)
#elif defined(_ARCH_440) || (defined(_M_PPC) && _M_PPC == 440)
    #define OMD_ARCH_VERSION OMD_VERSION(4, 4, 0)
#endif
