# omdetect

Header-only toolkit for detecting build targets and toolchains using predefined C preprocessor macros.

omdetect attempts to be a comprehensive library for checking at compile time:

* which compiler is used
* which standard is selected (including POSIX and X/Open)
* what is the target architecture and platform

all defined in a handful of preprocessor constants.

## Example
```C
/* example.c */
#include <omdetect.h>
#include <stdio.h>

void print_info(const char* type, const char* name, unsigned int version) {
    if (version > OMD_NO_VERSION) {
        printf(
            "%s: %s %u.%u.%u\n",
            type, name,
            OMD_VERSION_MAJOR(version),
            OMD_VERSION_MINOR(version),
            OMD_VERSION_PATCH(version)
        );
    } else {
        printf("%s: %s\n", type, name);
    }
}

int main(void) {
    print_info("Arch", OMD_ARCH_NAME, OMD_ARCH_VERSION);
    print_info("Platform", OMD_PLATFORM_NAME, OMD_PLATFORM_VERSION);
    print_info("Compiler", OMD_CC_NAME, OMD_CC_VERSION);
    print_info("C standard", OMD_STD_C_NAME, 0);

    return 0;
}
```

```console
$ # gcc
$ gcc -o example -Iinclude example.c && ./example
Arch: AMD64
Platform: Linux 5.15.131
Compiler: GCC 12.3.0
C standard: C17
```

```console
$ # tcc
$ tcc -o example -Iinclude example.c && ./example
Arch: AMD64
Platform: Linux 5.15.131
Compiler: TCC 0.9.28
C standard: C99
```

```console
$ # clang with c89 standard, for 32-bit CPU
$ clang -o example -Iinclude -std=c89 -m32 example.c && ./example
Arch: x86 6.0.0
Platform: Linux 5.15.131
Compiler: Clang 17.0.6
C standard: C89
```

## Installation
Copy `include` contents to your project or any other header directory used by your compiler.

Alternatively: add this project as a git submodule.
```console
$ # if you save third-party libraries in vendor dir
$ mkdir -p vendor
$ git submodule add --name omdetect https://github.com/kuszaj/omdetect vendor/omdetect
$ cd vendor/omdetect && git checkout 0.1.0 && cd ../..
$ git add .gitmodules vendor/omdetect
```

## Usage
Simply include `omdetect.h` in your code to access all that omdetect provides. If you want more granularity, use header files from `omdetect` directory:

* `omdetect/arch.h` for CPU architecture info.
* `omdetect/cc.h` for compiler info.
* `omdetect/platform.h` for platform/OS info.
* `omdetect/std.h` for used/available standards info for C, C++, POSIX and X/Open. Note: C and C++ standards are mutually exclusive.
* `omdetect/version.h` for versioning macros. Already included with other header files.

omdetect attempts to detect above info based on various predefined preprocessor constants available to the compiler. It then assigns appropriate id and version (if applicable) to a handful of constants you can use in your code.

### Versioning
omdetect uses 2 macros (defined in `omdetect/version.h`) to encode detected versions in 32-bit unsigned integers:

* `OMD_VERSION(major, minor, patch)` - For `<major>.<minor>.<patch>` format. 
* `OMD_YMD_VERSION(YYYY, MM, DD)` - For `<YYYY><MM><DD>` date format.

Additionally, omdetect provides 2 constants denoting no version, used where versioning does not apply. Both resolve to `0`.
* `OMD_NO_VERSION` - same as `OMD_VERSION(0, 0, 0)`
* `OMD_NO_YMD_VERSION` - same as `OMD_YMD_VERSION(0, 1, 1)`

You can use provided version consts for more granular checks, e.g. if your project needs GCC [`fd_arg` feature](https://gcc.gnu.org/onlinedocs/gcc-13.1.0/gcc/Common-Function-Attributes.html#index-fd_005farg-function-attribute) (introduced in version 13):
```C
#if OMD_CC == OMD_CC_GCC && OMD_CC_VERSION >= OMD_VERSION(13, 0, 0)
    /* fd_arg specific code */
    ...
#endif
```

### Details

For more details, see [project docs](docs/index.md).

## Project layout
```
omdetect/
├── docs/                project doc
│   ├── arch.md          arch doc
│   ├── cc.md            compiler doc
│   ├── index.md         main doc file, start here
│   ├── platform.md      platform doc
│   ├── std.md           standards doc
│   └── version.md       versioning docs
├── example.c            example code (same as in this file)
├── include/             contains omdetect headers
│   ├── omdetect/
│   │   ├── arch.h       arch info
│   │   ├── cc.h         compiler info
│   │   ├── internal/    internal stuff, do not include directly
│   │   ├── platform.h   platform info
│   │   ├── std.h        available standards
│   │   └── version.h    version macros used by other headers and
│   │                    omdetect version const
│   └── omdetect.h       all-in-one include
├── LICENSE.txt          license
└── README.md            this file
```

## Acknowledgements

Many thanks to [cpredef/predef](https://github.com/cpredef/predef) project, providing great help with initial work for omdetect.
