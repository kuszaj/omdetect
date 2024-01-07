#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if !defined(__cplusplus) && !defined(__cplusplus_cli) && !defined(__embedded_cplusplus)
    #if defined(__STDC_VERSION__)
        #if __STDC_VERSION__ > 100
            /* YYYYMM => (YYYY, MM, 0) */
            #define OMD_STD_RAW_C_VERSION OMD_YM_VERSION(__STDC_VERSION__ / 100, __STDC_VERSION__ % 100)
        #else
            #define OMD_STD_RAW_C_VERSION OMD_STD_C90
        #endif
    #elif defined(__STDC__)
        #define OMD_STD_RAW_C_VERSION OMD_STD_C89
    #endif
#endif
