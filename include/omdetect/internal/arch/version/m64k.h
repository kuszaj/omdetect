#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__mc68060__) || defined(mc68060) || defined(__mc68060) || defined(__MC68060__)
    #define OMD_ARCH_VERSION OMD_VERSION(6, 0, 0)
#elif defined(__mc68040__) || defined(mc68040) || defined(__mc68040) || defined(__MC68040__)
    #define OMD_ARCH_VERSION OMD_VERSION(4, 0, 0)
#elif defined(__mc68030__) || defined(mc68030) || defined(__mc68030) || defined(__MC68030__)
    #define OMD_ARCH_VERSION OMD_VERSION(3, 0, 0)
#elif defined(__mc68020__) || defined(mc68020) || defined(__mc68020) || defined(__MC68020__)
    #define OMD_ARCH_VERSION OMD_VERSION(2, 0, 0)
#elif defined(__mc68010__) || defined(mc68010) || defined(__mc68010) || defined(__MC68010__)
    #define OMD_ARCH_VERSION OMD_VERSION(1, 0, 0)
#endif
