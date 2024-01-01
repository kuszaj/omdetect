#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#include <version.h>
#if defined(_WRS_VXWORKS_MAJOR)
    #define OMD_PLATFORM_VERSION OMD_VERSION(_WRS_VXWORKS_MAJOR, _WRS_VXWORKS_MINOR, _WRS_VXWORKS_MAINT)
#endif
