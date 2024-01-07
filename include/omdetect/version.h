#ifndef OMD_VERSION_H
#define OMD_VERSION_H

/**
 * Encode ('major', 'minor', 'patch') version tuple as 32-bit unsigned integer.
 * Allowed value ranges:
 *     'major': 0-255 (8 bits)
 *     'minor': 0-1023 (10 bits)
 *     'patch': 0-16383 (14 bits)
 * Macro takes 'mod <max allowed + 1>' for any given value to prevent overflowing.
 */
#define OMD_VERSION(major, minor, patch) \
    (((((major) % 0x100) << 24) + (((minor) % 0x400) << 14) + ((patch) % 0x4000)) & 0xffffffff)

/**
 * Value marking no version.
 * Shorthand for OMD_VERSION(0, 0, 0) == 0.
 */
#define OMD_NO_VERSION                 OMD_VERSION(0, 0, 0)

/* Extract encoded major version. */
#define OMD_VERSION_MAJOR(version)     (((version) >> 24) & 0xff)
/* Extract encoded minor version. */
#define OMD_VERSION_MINOR(version)     (((version) >> 14) & 0x3ff)
/* Extract encoded patch version. */
#define OMD_VERSION_PATCH(version)     ((version) & 0x3fff)

/**
 * Encode ('year', 'month', 'day') version tuple as 32-bit unsigned integer.
 * Allowed value ranges:
 *     'year':  0-8388607 (23 bits)
 *     'month': 1-12 (4 bits)
 *     'day':   1-31 (5 bits)
 * Macro takes '(value - <min allowed>) mod <max allowed + 1>' for any given value.
 */
#define OMD_YMD_VERSION(year, month, day) \
    (((((year) % 0x800000) << 9) + ((((month)-1) % 12) << 5) + (((day)-1) % 31)) & 0xffffffff)

/**
 * Encode ('year', 'month') version tuple as 32-bit unsigned integer.
 * Shorthand for OMD_YMD_VERSION('year', 'month', 1).
 */
#define OMD_YM_VERSION(year, month)    OMD_YMD_VERSION(year, month, 1)

/**
 * Value marking no date version.
 * Shorthand for OMD_YMD_VERSION(0, 1, 1) == 0.
 */
#define OMD_NO_YMD_VERSION             OMD_YMD_VERSION(0, 1, 1)

/* Extract encoded year. */
#define OMD_VERSION_YEAR(ymd_version)  (((ymd_version) >> 9) & 0x7fffff)
/* Extract encoded month. */
#define OMD_VERSION_MONTH(ymd_version) ((((ymd_version) >> 5) & 0xf) + 1)
/* Extract encoded day. */
#define OMD_VERSION_DAY(ymd_version)   (((ymd_version) & 0x1f) + 1)

#endif /* OMD_VERSION_H */

