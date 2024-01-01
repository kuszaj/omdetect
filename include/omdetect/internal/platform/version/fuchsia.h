#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__Fuchsia_API_level__)
    #define OMD_PLATFORM_VERSION OMD_VERSION(__Fuchsia_API_level__, 0, 0)
#endif
