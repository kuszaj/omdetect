#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__ARM_ARCH_9__) || defined(__ARM_ARCH_9A__)
    #define OMD_ARCH_VERSION OMD_VERSION(9, 0, 0)
#elif defined(__ARM_ARCH_8__) || defined(__ARM_ARCH_8A__) || defined(__ARM_ARCH_8A)
    #define OMD_ARCH_VERSION OMD_VERSION(8, 0, 0)
#else
    /* First release denotes ARMv8 */
    #define OMD_ARCH_VERSION OMD_VERSION(8, 0, 0)
#endif
