#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

/* Enforce resolving OMD_STD_RAW_*_VERSION here. */
#if defined(OMD_STD_RAW_C_VERSION)
    #undef OMD_STD_RAW_C_VERSION
#endif
#if defined(OMD_STD_RAW_CPP_VERSION)
    #undef OMD_STD_RAW_CPP_VERSION
#endif
#if defined(OMD_STD_RAW_CPP_CLI_VERSION)
    #undef OMD_STD_RAW_CPP_CLI_VERSION
#endif
#if defined(OMD_STD_RAW_ECPP_VERSION)
    #undef OMD_STD_RAW_ECPP_VERSION
#endif
#if defined(OMD_STD_RAW_POSIX_VERSION)
    #undef OMD_STD_RAW_POSIX_VERSION
#endif
#if defined(OMD_STD_RAW_WINAPI_VERSION)
    #undef OMD_STD_RAW_WINAPI_VERSION
#endif
#if defined(OMD_STD_RAW_XOPEN_VERSION)
    #undef OMD_STD_RAW_XOPEN_VERSION
#endif

/* Enforce resolving OMD_STD_*_VERSION here. */
#if defined(OMD_STD_C_VERSION)
    #undef OMD_STD_C_VERSION
#endif
#if defined(OMD_STD_CPP_VERSION)
    #undef OMD_STD_CPP_VERSION
#endif
#if defined(OMD_STD_CPP_CLI_VERSION)
    #undef OMD_STD_CPP_CLI_VERSION
#endif
#if defined(OMD_STD_ECPP_VERSION)
    #undef OMD_STD_ECPP_VERSION
#endif
#if defined(OMD_STD_POSIX_VERSION)
    #undef OMD_STD_POSIX_VERSION
#endif
#if defined(OMD_STD_WINAPI_VERSION)
    #undef OMD_STD_WINAPI_VERSION
#endif
#if defined(OMD_STD_XOPEN_VERSION)
    #undef OMD_STD_XOPEN_VERSION
#endif

/**
 * OMD_STD_RAW_*_VERSION
 */
#include <omdetect/internal/std/version/raw/c.h>
#include <omdetect/internal/std/version/raw/ecpp.h>
#include <omdetect/internal/std/version/raw/cpp_cli.h>
#include <omdetect/internal/std/version/raw/cpp.h>
#include <omdetect/internal/std/version/raw/posix.h>
#include <omdetect/internal/std/version/raw/xopen.h>
#include <omdetect/internal/std/version/raw/winapi.h>

/* OMD_STD_RAW_*_VERSION safeguards */
#if !defined(OMD_STD_RAW_C_VERSION)
    #define OMD_STD_RAW_C_VERSION OMD_NO_YMD_VERSION
#endif
#if !defined(OMD_STD_RAW_CPP_VERSION)
    #define OMD_STD_RAW_CPP_VERSION OMD_NO_YMD_VERSION
#endif
#if !defined(OMD_STD_RAW_CPP_CLI_VERSION)
    #define OMD_STD_RAW_CPP_CLI_VERSION OMD_NO_YMD_VERSION
#endif
#if !defined(OMD_STD_RAW_ECPP_VERSION)
    #define OMD_STD_RAW_ECPP_VERSION OMD_NO_VERSION
#endif
#if !defined(OMD_STD_RAW_POSIX_VERSION)
    #define OMD_STD_RAW_POSIX_VERSION OMD_NO_YMD_VERSION
#endif
#if !defined(OMD_STD_RAW_WINAPI_VERSION)
    #define OMD_STD_RAW_WINAPI_VERSION OMD_NO_VERSION
#endif
#if !defined(OMD_STD_RAW_XOPEN_VERSION)
    #define OMD_STD_RAW_XOPEN_VERSION OMD_NO_YMD_VERSION
#endif

/**
 * OMD_STD_*_VERSION
 */
#include <omdetect/internal/std/version/c.h>
#include <omdetect/internal/std/version/cpp.h>
#include <omdetect/internal/std/version/posix.h>
#include <omdetect/internal/std/version/xopen.h>

#define OMD_STD_CPP_CLI_VERSION OMD_STD_RAW_CPP_CLI_VERSION
#define OMD_STD_ECPP_VERSION OMD_STD_RAW_ECPP_VERSION
#define OMD_STD_WINAPI_VERSION OMD_STD_RAW_WINAPI_VERSION

/* OMD_STD_*_VERSION safeguards */
#if !defined(OMD_STD_C_VERSION)
    #define OMD_STD_C_VERSION OMD_NO_YMD_VERSION
#endif
#if !defined(OMD_STD_CPP_VERSION)
    #define OMD_STD_CPP_VERSION OMD_NO_YMD_VERSION
#endif
#if !defined(OMD_STD_POSIX_VERSION)
    #define OMD_STD_POSIX_VERSION OMD_NO_YMD_VERSION
#endif
#if !defined(OMD_STD_XOPEN_VERSION)
    #define OMD_STD_XOPEN_VERSION OMD_NO_YMD_VERSION
#endif

/* OMD_STD_*_YEAR, OMD_STD_*_MONTH */
#define OMD_STD_C_YEAR       OMD_VERSION_YEAR(OMD_STD_C_VERSION)
#define OMD_STD_C_MONTH      OMD_VERSION_MONTH(OMD_STD_C_VERSION)
#define OMD_STD_CPP_YEAR     OMD_VERSION_YEAR(OMD_STD_CPP_VERSION)
#define OMD_STD_CPP_MONTH    OMD_VERSION_MONTH(OMD_STD_CPP_VERSION)
#define OMD_STD_POSIX_YEAR   OMD_VERSION_YEAR(OMD_STD_POSIX_VERSION)
#define OMD_STD_POSIX_MONTH  OMD_VERSION_MONTH(OMD_STD_POSIX_VERSION)
#define OMD_STD_XOPEN_YEAR   OMD_VERSION_YEAR(OMD_STD_XOPEN_VERSION)
#define OMD_STD_XOPEN_MONTH  OMD_VERSION_MONTH(OMD_STD_XOPEN_VERSION)
