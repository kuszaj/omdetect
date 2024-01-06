#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__clang_major__)
    #if defined(__clang_minor__)
        #if defined(__clang_patchlevel__)
            #define OMD_CC_VERSION OMD_VERSION(__clang_major__, __clang_minor__, __clang_patchlevel__)
        #else
            #define OMD_CC_VERSION OMD_VERSION(__clang_major__, __clang_minor__, 0)
        #endif
    #else
        #define OMD_CC_VERSION OMD_VERSION(__clang_major__, 0, 0)
    #endif
#endif
