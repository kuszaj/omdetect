#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if !defined(__EMSCRIPTEN_major__)
    #include <emscripten/version.h>
#endif

#if defined(__EMSCRIPTEN_major__)
    #if defined(__EMSCRIPTEN_minor__)
        #if defined(__EMSCRIPTEN_tiny__)
            #define OMD_PLATFORM_VERSION OMD_VERSION(__EMSCRIPTEN_major__, __EMSCRIPTEN_minor__, __EMSCRIPTEN_tiny__)
        #else
            #define OMD_PLATFORM_VERSION OMD_VERSION(__EMSCRIPTEN_major__, __EMSCRIPTEN_minor__, 0)
        #endif
    #else
        #define OMD_PLATFORM_VERSION OMD_VERSION(__EMSCRIPTEN_major__, 0, 0)
    #endif
#endif
