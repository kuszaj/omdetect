#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if !defined(__EMSCRIPTEN_major__)
    #include <emscripten/version.h>
#endif

#if defined(__EMSCRIPTEN_major__)
    #define OMD_PLATFORM_VERSION OMD_VERSION(__EMSCRIPTEN_major__, __EMSCRIPTEN_minor__, __EMSCRIPTEN_tiny__)
#endif
