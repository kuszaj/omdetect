#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__MRC__)
    /* 0xAABB => (AA, BB, 0) */
    #define OMD_CC_VERSION OMD_VERSION((__MRC__ & 0xff00) >> 8, __MRC__ & 0x00ff, 0)
#endif
