#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if (                                                                                            \
        defined(unix) || defined(__unix__) || defined(__unix) ||                                 \
        (!defined(__TOS_WIN__) && (defined(__ibmxl__) || defined(__xlC__) || defined(__IBMC__))) \
    )
    #include <unistd.h>

    #if defined(_XOPEN_VERSION)
        #if _XOPEN_VERSION >= 500
            #define OMD_STD_RAW_XOPEN_VERSION OMD_VERSION(_XOPEN_VERSION / 100, 0, 0)
        #elif _XOPEN_VERSION == 4 && defined(_XOPEN_UNIX)
            #define OMD_STD_RAW_XOPEN_VERSION OMD_STD_XOPEN_SUS1
        #elif _XOPEN_VERSION == 4
            #define OMD_STD_RAW_XOPEN_VERSION OMD_STD_XOPEN_XPG4
        #elif _XOPEN_VERSION == 3
            #define OMD_STD_RAW_XOPEN_VERSION OMD_STD_XOPEN_XPG3
        #endif
    #elif defined(_XOPEN_SOURCE)
        #if _XOPEN_SOURCE >= 500
            #define OMD_STD_RAW_XOPEN_VERSION OMD_VERSION(_XOPEN_SOURCE / 100, 0, 0)
        #elif _XOPEN_SOURCE == 4 && defined(_XOPEN_UNIX)
            #define OMD_STD_RAW_XOPEN_VERSION OMD_STD_XOPEN_SUS1
        #elif _XOPEN_SOURCE == 4
            #define OMD_STD_RAW_XOPEN_VERSION OMD_STD_XOPEN_XPG4
        #elif _XOPEN_SOURCE == 3
            #define OMD_STD_RAW_XOPEN_VERSION OMD_STD_XOPEN_XPG3
        #endif
    #endif
#endif
