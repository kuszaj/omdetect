#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__INTEL_COMPILER)
    #if __INTEL_COMPILER == 9999
        #define OMD_CC_VERSION OMD_VERSION(12, 1, 0)
    #elif defined(__INTEL_COMPILER_UPDATE)
        /* (AABB, C) => (AA, BB, C) */
        #define OMD_CC_VERSION OMD_VERSION(__INTEL_COMPILER / 100, __INTEL_COMPILER % 100, __INTEL_COMPILER_UPDATE)
    #else
        /* AABB => (AA, BB, 0) */
        #define OMD_CC_VERSION OMD_VERSION(__INTEL_COMPILER / 100, __INTEL_COMPILER % 100, 0)
    #endif
#endif
