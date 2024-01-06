#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__CUDACC_VER_MAJOR__)
    #if defined(__CUDACC_VER_MINOR__)
        #if defined(__CUDACC_VER_BUILD__)
            #define OMD_CC_VERSION OMD_VERSION(__CUDACC_VER_MAJOR__, __CUDACC_VER_MINOR__, __CUDACC_VER_BUILD__)
        #else
            #define OMD_CC_VERSION OMD_VERSION(__CUDACC_VER_MAJOR__, __CUDACC_VER_MINOR__, 0)
        #endif
    #else
        #define OMD_CC_VERSION OMD_VERSION(__CUDACC_VER_MAJOR__, 0, 0)
    #endif
#endif
