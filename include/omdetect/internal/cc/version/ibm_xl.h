#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__ibmxl_vrm__)
    /* 0xAABBCC00 => (AA, BB, CC) */
    #define OMD_CC_VERSION OMD_VERSION(     \
        (__ibmxl_vrm__ & 0xff000000) >> 24, \
        (__ibmxl_vrm__ & 0x00ff0000) >> 16, \
        (__ibmxl_vrm__ & 0x0000ff00) >> 8   \
    )
#elif defined(__xlc__)
    /* 0xAABBCCxx => (AA, BB, CC) */
    #define OMD_CC_VERSION OMD_VERSION(     \
        (__xlc__ & 0xff000000) >> 24,       \
        (__xlc__ & 0x00ff0000) >> 16,       \
        (__xlc__ & 0x0000ff00) >> 8         \
    )
#elif defined(__xlC__)
    #if defined(__xlC_ver__)
        /* (0xAABB, 0x0000CCxx) => (AA, BB, CC) */
        #define OMD_CC_VERSION OMD_VERSION((__xlC__ & 0xff00) >> 8, __xlC__ & 0x00ff, (__xlC_ver__ & 0x0000ff00) >> 8)
    #else
        /* 0xAABB => (AA, BB, 0) */
        #define OMD_CC_VERSION OMD_VERSION((__xlC__ & 0xff00) >> 8, __xlC__ & 0x00ff, 0)
    #endif
#endif
