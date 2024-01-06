#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__DECCXX_VER)
    /* AABBxxCCC => (AA, BB, CCC) */
    #define OMD_CC_VERSION OMD_VERSION(__DECCXX_VER / 10000000, (__DECCXX_VER / 100000) % 100, __DECCXX_VER % 1000)
#elif defined(__DECC_VER)
    /* AABBxxCCC => (AA, BB, CCC) */
    #define OMD_CC_VERSION OMD_VERSION(__DECC_VER / 10000000, (__DECC_VER / 100000) % 100, __DECC_VER % 1000)
#endif
