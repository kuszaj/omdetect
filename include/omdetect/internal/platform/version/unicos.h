#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(_UNICOS)
    #define OMD_PLATFORM_VERSION OMD_VERSION(_UNICOS, 0, 0)
#endif
