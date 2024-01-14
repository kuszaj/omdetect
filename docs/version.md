# `omdetect/version.h`
Provides constants and macros for encoding/decoding versions.

## TOC
* [`__OMD_VERSION__`](#__omd_version__)
* [Version macros](#version-macros)
    * [`OMD_VERSION`](#omd_version)
    * [`OMD_YMD_VERSION`](#omd_ymd_version)
* [No-version constants](#no-version-constants)

## `__OMD_VERSION__`
Defines this library version.

Encoded with `OMD_VERSION` macro.

#### Related

* `__OMD_VERSION_MAJOR__` - same as `OMD_VERSION_MAJOR(__OMD_VERSION__)`
* `__OMD_VERSION_MINOR__` - same as `OMD_VERSION_MINOR(__OMD_VERSION__)`
* `__OMD_VERSION_PATCH__` - same as `OMD_VERSION_PATCH(__OMD_VERSION__)`

## Version macros

### `OMD_VERSION`

Encodes `<major>.<minor>.<patch>` version format to 32-bit unsigned integer.

#### Parameters
`major`\
Major version.\
Allowed values: `0-255` (8 bits).

`minor`\
Minor version.\
Allowed values: `0-1023` (10 bits).

`patch`\
Patch version.\
Allowed values: `0-16383` (14 bits).

#### Remarks
If any of `major`, `minor` or `patch` if larger than allowed, value overflows to fit available space.

#### Related
* `OMD_VERSION_MAJOR(version)` - extracts `major` for encoded `version`.
* `OMD_VERSION_MINOR(version)` - extracts `minor` for encoded `version`.
* `OMD_VERSION_PATCH(version)` - extracts `patch` for encoded `version`.

#### Example
```C
#include <omdetect/version.h>
#include <stdio.h>

int main(void) {
    printf("2.3.4 -> %u\n", OMD_VERSION(2, 3, 4));
    return 0;
}
```
```
2.1.3 -> 33603588
```

### `OMD_YMD_VERSION`

Encodes date version format to 32-bit unsigned integer.

#### Parameters
`year`\
Year.\
Allowed values: `0-8388607` (23 bits).

`month`\
Month.\
Allowed values: `1-12` (4 bits).

`day`\
Day.\
Allowed values: `1-31` (5 bits).

#### Remarks
If any of `year`, `month` or `day` if larger than allowed, value overflows to fit available space.

#### Related
* `OMD_YM_VERSION(year, month)` - shorthand for `OMD_YMD_VERSION(year, month, 1)`.
* `OMD_VERSION_YEAR(version)` - extracts `year` for encoded `version`.
* `OMD_VERSION_MONTH(version)` - extracts `month` for encoded `version`.
* `OMD_VERSION_DAY(version)` - extracts `day` for encoded `version`.

#### Example
```C
#include <omdetect/version.h>
#include <stdio.h>

int main(void) {
    printf("2023-01-14 -> %u\n", OMD_YMD_VERSION(2023, 1, 14));
    return 0;
}
```
```
2023-01-14 -> 1035789
```

## No-version constants

`OMD_NO_VERSION`\
Denotes no version. Used for assigning values when version not detected/applicable.
Equivalent to `OMD_VERSION(0, 0, 0)` or `0`.

`OMD_NO_YMD_VERSION`\
Denotes no date version. Used for assigning values when date version not detected/applicable.
Equivalent to `OMD_YMD_VERSION(0, 1, 1)` or `0`.
