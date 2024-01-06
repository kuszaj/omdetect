#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(_MSC_VER)
    #if defined(_MSC_FULL_VER)
        #if _MSC_FULL_VER / 100000 == _MSC_VER
            /* AABBCCCCx => (AA, BB, CCCC) */
            #define OMD_CC_VERSION OMD_VERSION( \
                _MSC_FULL_VER / 10000000,       \
                (_MSC_FULL_VER / 100000) % 100, \
                (_MSC_FULL_VER / 10) % 10000    \
            )
        #elif _MSC_FULL_VER / 10000 == _MSC_VER
            /* AABBCCCC => (AA, BB, CCCC) */
            #define OMD_CC_VERSION OMD_VERSION( \
                _MSC_FULL_VER / 1000000,        \
                (_MSC_FULL_VER / 10000) % 100,  \
                _MSC_FULL_VER % 10000           \
            )
        #else
            /* AABB => (AA, BB, 0) */
            #define OMD_CC_VERSION OMD_VERSION(_MSC_VER / 100, _MSC_VER % 100, 0)
        #endif
    #else
        /* AABB => (AA, BB, 0) */
        #define OMD_CC_VERSION OMD_VERSION(_MSC_VER / 100, _MSC_VER % 100, 0)
    #endif
#endif
