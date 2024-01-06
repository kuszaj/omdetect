#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__TINYC__)
    /* AABBCC => (AA, BB, CC) */
    #define OMD_CC_VERSION OMD_VERSION(__TINYC__ / 10000, (__TINYC__ / 100) % 100, __TINYC__ % 100)
#endif
