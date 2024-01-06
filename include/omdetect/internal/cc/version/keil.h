#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__C166__)
    /* ABB => (A, BB, 0) */
    #define OMD_CC_VERSION OMD_VERSION(__C166__ / 100, __C166__ / 100, 0)
#elif defined(__CX51__)
    /* ABB => (A, BB, 0) */
    #define OMD_CC_VERSION OMD_VERSION(__CX51__ / 100, __CX51__ / 100, 0)
#elif defined(__C51__)
    /* ABB => (A, BB, 0) */
    #define OMD_CC_VERSION OMD_VERSION(__C51__ / 100, __C51__ / 100, 0)
#elif defined(__KEIL__) && defined(__CA__)
    /* ABB => (A, BB, 0) */
    #define OMD_CC_VERSION OMD_VERSION(__CA__ / 100, __CA__ / 100, 0)
#endif
