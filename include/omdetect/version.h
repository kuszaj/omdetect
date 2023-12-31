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
 * Shorthand for version tuple (0, 0, 0)
 */
#define OMD_NO_VERSION                    OMD_VERSION(0, 0, 0)

/* Extract encoded major version. */
#define OMD_VERSION_MAJOR(version)        (((version) >> 24) & 0xff)
/* Extract encoded minor version. */
#define OMD_VERSION_MINOR(version)        (((version) >> 14) & 0x3ff)
/* Extract encoded patch version. */
#define OMD_VERSION_PATCH(version)        ((version) & 0x3fff)

#endif /* OMD_VERSION_H */

