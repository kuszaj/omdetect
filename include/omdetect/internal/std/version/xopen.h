#include <omdetect/internal/preamble.h>

#if OMD_STD_RAW_XOPEN_VERSION >= OMD_STD_XOPEN_SUS4
    #define OMD_STD_XOPEN_VERSION OMD_STD_XOPEN_SUS4
#elif OMD_STD_RAW_XOPEN_VERSION >= OMD_STD_XOPEN_SUS3
    #define OMD_STD_XOPEN_VERSION OMD_STD_XOPEN_SUS3
#elif OMD_STD_RAW_XOPEN_VERSION >= OMD_STD_XOPEN_SUS2
    #define OMD_STD_XOPEN_VERSION OMD_STD_XOPEN_SUS2
#elif OMD_STD_RAW_XOPEN_VERSION >= OMD_STD_XOPEN_SUS1
    #define OMD_STD_XOPEN_VERSION OMD_STD_XOPEN_SUS1
#elif OMD_STD_RAW_XOPEN_VERSION >= OMD_STD_XOPEN_XPG4
    #define OMD_STD_XOPEN_VERSION OMD_STD_XOPEN_XPG4
#elif OMD_STD_RAW_XOPEN_VERSION >= OMD_STD_XOPEN_XPG3
    #define OMD_STD_XOPEN_VERSION OMD_STD_XOPEN_XPG3
#endif
