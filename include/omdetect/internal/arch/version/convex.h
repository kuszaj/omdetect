#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__convex_c38__)
    #define OMD_ARCH_VERSION OMD_VERSION(3, 8, 0)
#elif defined(__convex_c34__)
    #define OMD_ARCH_VERSION OMD_VERSION(3, 4, 0)
#elif defined(__convex_c32__)
    #define OMD_ARCH_VERSION OMD_VERSION(3, 2, 0)
#elif defined(__convex_c2__)
    #define OMD_ARCH_VERSION OMD_VERSION(2, 0, 0)
#elif defined(__convex_c1__)
    #define OMD_ARCH_VERSION OMD_VERSION(1, 0, 0)
#endif
