# `omdetect/cc.h`
Provides constants regarding compiler used in build.

## TOC
* [`OMD_CC`](#omd_cc)
* [`OMD_CC_NAME`](#omd_cc_name)
* [`OMD_CC_VERSION`](#omd_cc_version)

## `OMD_CC`
Compiler id used in build. If detection fails, will be equal to `OMD_CC_UNKNOWN`.

### Values

Constant             | Value  | Name                    | Versioned
---------------------|--------|-------------------------|-----------
`OMD_CC_UNKNOWN`     | `0x00` | *Unknown*               | 
`OMD_CC_ACC`         | `0x01` | ACC                     | 
`OMD_CC_ACK`         | `0x02` | Amsterdam Compiler Kit  | 
`OMD_CC_APPLE_CLANG` | `0x03` | Apple Clang             | &#10004;
`OMD_CC_ARM`         | `0x04` | ARM Compiler            | &#10004;
`OMD_CC_AZTEC`       | `0x05` | Aztec C                 | &#10004;
`OMD_CC_BORLAND`     | `0x06` | Borland C++             | &#10004;
`OMD_CC_CC65`        | `0x07` | CC65                    | &#10004;
`OMD_CC_CLANG`       | `0x08` | Clang                   | &#10004;
`OMD_CC_COMEAU`      | `0x09` | Comeau C++              | &#10004;
`OMD_CC_COMPAQ`      | `0x0a` | Compaq                  | &#10004;
`OMD_CC_COMPCERT`    | `0x0b` | CompCert                | 
`OMD_CC_CONVEX`      | `0x0c` | Convex C                | 
`OMD_CC_CRAY`        | `0x0d` | Cray                    | &#10004;
`OMD_CC_CWARRIOR`    | `0x0e` | Metroworks CodeWarrior  | &#10004;
`OMD_CC_DIAB`        | `0x0f` | Diab                    | &#10004;
`OMD_CC_DICE`        | `0x10` | DICE                    | 
`OMD_CC_DIGNUS`      | `0x11` | Dignus Systems/C++      | &#10004;
`OMD_CC_DJGPP`       | `0x12` | DJGPP                   | &#10004;
`OMD_CC_DMC`         | `0x13` | Digital Mars            | &#10004;
`OMD_CC_EDG`         | `0x14` | EDG C++ Frontend        | &#10004;
`OMD_CC_EKOPATH`     | `0x15` | EKOPath                 | &#10004;
`OMD_CC_GCC`         | `0x16` | GCC                     | &#10004;
`OMD_CC_GHS`         | `0x17` | Green Hill              | &#10004;
`OMD_CC_HIGHC`       | `0x18` | MetaWare High           | 
`OMD_CC_HP_ACC`      | `0x19` | HP aC++                 | &#10004;
`OMD_CC_HP_ANSI`     | `0x1a` | HP ANSI C               | 
`OMD_CC_IAR`         | `0x1b` | IAR                     | &#10004;
`OMD_CC_IBM_XL`      | `0x1c` | IBM XL                  | &#10004;
`OMD_CC_IBMZ_XL`     | `0x1d` | IBM z/OS XL             | &#10004;
`OMD_CC_ICC`         | `0x1e` | ICC                     | &#10004;
`OMD_CC_IMAGECRAFT`  | `0x1f` | ImageCraft C            | 
`OMD_CC_KCC`         | `0x20` | KAI C++                 | &#10004;
`OMD_CC_KEIL_C166`   | `0x21` | Keil C166               | &#10004;
`OMD_CC_KEIL_C51`    | `0x22` | Keil C51                | &#10004;
`OMD_CC_KEIL_CARM`   | `0x23` | Keil CARM               | &#10004;
`OMD_CC_LCC`         | `0x24` | LCC                     | 
`OMD_CC_LLVM`        | `0x25` | LLVM                    | 
`OMD_CC_MCST`        | `0x26` | MCST LCC                | 
`OMD_CC_MINGW`       | `0x27` | MinGW                   | &#10004;
`OMD_CC_MINGW64`     | `0x28` | MinGW-w64               | &#10004;
`OMD_CC_MIPSPRO`     | `0x29` | MIPSpro                 | &#10004;
`OMD_CC_MPW`         | `0x2a` | MPW                     | &#10004;
`OMD_CC_MRI`         | `0x2b` | Microtec                | 
`OMD_CC_MSVC`        | `0x2c` | MSVC                    | &#10004;
`OMD_CC_NVCC`        | `0x2d` | NVCC                    | &#10004;
`OMD_CC_NWCC`        | `0x2e` | nwcc                    | 
`OMD_CC_OPEN64`      | `0x2f` | Open64                  | &#10004;
`OMD_CC_OPENSERVER`  | `0x30` | SCO OpenServer          | 
`OMD_CC_ORANGE`      | `0x31` | Orange C                | &#10004;
`OMD_CC_PALM`        | `0x32` | Palm                    | &#10004;
`OMD_CC_PGI`         | `0x33` | Portland Group Compiler | &#10004;
`OMD_CC_SDCC`        | `0x34` | SDCC                    | &#10004;
`OMD_CC_SNC`         | `0x35` | SN Compiler             | 
`OMD_CC_STRATUS_VOS` | `0x36` | Stratus VOS C           | 
`OMD_CC_SUNPRO`      | `0x37` | Oracle Solaris Studio   | &#10004;
`OMD_CC_TCC`         | `0x38` | TCC                     | &#10004;
`OMD_CC_TENDRA`      | `0x39` | TenDRA                  | 
`OMD_CC_THINK`       | `0x3a` | THINK C                 | &#10004;
`OMD_CC_TURBO`       | `0x3b` | Borland Turbo C         | 
`OMD_CC_WATCOM`      | `0x3c` | Watcom C++              | &#10004;
`OMD_CC_Z88DK`       | `0x3d` | Z88DK                   | 


## `OMD_CC_NAME`
Compiler name as string literal, chosen depending on `OMD_CC`.

### Values

Constant                  | Value
--------------------------|----------------------------
`OMD_CC_UNKNOWN_NAME`     | `"Unknown"`
`OMD_CC_ACC_NAME`         | `"ACC"`
`OMD_CC_ACK_NAME`         | `"Amsterdam Compiler Kit"`
`OMD_CC_APPLE_CLANG_NAME` | `"Apple Clang"`
`OMD_CC_ARM_NAME`         | `"ARM Compiler"`
`OMD_CC_AZTEC_NAME`       | `"Aztec C"`
`OMD_CC_BORLAND_NAME`     | `"Borland C++"`
`OMD_CC_CC65_NAME`        | `"CC65"`
`OMD_CC_CLANG_NAME`       | `"Clang"`
`OMD_CC_COMEAU_NAME`      | `"Comeau C++"`
`OMD_CC_COMPAQ_NAME`      | `"Compaq"`
`OMD_CC_COMPCERT_NAME`    | `"CompCert"`
`OMD_CC_CONVEX_NAME`      | `"Convex C"`
`OMD_CC_CRAY_NAME`        | `"Cray"`
`OMD_CC_CWARRIOR_NAME`    | `"Metroworks CodeWarrior"`
`OMD_CC_DIAB_NAME`        | `"Diab"`
`OMD_CC_DICE_NAME`        | `"DICE"`
`OMD_CC_DMC_NAME`         | `"Digital Mars"`
`OMD_CC_DIGNUS_NAME`      | `"Dignus Systems/C++"`
`OMD_CC_DJGPP_NAME`       | `"DJGPP"`
`OMD_CC_EDG_NAME`         | `"EDG C++ Frontend"`
`OMD_CC_EKOPATH_NAME`     | `"EKOPath"`
`OMD_CC_GCC_NAME`         | `"GCC"`
`OMD_CC_GHS_NAME`         | `"Green Hill"`
`OMD_CC_HIGHC_NAME`       | `"MetaWare High"`
`OMD_CC_HP_ACC_NAME`      | `"HP aC++"`
`OMD_CC_HP_ANSI_NAME`     | `"HP ANSI C"`
`OMD_CC_IAR_NAME`         | `"IAR"`
`OMD_CC_IBM_XL_NAME`      | `"IBM XL"`
`OMD_CC_IBMZ_XL_NAME`     | `"IBM z/OS XL"`
`OMD_CC_ICC_NAME`         | `"ICC"`
`OMD_CC_IMAGECRAFT_NAME`  | `"ImageCraft C"`
`OMD_CC_KCC_NAME`         | `"KAI C++"`
`OMD_CC_KEIL_C166_NAME`   | `"Keil C166"`
`OMD_CC_KEIL_C51_NAME`    | `"Keil C51"`
`OMD_CC_KEIL_CARM_NAME`   | `"Keil CARM"`
`OMD_CC_LCC_NAME`         | `"LCC"`
`OMD_CC_LLVM_NAME`        | `"LLVM"`
`OMD_CC_MCST_NAME`        | `"MCST LCC"`
`OMD_CC_MINGW_NAME`       | `"MinGW"`
`OMD_CC_MINGW64_NAME`     | `"MinGW-w64"`
`OMD_CC_MIPSPRO_NAME`     | `"MIPSpro"`
`OMD_CC_MPW_NAME`         | `"MPW"`
`OMD_CC_MRI_NAME`         | `"Microtec"`
`OMD_CC_MSVC_NAME`        | `"MSVC"`
`OMD_CC_NVCC_NAME`        | `"NVCC"`
`OMD_CC_NWCC_NAME`        | `"nwcc"`
`OMD_CC_OPEN64_NAME`      | `"Open64"`
`OMD_CC_OPENSERVER_NAME`  | `"SCO OpenServer"`
`OMD_CC_ORANGE_NAME`      | `"Orange C"`
`OMD_CC_PALM_NAME`        | `"Palm"`
`OMD_CC_PGI_NAME`         | `"Portland Group Compiler"`
`OMD_CC_SDCC_NAME`        | `"SDCC"`
`OMD_CC_SNC_NAME`         | `"SN Compiler"`
`OMD_CC_STRATUS_VOS_NAME` | `"Stratus VOS C"`
`OMD_CC_SUNPRO_NAME`      | `"Oracle Solaris Studio"`
`OMD_CC_TCC_NAME`         | `"TCC"`
`OMD_CC_TENDRA_NAME`      | `"TenDRA"`
`OMD_CC_THINK_NAME`       | `"THINK C"`
`OMD_CC_TURBO_NAME`       | `"Borland Turbo C"`
`OMD_CC_WATCOM_NAME`      | `"Watcom C++"`
`OMD_CC_Z88DK_NAME`       | `"Z88DK"`

## `OMD_CC_VERSION`
Compiler version, chosen depending on `OMD_CC`.

Encoded using `OMD_VERSION`. If not detected / not applicable, set to `OMD_NO_VERSION`.

Related constants:
* `OMD_CC_MAJOR` - same as `OMD_VERSION_MAJOR(OMD_CC_VERSION)`
* `OMD_CC_MINOR` - same as `OMD_VERSION_MINOR(OMD_CC_VERSION)`
* `OMD_CC_PATCH` - same as `OMD_VERSION_PATCH(OMD_CC_VERSION)`
