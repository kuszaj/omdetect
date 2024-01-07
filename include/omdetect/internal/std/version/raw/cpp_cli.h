#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

#if defined(__cplusplus_cli)
    /* YYYYMM => (YYYY, MM, 0) */
    #define OMD_STD_RAW_CPP_CLI_VERSION OMD_YM_VERSION(__cplusplus_cli / 100, __cplusplus_cli % 100)
#endif
