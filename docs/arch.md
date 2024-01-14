# `omdetect/arch.h`
Provides constants regarding target CPU architecture.

## TOC
* [`OMD_ARCH`](#omd_arch)
* [`OMD_ARCH_NAME`](#omd_arch_name)
* [`OMD_ARCH_VERSION`](#omd_arch_version)

## `OMD_ARCH`
CPU architecture id for target platform. If detection fails, will be equal to `OMD_ARCH_UNKNOWN`.

### Values

Constant             | Value  | Name              | Versioned
---------------------|--------|-------------------|-----------
`OMD_ARCH_UNKNOWN`   | `0x00` | *Unknown*         | 
`OMD_ARCH_AARCH64`   | `0x01` | AArch64           | &#10004;
`OMD_ARCH_ALPHA`     | `0x02` | Alpha             | &#10004;
`OMD_ARCH_AMD64`     | `0x03` | AMD64             | 
`OMD_ARCH_ARM`       | `0x04` | ARM               | &#10004;
`OMD_ARCH_BLACKFIN`  | `0x05` | Blackfin          | &#10004;
`OMD_ARCH_CONVEX`    | `0x06` | Convex            | &#10004;
`OMD_ARCH_E2K`       | `0x07` | E2K               | &#10004;
`OMD_ARCH_EPIPHANY`  | `0x08` | Adapteva Epiphany | 
`OMD_ARCH_IA64`      | `0x09` | Intel Itanium     | 
`OMD_ARCH_LOONGARCH` | `0x0a` | LoongArch         | 
`OMD_ARCH_M68K`      | `0x0b` | Motorola 68k      | &#10004;
`OMD_ARCH_MIPS`      | `0x0c` | MIPS              | &#10004;
`OMD_ARCH_PA_RISC`   | `0x0d` | PA-RISC           | &#10004;
`OMD_ARCH_PPC`       | `0x0e` | PowerPC           | &#10004;
`OMD_ARCH_PPC64`     | `0x0f` | PowerPC (64 bit)  | &#10004;
`OMD_ARCH_PTX`       | `0x10` | PTX               | &#10004;
`OMD_ARCH_PYRAMID`   | `0x11` | Pyramid 9810      | 
`OMD_ARCH_RISCV`     | `0x12` | RISC-V            | 
`OMD_ARCH_RS6000`    | `0x13` | RS/6000           | &#10004;
`OMD_ARCH_SPARC`     | `0x14` | SPARC             | &#10004;
`OMD_ARCH_SUPERH`    | `0x15` | SuperH            | &#10004;
`OMD_ARCH_S370`      | `0x16` | System/370        | 
`OMD_ARCH_S390`      | `0x17` | System/390        | 
`OMD_ARCH_X80`       | `0x18` | Intel 8080        | 
`OMD_ARCH_X86`       | `0x19` | x86               | &#10004;
`OMD_ARCH_Z`         | `0x1a` | z/Architecture    | 

Aliases:

Constant          | Aliasing
------------------|--------------------
`OMD_ARCH_ARM64`  | `OMD_ARCH_AARCH64`
`OMD_ARCH_X86_64` | `OMD_ARCH_AMD64`


## `OMD_ARCH_NAME`
CPU architecture name as string literal, chosen depending on `OMD_ARCH`.

### Values

Constant                  | Value
--------------------------|----------------------
`OMD_ARCH_UNKNOWN_NAME`   | `"Unknown"`
`OMD_ARCH_AARCH64_NAME`   | `"AArch64"`
`OMD_ARCH_AMD64_NAME`     | `"AMD64"`
`OMD_ARCH_ALPHA_NAME`     | `"Alpha"`
`OMD_ARCH_ARM_NAME`       | `"ARM"`
`OMD_ARCH_BLACKFIN_NAME`  | `"Blackfin"`
`OMD_ARCH_CONVEX_NAME`    | `"Convex"`
`OMD_ARCH_E2K_NAME`       | `"E2K"`
`OMD_ARCH_EPIPHANY_NAME`  | `"Adapteva Epiphany"`
`OMD_ARCH_IA64_NAME`      | `"Intel Itanium"`
`OMD_ARCH_LOONGARCH_NAME` | `"LoongArch"`
`OMD_ARCH_M68K_NAME`      | `"Motorola 68k"`
`OMD_ARCH_MIPS_NAME`      | `"MIPS"`
`OMD_ARCH_PA_RISC_NAME`   | `"PA-RISC"`
`OMD_ARCH_PPC_NAME`       | `"PowerPC"`
`OMD_ARCH_PPC64_NAME`     | `"PowerPC (64 bit)"`
`OMD_ARCH_PTX_NAME`       | `"PTX"`
`OMD_ARCH_PYRAMID_NAME`   | `"Pyramid 9810"`
`OMD_ARCH_RISCV_NAME`     | `"RISC-V"`
`OMD_ARCH_RS6000_NAME`    | `"RS/6000"`
`OMD_ARCH_SPARC_NAME`     | `"SPARC"`
`OMD_ARCH_SUPERH_NAME`    | `"SuperH"`
`OMD_ARCH_S370_NAME`      | `"System/370"`
`OMD_ARCH_S390_NAME`      | `"System/390"`
`OMD_ARCH_X80_NAME`       | `"Intel 8080"`
`OMD_ARCH_X86_NAME`       | `"x86"`
`OMD_ARCH_Z_NAME`         | `"z/Architecture"`

Aliases:

Constant               | Aliasing
-----------------------|-------------------------
`OMD_ARCH_ARM64_NAME`  | `OMD_ARCH_AARCH64_NAME`
`OMD_ARCH_X86_64_NAME` | `OMD_ARCH_AMD64_NAME`

## `OMD_ARCH_VERSION`
CPU architecture version, chosen depending on `OMD_ARCH`.

Encoded using `OMD_VERSION`. If not detected / not applicable, set to `OMD_NO_VERSION`.

Related constants:
* `OMD_ARCH_MAJOR` - same as `OMD_VERSION_MAJOR(OMD_ARCH_VERSION)`
* `OMD_ARCH_MINOR` - same as `OMD_VERSION_MINOR(OMD_ARCH_VERSION)`
* `OMD_ARCH_PATCH` - same as `OMD_VERSION_PATCH(OMD_ARCH_VERSION)`
