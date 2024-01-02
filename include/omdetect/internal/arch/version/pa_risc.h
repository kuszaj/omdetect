#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(_PA_RISC2_0) || defined(__RISC2_0__) || defined(__HPPA20__) || defined(__PA8000__)
    #define OMD_ARCH_VERSION OMD_VERSION(2, 0, 0)
#elif defined(_PA_RISC1_1) || defined(__HPPA11__) || defined(__PA7100__)
    #define OMD_ARCH_VERSION OMD_VERSION(1, 2, 0)
#elif defined(_PA_RISC1_0)
    #define OMD_ARCH_VERSION OMD_VERSION(1, 0, 0)
#endif
