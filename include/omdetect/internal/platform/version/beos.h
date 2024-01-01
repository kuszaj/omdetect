#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#include <BeBuild.h>

#if defined(B_BEOS_VERSION)
    /* 0xAABB => (AA, BB, 0) */
    #define OMD_PLATFORM_VERSION OMD_VERSION((B_BEOS_VERSION & 0xff00) >> 8, B_BEOS_VERSION & 0x00ff, 0)
#endif
