#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if (                                                                                            \
        defined(unix) || defined(__unix__) || defined(__unix) ||                                 \
        (!defined(__TOS_WIN__) && (defined(__ibmxl__) || defined(__xlC__) || defined(__IBMC__))) \
    )
    #include <unistd.h>

    #if defined(_POSIX_VERSION)
        /* YYYYMM => (YYYY, MM, 0) */
        #define OMD_STD_RAW_POSIX_VERSION OMD_YM_VERSION(_POSIX_VERSION / 100, _POSIX_VERSION % 100)
    #elif defined(_POSIX_C_SOURCE)
        #if _POSIX_C_SOURCE > 100
            /* YYYYMM => (YYYY, MM, 0) */
            #define OMD_STD_RAW_POSIX_VERSION OMD_YM_VERSION(_POSIX_C_SOURCE / 100, _POSIX_C_SOURCE % 100)
        #elif _POSIX_C_SOURCE == 2
            #define OMD_STD_RAW_POSIX_VERSION OMD_STD_POSIX_2
        #elif _POSIX_C_SOURCE == 1
            #define OMD_STD_RAW_POSIX_VERSION OMD_STD_POSIX_1_1990
        #endif
    #elif defined(_POSIX_SOURCE)
        #define OMD_STD_RAW_POSIX_VERSION OMD_STD_POSIX_1_1988
    #endif
#endif
