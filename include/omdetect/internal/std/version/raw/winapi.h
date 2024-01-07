#include <omdetect/internal/preamble.h>

#if defined(_WIN32) || defined(_WIN64) || defined(__WIN32__) || defined(__TOS_WIN__)
    #define OMD_STD_RAW_WINAPI_VERSION OMD_VERSION(1, 0, 0)
#endif
