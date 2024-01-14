# TOC
1. [Usage](#usage)
    1. [Guaranteed constants](#guaranteed-constants)
2. [Header files](#header-files)
    1. [`omdetect/arch.h`](#omdetectarchh)
    1. [`omdetect/cc.h`](#omdetectcch)
    1. [`omdetect/platform.h`](#omdetectplatformh)
    1. [`omdetect/std.h`](#omdetectstdh)
    1. [`omdetect/version.h`](#omdetectversionh)
3. [Reference](#reference)

# Usage
To use all library include main header:

```C
#include <omdetect.h>
```

This defines all macros and constants provided my omdetect. It's equivalent to:

```C
#include <omdetect/arch.h>
#include <omdetect/cc.h>
#include <omdetect/platform.h>
#include <omdetect/std.h>
#include <omdetect/version.h>
```

Moreover, including any of `arch.h`, `cc.h`, `platform.h` or `std.h` also includes `version.h`.

All constants (except from `version.h`) fall onto four categories, each with particular prefix and provided by specific header file:

* `OMD_ARCH_` for CPU architecture you are compiling for
* `OMD_CC_` for compiler you are using
* `OMD_PLATFORM_` for platform / OS you are compiling for
* `OMD_STD_` for used / available language standards

`version.h` defines macros for encoding versions detected for the above as an unsigned 32-bit integer. This allows you to check expected version of arch, platform, compiler and/or standard with simple integer comparison.

For example, to check if your project is compiled with clang newer than version 10.0, you could write:

```C
#include <omdetect/cc.h>
...
#if OMD_CC == OMD_CC_CLANG && OMD_CC_VERSION >= OMD_VERSION(10, 0, 0)
    /* some compiler-specific code */
    ...
#endif
```

## Guaranteed constants
Below constants are always defined for any included category with some non-empty value (or all of them if you include `omdetect.h`). If omdetect fails to guess what you are using/what target you are building for, it will assign appropriate unknown/zero values.

For identifiers this will always be some constant equal to `0`. For versions this will always be either:

* `OMD_NO_VERSION` - equivalent to `OMD_VERSION(0, 0, 0)`, or
* `OMD_NO_YMD_VERSION` - equivalent to `OMD_YMD_VERSION(0, 1, 1)`

# Header files

## `omdetect/arch.h`
Includes `omdetect/version.h`.

`OMD_ARCH`\
Architecture unique identifier\
Unknown value: `OMD_ARCH_UNKNOWN`

`OMD_ARCH_NAME`\
Architecture name (string literal)

`OMD_ARCH_VERSION`\
Architecture version\
Unknown / not applicable value: `OMD_NO_VERSION`

`OMD_ARCH_MAJOR`\
Architecture major version\
Unknown / not applicable value: `0`

`OMD_ARCH_MINOR`\
Architecture minor version\
Unknown / not applicable value: `0`

`OMD_ARCH_PATCH`\
Architecture patch version\
Unknown / not applicable value: `0`

## `omdetect/cc.h`
Includes `omdetect/version.h`.

`OMD_CC`\
Compiler unique identifier\
Unknown value: `OMD_CC_UNKNOWN`

`OMD_CC_NAME`\
Compiler name (string literal)

`OMD_CC_VERSION`\
Compiler version\
Unknown / not applicable value: `OMD_NO_VERSION`

`OMD_CC_MAJOR`\
Compiler major version\
Unknown / not applicable value: `0`

`OMD_CC_MINOR`\
Compiler minor version\
Unknown / not applicable value: `0`

`OMD_CC_PATCH`\
Compiler patch version\
Unknown / not applicable value: `0`

## `omdetect/platform.h`
Includes `omdetect/version.h`.

`OMD_PLATFORM`\
Platform / OS unique identifier\
Unknown value: `OMD_ARCH_UNKNOWN`

`OMD_PLATFORM_NAME`\
Platform / OS name (string literal)

`OMD_PLATFORM_VERSION`\
Platform / OS version\
Unknown / not applicable value: `OMD_NO_VERSION`

`OMD_PLATFORM_MAJOR`\
Platform / OS major version\
Unknown / not applicable value: `0`

`OMD_PLATFORM_MINOR`\
Platform / OS minor version\
Unknown / not applicable value: `0`

`OMD_PLATFORM_PATCH`\
Platform / OS patch version\
Unknown / not applicable value: `0`

## `omdetect/std.h`
Includes `omdetect/version.h`.

`OMD_STD_C_VERSION`\
Used C standard\
Unknown / not applicable value: `OMD_NO_YMD_VERSION`\
Note: if any of `CPP`, `CPP_CLI` or `ECPP` detected, this will be treated as not applicable

`OMD_STD_CPP_VERSION`\
Used C++ standard\
Unknown / not applicable value: `OMD_NO_YMD_VERSION`

`OMD_STD_CPP_CLI_VERSION`\
Available C++/CLI standard\
Unknown / not applicable value: `OMD_NO_YMD_VERSION`

`OMD_STD_ECPP_VERSION`\
Available embedded C++ standard\
Unknown / not applicable value: `OMD_NO_VERSION`

`OMD_STD_POSIX_VERSION`\
Available POSIX standard\
Unknown / not applicable value: `OMD_NO_YMD_VERSION`

`OMD_STD_WINAPI_VERSION`\
Available WinAPI\
Unknown / not applicable value: `OMD_NO_VERSION`\
Note: if detected this will always be `OMD_VERSION(1, 0, 0)`

`OMD_STD_XOPEN_VERSION`\
Available X/Open standard\
Unknown / not applicable value: `OMD_NO_YMD_VERSION`

`OMD_STD_C_NAME`\
Used C standard name (string literal)

`OMD_STD_CPP_NAME`\
Used C++ standard name (string literal)

`OMD_STD_POSIX_NAME`\
Available POSIX standard name (string literal)

`OMD_STD_XOPEN_NAME`\
Avaialble X/Open standard name (string literal)

`OMD_STD_C_YEAR`\
Same as `OMD_VERSION_YEAR(OMD_STD_C_VERSION)`

`OMD_STD_C_MONTH`\
Same as `OMD_VERSION_MONTH(OMD_STD_C_VERSION)`

`OMD_STD_CPP_YEAR`\
Same as `OMD_VERSION_YEAR(OMD_STD_CPP_VERSION)`

`OMD_STD_CPP_MONTH`\
Same as `OMD_VERSION_MONTH(OMD_STD_CPP_VERSION)`

`OMD_STD_POSIX_YEAR`\
Same as `OMD_VERSION_YEAR(OMD_STD_POSIX_VERSION)`

`OMD_STD_POSIX_MONTH`\
Same as `OMD_VERSION_MONTH(OMD_STD_POSIX_VERSION)`

`OMD_STD_XOPEN_YEAR`\
Same as `OMD_VERSION_YEAR(OMD_STD_XOPEN_VERSION)`

`OMD_STD_XOPEN_MONTH`\
Same as `OMD_VERSION_MONTH(OMD_STD_XOPEN_VERSION)`

## `omdetect/version.h`
`OMD_VERSION(M, m, p)`\
Encodes `<M>.<m>.<p>` version format to 32-bit unsigned integer

`OMD_VERSION_MAJOR(version)`\
Extracts major version from `OMD_VERSION(...)`

`OMD_VERSION_MINOR(version)`\
Extracts minor version from `OMD_VERSION(...)`

`OMD_VERSION_PATCH(version)`\
Extracts patch version from `OMD_VERSION(...)`

`OMD_NO_VERSION`\
Same as `OMD_VERSION(0, 0, 0)`

`OMD_YMD_VERSION(year, month, day)`\
Encodes date version format to 32-bit unsigned integer

`OMD_VERSION_YEAR(version)`\
Extracts year from `OMD_YMD_VERSION(...)`

`OMD_VERSION_MONTH(version)`\
Extracts month from `OMD_YMD_VERSION(...)`

`OMD_VERSION_DAY(version)`\
Extracts day from `OMD_YMD_VERSION(...)`

`OMD_YM_VERSION(year, month)`\
Shorthand for `OMD_YMD_VERSION(year, month, 1)`

`OMD_NO_YMD_VERSION`\
Same as `OMD_YMD_VERSION(0, 1, 1)`

`__OMD_VERSION__`\
This library version

`__OMD_VERSION_MAJOR__`\
Same as `OMD_VERSION_MAJOR(__OMD_VERSION__)`

`__OMD_VERSION_MINOR__`\
Same as `OMD_VERSION_MINOR(__OMD_VERSION__)`

`__OMD_VERSION_PATCH__`\
Same as `OMD_VERSION_PATCH(__OMD_VERSION__)`

# Reference
* [`omdetect/arch.h`](./arch.md)
* [`omdetect/cc.h`](./cc.md)
* [`omdetect/platform.h`](./platform.md)
* [`omdetect/std.h`](./std.md)
* [`omdetect/version.h`](./version.md)
