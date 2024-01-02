#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__CUDA_ARCH__)
    /* AB0 => (A, B, 0) */
    #define OMD_ARCH_VERSION OMD_VERSION(__CUDA_ARCH__ / 100, (__CUDA_ARCH__ / 10) % 10, 0)
#endif
