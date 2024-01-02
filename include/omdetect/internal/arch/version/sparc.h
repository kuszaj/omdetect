#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__sparc_v9__) || defined(__sparcv9)
    #define OMD_ARCH_VERSION OMD_VERSION(9, 0, 0)
#elif defined(__sparc_v8__) || defined(__sparcv8)
    #define OMD_ARCH_VERSION OMD_VERSION(8, 0, 0)
#endif
