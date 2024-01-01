#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#include <sys/param.h>

#if defined(BSD4_4)
    #define OMD_PLATFORM_VERSION OMD_VERSION(4, 4, 0)
#elif defined(BSD4_4)
    #define OMD_PLATFORM_VERSION OMD_VERSION(4, 4, 0)
#elif defined(BSD4_3)
    #define OMD_PLATFORM_VERSION OMD_VERSION(4, 3, 0)
#elif defined(BSD4_2)
    #define OMD_PLATFORM_VERSION OMD_VERSION(4, 2, 0)
#endif
