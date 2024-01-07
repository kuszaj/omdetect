#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__cplusplus)
    #if __cplusplus > 100
        /* YYYYMM => (YYYY, MM, 0) */
        #define OMD_STD_RAW_CPP_VERSION OMD_YM_VERSION(__cplusplus / 100, __cplusplus % 100)
    #else
        #define OMD_STD_RAW_CPP_VERSION OMD_STD_CPP98
    #endif
#endif
