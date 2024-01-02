#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__e2k__) && defined(__iset__)
    #define OMD_ARCH_VERSION OMD_VERSION(__iset__, 0, 0)
#endif
