#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__INTEL_LLVM_COMPILER) && __INTEL_LLVM_COMPILER >= OMD_VERSION(23, 0, 0)
    /* xxAABBCC => (AA, BB, CC) */
    #define OMD_CC_VERSION OMD_VERSION(        \
        (__INTEL_LLVM_COMPILER / 10000) % 100, \
        (__INTEL_LLVM_COMPILER / 100) % 100,   \
        __INTEL_LLVM_COMPILER % 100            \
    )
#elif defined(__INTEL_COMPILER)
    #if __INTEL_COMPILER == 9999
        #define OMD_CC_VERSION OMD_VERSION(12, 1, 0)
    #elif defined(__INTEL_COMPILER_UPDATE)
        #if __INTEL_COMPILER > 1900
            /* (xxAA, C) => (AA, C, 0) */
            #define OMD_CC_VERSION OMD_VERSION(__INTEL_COMPILER % 100, __INTEL_COMPILER_UPDATE, 0)
        #else
            /* (AABB, C) => (AA, BB, C) */
            #define OMD_CC_VERSION OMD_VERSION(__INTEL_COMPILER / 100, __INTEL_COMPILER % 100, __INTEL_COMPILER_UPDATE)
        #endif
    #else
        #if __INTEL_COMPILER > 1900
            /* xxAA => (AA, 0, 0) */
            #define OMD_CC_VERSION OMD_VERSION(__INTEL_COMPILER % 100, 0, 0)
        #else
            /* AABB => (AA, BB, 0) */
            #define OMD_CC_VERSION OMD_VERSION(__INTEL_COMPILER / 100, __INTEL_COMPILER % 100, 0)
        #endif
    #endif
#endif
