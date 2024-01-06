#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__EDG_VERSION__)
    /* ABB => (A, BB, 0) */
    #define OMD_CC_VERSION OMD_VERSION(__EDG_VERSION__ / 100, __EDG_VERSION__ % 100, 0)
#endif
