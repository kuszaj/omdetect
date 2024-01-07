#include <omdetect/internal/preamble.h>
#include <omdetect/version.h>

/**
 * C standards.
 */
#define OMD_STD_C89                 OMD_YM_VERSION(1989, 1)   /* C89 */
#define OMD_STD_C90                 OMD_YM_VERSION(1990, 1)   /* C90 */
#define OMD_STD_C94                 OMD_YM_VERSION(1994, 9)   /* C94 */
#define OMD_STD_C99                 OMD_YM_VERSION(1999, 1)   /* C99 */
#define OMD_STD_C11                 OMD_YM_VERSION(2011, 12)  /* C11 */
#define OMD_STD_C17                 OMD_YM_VERSION(2017, 10)  /* C17 */
#define OMD_STD_C23                 OMD_YM_VERSION(2023, 11)  /* C23 */

/**
 * C standard aliases.
 */
#define OMD_STD_ANSI_C              OMD_STD_C89
#define OMD_STD_ISO_C               OMD_STD_C90

/**
 * C++ standards.
 */
#define OMD_STD_CPP98               OMD_YM_VERSION(1997, 11)  /* C++98 */
#define OMD_STD_CPP11               OMD_YM_VERSION(2011, 3)   /* C++11 */
#define OMD_STD_CPP14               OMD_YM_VERSION(2014, 2)   /* C++14 */
#define OMD_STD_CPP17               OMD_YM_VERSION(2017, 3)   /* C++17 */
#define OMD_STD_CPP20               OMD_YM_VERSION(2020, 2)   /* C++20 */
#define OMD_STD_CPP23               OMD_YM_VERSION(2023, 2)   /* C++23 */

/**
 * C++ standard aliases.
 */
#define OMD_STD_CPP0X               OMD_STD_CPP11
#define OMD_STD_CPP1Y               OMD_STD_CPP14
#define OMD_STD_CPP1Z               OMD_STD_CPP17
#define OMD_STD_CPP2A               OMD_STD_CPP20

/**
 * POSIX standards.
 */
#define OMD_STD_POSIX_1_1988        OMD_YM_VERSION(1988, 8)   /* POSIX.1-1988 */
#define OMD_STD_POSIX_1_1990        OMD_YM_VERSION(1990, 9)   /* POSIX.1-1990 */
#define OMD_STD_POSIX_1B_1993       OMD_YM_VERSION(1993, 9)   /* POSIX.1b-1993 */
#define OMD_STD_POSIX_1C_1995       OMD_YM_VERSION(1995, 6)   /* POSIX.1c-1995 */
#define OMD_STD_POSIX_1_2001        OMD_YM_VERSION(2001, 12)  /* POSIX.1-2001 */
#define OMD_STD_POSIX_1_2008        OMD_YM_VERSION(2008, 9)   /* POSIX.1-2008 */

/**
 * X/Open standards.
 */
#define OMD_STD_XOPEN_XPG3          OMD_VERSION(3, 0, 0)      /* X/Open XPG3 */
#define OMD_STD_XOPEN_XPG4          OMD_VERSION(4, 0, 0)      /* X/Open XPG4 */
#define OMD_STD_XOPEN_SUS1          OMD_VERSION(4, 1, 0)      /* X/Open SUSv1 */
#define OMD_STD_XOPEN_SUS2          OMD_VERSION(5, 0, 0)      /* X/Open SUSv2 */
#define OMD_STD_XOPEN_SUS3          OMD_VERSION(6, 0, 0)      /* X/Open SUSv3 */
#define OMD_STD_XOPEN_SUS4          OMD_VERSION(7, 0, 0)      /* X/Open SUSv4 */

/**
 * Standard names.
 */
#define OMD_STD_NONE_NAME           ""
#define OMD_STD_C89_NAME            "C89"
#define OMD_STD_C90_NAME            "C90"
#define OMD_STD_C94_NAME            "C94"
#define OMD_STD_C99_NAME            "C99"
#define OMD_STD_C11_NAME            "C11"
#define OMD_STD_C17_NAME            "C17"
#define OMD_STD_C23_NAME            "C23"
#define OMD_STD_CPP98_NAME          "C++98"
#define OMD_STD_CPP11_NAME          "C++11"
#define OMD_STD_CPP14_NAME          "C++14"
#define OMD_STD_CPP17_NAME          "C++17"
#define OMD_STD_CPP20_NAME          "C++20"
#define OMD_STD_CPP23_NAME          "C++23"
#define OMD_STD_POSIX_1_1988_NAME   "POSIX.1-1988"
#define OMD_STD_POSIX_1_1990_NAME   "POSIX.1-1990"
#define OMD_STD_POSIX_1B_1993_NAME  "POSIX.1b-1993"
#define OMD_STD_POSIX_1C_1995_NAME  "POSIX.1c-1995"
#define OMD_STD_POSIX_1_2001_NAME   "POSIX.1-2001"
#define OMD_STD_POSIX_1_2008_NAME   "POSIX.1-2008"
#define OMD_STD_XOPEN_XPG3_NAME     "X/Open XPG3"
#define OMD_STD_XOPEN_XPG4_NAME     "X/Open XPG4"
#define OMD_STD_XOPEN_SUS1_NAME     "X/Open SUSv1"
#define OMD_STD_XOPEN_SUS2_NAME     "X/Open SUSv2"
#define OMD_STD_XOPEN_SUS3_NAME     "X/Open SUSv3"
#define OMD_STD_XOPEN_SUS4_NAME     "X/Open SUSv4"

/**
 * Standard name aliases.
 */
#define OMD_STD_ANSI_C_NAME         OMD_STD_C89_NAME
#define OMD_STD_ISO_C_NAME          OMD_STD_C90_NAME
#define OMD_STD_CPP0X_NAME          OMD_STD_CPP11_NAME
#define OMD_STD_CPP1Y_NAME          OMD_STD_CPP14_NAME
#define OMD_STD_CPP1Z_NAME          OMD_STD_CPP17_NAME
#define OMD_STD_CPP2A_NAME          OMD_STD_CPP20_NAME
