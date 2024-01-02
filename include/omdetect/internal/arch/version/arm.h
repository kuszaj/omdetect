#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(_M_ARM)
    #define OMD_ARCH_VERSION OMD_VERSION(_M_ARM, 0, 0)
#elif defined(__TARGET_ARCH_ARM)
    #define OMD_ARCH_VERSION OMD_VERSION(__TARGET_ARCH_ARM, 0, 0)
#elif defined(__TARGET_ARCH_THUMB)
    #define OMD_ARCH_VERSION OMD_VERSION(__TARGET_ARCH_THUMB, 0, 0)
#elif defined(__ARM_ARCH_7__) || defined(__ARM_ARCH_7A__) || defined(__ARM_ARCH_7R__) || defined(__ARM_ARCH_7M__) ||   \
      defined(__ARM_ARCH_7S__)
    #define OMD_ARCH_VERSION OMD_VERSION(7, 0, 0)
#elif defined(__ARM_ARCH_6__) || defined(__ARM_ARCH_6J__) || defined(__ARM_ARCH_6K__) || defined(__ARM_ARCH_6Z__) ||   \
      defined(__ARM_ARCH_6ZK__) || defined(__ARM_ARCH_6T2__)
    #define OMD_ARCH_VERSION OMD_VERSION(6, 0, 0)
#elif defined(__ARM_ARCH_5__) || defined(__ARM_ARCH_5E__) || defined(__ARM_ARCH_5T__) || defined(__ARM_ARCH_5TE__) ||  \
      defined(__ARM_ARCH_5TEJ__) || defined(__ARM_ARCH_6T2__)
    #define OMD_ARCH_VERSION OMD_VERSION(5, 0, 0)
#elif defined(__ARM_ARCH_4__) || defined(__ARM_ARCH_4T__)
    #define OMD_ARCH_VERSION OMD_VERSION(4, 0, 0)
#elif defined(__ARM_ARCH_3__) || defined(__ARM_ARCH_3M__)
    #define OMD_ARCH_VERSION OMD_VERSION(3, 0, 0)
#elif defined(__ARM_ARCH_2__)
    #define OMD_ARCH_VERSION OMD_VERSION(2, 0, 0)
#endif
