#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#include <version.h>
#if defined(_WRS_VXWORKS_MAJOR)
    #if defined(_WRS_VXWORKS_MINOR)
        #if defined(_WRS_VXWORKS_MAINT)
            #define OMD_PLATFORM_VERSION OMD_VERSION(_WRS_VXWORKS_MAJOR, _WRS_VXWORKS_MINOR, _WRS_VXWORKS_MAINT)
        #else
            #define OMD_PLATFORM_VERSION OMD_VERSION(_WRS_VXWORKS_MAJOR, _WRS_VXWORKS_MINOR, 0)
        #endif
    #else
        #define OMD_PLATFORM_VERSION OMD_VERSION(_WRS_VXWORKS_MAJOR, 0, 0)
    #endif
#endif
