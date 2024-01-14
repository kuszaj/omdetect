# `omdetect/std.h`
Provides constants regarding used / available language standards.

## TOC
* [`OMD_STD_C_VERSION`](#omd_std_c_version)
* [`OMD_STD_C_NAME`](#omd_std_c_name)
* [`OMD_STD_CPP_VERSION`](#omd_std_cpp_version)
* [`OMD_STD_CPP_NAME`](#omd_std_cpp_name)
* [`OMD_STD_CPP_CLI_VERSION`](#omd_std_cpp_cli_version)
* [`OMD_STD_ECPP_VERSION`](#omd_std_ecpp_version)
* [`OMD_STD_POSIX_VERSION`](#omd_std_posix_version)
* [`OMD_STD_POSIX_NAME`](#omd_std_posix_name)
* [`OMD_STD_WINAPI_VERSION`](#omd_std_winapi_version)
* [`OMD_STD_XOPEN_VERSION`](#omd_std_xopen_version)
* [`OMD_STD_XOPEN_NAME`](#omd_std_xopen_name)


## `OMD_STD_C_VERSION`
Used C standard version. If detection fails, will be equal to `OMD_NO_YMD_VERSION`.

Note: This constant is mutually exclusive with `OMD_STD_CPP_VERSION`, `OMD_STD_CPP_CLI_VERSION` and `OMD_STD_ECPP_VERSION`. If either is detected, `OMD_STD_C_VERSION` will be set to `OMD_NO_YMD_VERSION`.

### Values

Constant             | Value  
---------------------|----------------------------
`OMD_NO_YMD_VERSION` | `OMD_YM_VERSION(0, 1)`
`OMD_STD_C89`        | `OMD_YM_VERSION(1989, 1)`
`OMD_STD_C90`        | `OMD_YM_VERSION(1990, 1)`
`OMD_STD_C94`        | `OMD_YM_VERSION(1994, 9)`
`OMD_STD_C99`        | `OMD_YM_VERSION(1999, 1)`
`OMD_STD_C11`        | `OMD_YM_VERSION(2011, 12)`
`OMD_STD_C17`        | `OMD_YM_VERSION(2017, 10)`
`OMD_STD_C23`        | `OMD_YM_VERSION(2023, 11)`

Aliases:

Constant         | Aliasing
-----------------|---------------
`OMD_STD_ANSI_C` | `OMD_STD_C89`
`OMD_STD_ISO_C`  | `OMD_STD_C90`


## `OMD_STD_C_NAME`
Used C standard version name as string literal, chosen depending on `OMD_STD_C_VERSION`.

### Values

Constant            | Value
--------------------|---------
`OMD_STD_NONE_NAME` | `""`
`OMD_STD_C89_NAME`  | `"C89"`
`OMD_STD_C90_NAME`  | `"C90"`
`OMD_STD_C94_NAME`  | `"C94"`
`OMD_STD_C99_NAME`  | `"C99"`
`OMD_STD_C11_NAME`  | `"C11"`
`OMD_STD_C17_NAME`  | `"C17"`
`OMD_STD_C23_NAME`  | `"C23"`

Aliases:

Constant              | Aliasing
----------------------|--------------------
`OMD_STD_ANSI_C_NAME` | `OMD_STD_C89_NAME`
`OMD_STD_ISO_C_NAME`  | `OMD_STD_C90_NAME`


## `OMD_STD_CPP_VERSION`
Used C++ standard version. If detection fails, will be equal to `OMD_NO_YMD_VERSION`.

### Values

Constant             | Value  
---------------------|----------------------------
`OMD_NO_YMD_VERSION` | `OMD_YM_VERSION(0, 1)`
`OMD_STD_CPP98`      | `OMD_YM_VERSION(1997, 11)`
`OMD_STD_CPP11`      | `OMD_YM_VERSION(2011, 3)`
`OMD_STD_CPP14`      | `OMD_YM_VERSION(2014, 2)`
`OMD_STD_CPP17`      | `OMD_YM_VERSION(2017, 3)`
`OMD_STD_CPP20`      | `OMD_YM_VERSION(2020, 2)`
`OMD_STD_CPP23`      | `OMD_YM_VERSION(2023, 2)`

Aliases:

Constant        | Aliasing
----------------|-----------------
`OMD_STD_CPP0X` | `OMD_STD_CPP11`
`OMD_STD_CPP1Y` | `OMD_STD_CPP14`
`OMD_STD_CPP1Z` | `OMD_STD_CPP17`
`OMD_STD_CPP2A` | `OMD_STD_CPP20`


## `OMD_STD_CPP_NAME`
Used C++ standard version name as string literal, chosen depending on `OMD_STD_CPP_VERSION`.

### Values

Constant             | Value
---------------------|-----------
`OMD_STD_NONE_NAME`  | `""`
`OMD_STD_CPP98_NAME` | `"C++98"`
`OMD_STD_CPP11_NAME` | `"C++11"`
`OMD_STD_CPP14_NAME` | `"C++14"`
`OMD_STD_CPP17_NAME` | `"C++17"`
`OMD_STD_CPP20_NAME` | `"C++20"`
`OMD_STD_CPP23_NAME` | `"C++23"`

Aliases:

Constant             | Aliasing
---------------------|-----------------
`OMD_STD_CPP0X_NAME` | `OMD_STD_CPP11_NAME`
`OMD_STD_CPP1Y_NAME` | `OMD_STD_CPP14_NAME`
`OMD_STD_CPP1Z_NAME` | `OMD_STD_CPP17_NAME`
`OMD_STD_CPP2A_NAME` | `OMD_STD_CPP20_NAME`


## `OMD_STD_CPP_CLI_VERSION`
Available C++/CLI standard. If detection fails, will be equal to `OMD_NO_YMD_VERSION`. Otherwise, it's extracted directly from `__cplusplus_cli` constant as date version.


## `OMD_STD_ECPP_VERSION`
Available embedded C++ standard. If detection fails, will be equal to `OMD_NO_VERSION`. Otherwise, it's set to `OMD_VERSION(1, 0, 0)`.


## `OMD_STD_POSIX_VERSION`
Available POSIX standard. If detection fails, will be equal to `OMD_NO_YMD_VERSION`.

### Values

Constant                | Value  
------------------------|----------------------------
`OMD_NO_YMD_VERSION`    | `OMD_YM_VERSION(0, 1)`
`OMD_STD_POSIX_1_1988`  | `OMD_YM_VERSION(1988, 8)`
`OMD_STD_POSIX_1_1990`  | `OMD_YM_VERSION(1990, 9)`
`OMD_STD_POSIX_1B_1993` | `OMD_YM_VERSION(1993, 9)`
`OMD_STD_POSIX_1C_1995` | `OMD_YM_VERSION(1995, 6)`
`OMD_STD_POSIX_1_2001`  | `OMD_YM_VERSION(2001, 12)`
`OMD_STD_POSIX_1_2008`  | `OMD_YM_VERSION(2008, 9)`


## `OMD_STD_POSIX_NAME`
Available POSIX standard name as string literal, chosen depending on `OMD_STD_POSIX_VERSION`.

### Values

Constant                     | Value
-----------------------------|-------------------
`OMD_STD_NONE_NAME`          | `""`
`OMD_STD_POSIX_1_1988_NAME`  | `"POSIX.1-1988"`
`OMD_STD_POSIX_1_1990_NAME`  | `"POSIX.1-1990"`
`OMD_STD_POSIX_1B_1993_NAME` | `"POSIX.1b-1993"`
`OMD_STD_POSIX_1C_1995_NAME` | `"POSIX.1c-1995"`
`OMD_STD_POSIX_1_2001_NAME`  | `"POSIX.1-2001"`
`OMD_STD_POSIX_1_2008_NAME`  | `"POSIX.1-2008"`


## `OMD_STD_WINAPI_VERSION`
Available WinAPI. If detection fails, will be equal to `OMD_NO_VERSION`. Otherwise, it's set to `OMD_VERSION(1, 0, 0)`.


## `OMD_STD_XOPEN_VERSION`
Available X/Open standard. If detection fails, will be equal to `OMD_NO_YMD_VERSION`.

### Values

Constant             | Value  
---------------------|----------------------------
`OMD_NO_YMD_VERSION` | `OMD_YM_VERSION(0, 1)`
`OMD_STD_XOPEN_XPG3` | `OMD_VERSION(3, 0, 0)`
`OMD_STD_XOPEN_XPG4` | `OMD_VERSION(4, 0, 0)`
`OMD_STD_XOPEN_SUS1` | `OMD_VERSION(4, 1, 0)`
`OMD_STD_XOPEN_SUS2` | `OMD_VERSION(5, 0, 0)`
`OMD_STD_XOPEN_SUS3` | `OMD_VERSION(6, 0, 0)`
`OMD_STD_XOPEN_SUS4` | `OMD_VERSION(7, 0, 0)`


## `OMD_STD_XOPEN_NAME`
Available X/Open standard name as string literal, chosen depending on `OMD_STD_XOPEN_VERSION`.

### Values

Constant                  | Value
--------------------------|-------------------
`OMD_STD_NONE_NAME`       | `""`
`OMD_STD_XOPEN_XPG3_NAME` | `"X/Open XPG3"`
`OMD_STD_XOPEN_XPG4_NAME` | `"X/Open XPG4"`
`OMD_STD_XOPEN_SUS1_NAME` | `"X/Open SUSv1"`
`OMD_STD_XOPEN_SUS2_NAME` | `"X/Open SUSv2"`
`OMD_STD_XOPEN_SUS3_NAME` | `"X/Open SUSv3"`
`OMD_STD_XOPEN_SUS4_NAME` | `"X/Open SUSv4"`
