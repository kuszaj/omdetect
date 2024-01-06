#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__HP_aCC) && __HP_aCC > 1
    /* AABBCC => (AA, BB, CC) */
    #define OMD_CC_VERSION OMD_VERSION(__HP_aCC / 10000, (__HP_aCC / 100) % 100, __HP_aCC % 100)
#endif
