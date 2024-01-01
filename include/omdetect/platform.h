#ifndef OMD_PLATFORM_H
#define OMD_PLATFORM_H

#include <omdetect/version.h>

#define _OMD_PUBLIC_PARENT

#include <omdetect/internal/platform/const.h>    /* platform identifiers and names */
#include <omdetect/internal/platform/id.h>       /* OMD_PLATFORM */
#include <omdetect/internal/platform/name.h>     /* OMD_PLATFORM_NAME */
#include <omdetect/internal/platform/version.h>  /* OMD_PLATFORM_VERSION,
                                                    OMD_PLATFORM_MAJOR, OMD_PLATFORM_MINOR, OMD_PLATFORM_PATCH */
#undef _OMD_PUBLIC_PARENT

#endif /* OMD_PLATFORM_H */
