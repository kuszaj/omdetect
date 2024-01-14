# `omdetect/platform.h`
Provides constants regarding target platform / OS.

## TOC
* [`OMD_PLATFORM`](#omd_platform)
* [`OMD_PLATFORM_NAME`](#omd_platform_name)
* [`OMD_PLATFORM_VERSION`](#omd_platform_version)

## `OMD_PLATFORM`
Target platform / OS id. If detection fails, will be equal to `OMD_PLATFORM_UNKNOWN`.

### Values

Constant                        | Value  | Name                 | Versioned
--------------------------------|--------|----------------------|-----------
`OMD_PLATFORM_UNKNOWN`          | `0x00` | *Unknown*            | 
`OMD_PLATFORM_AIX`              | `0x01` | IBM AIX              | &#10004;
`OMD_PLATFORM_AMDAHL_UTS`       | `0x02` | Amdahl UTS           | 
`OMD_PLATFORM_AMIGA`            | `0x03` | AmigaOS              | 
`OMD_PLATFORM_ANDROID`          | `0x04` | Android              | &#10004;
`OMD_PLATFORM_APOLLO_AEGIS`     | `0x05` | Apollo AEGIS         | 
`OMD_PLATFORM_APOLLO_DOMAIN_OS` | `0x06` | Apollo Domain/OS     | 
`OMD_PLATFORM_AROS`             | `0x07` | AROS                 | 
`OMD_PLATFORM_BEOS`             | `0x08` | BeOS                 | &#10004;
`OMD_PLATFORM_BLUE_GENE_L`      | `0x09` | IBM Blue Gene/L      | 
`OMD_PLATFORM_BLUE_GENE_P`      | `0x0a` | IBM Blue Gene/P      | 
`OMD_PLATFORM_BLUE_GENE_Q`      | `0x0b` | IBM Blue Gene/Q      | 
`OMD_PLATFORM_BSD`              | `0x0c` | BSD                  | &#10004;
`OMD_PLATFORM_BSDI`             | `0x0d` | BSDi                 | 
`OMD_PLATFORM_CONVEX`           | `0x0e` | ConvexOS             | 
`OMD_PLATFORM_CPM`              | `0x0f` | CP/M                 | 
`OMD_PLATFORM_CYGWIN`           | `0x10` | Cygwin               | &#10004;
`OMD_PLATFORM_DC_OSX`           | `0x11` | Pyramid DC/OSx       | 
`OMD_PLATFORM_DG_UX`            | `0x12` | DG/UX                | 
`OMD_PLATFORM_DRAGONFLY`        | `0x13` | DragonFly BSD        | &#10004;
`OMD_PLATFORM_DYNIX_PTX`        | `0x14` | DYNIX/ptx            | 
`OMD_PLATFORM_ECOS`             | `0x15` | eCos                 | 
`OMD_PLATFORM_EMX`              | `0x16` | EMX                  | 
`OMD_PLATFORM_EMSCRIPTEN`       | `0x17` | Emscripten           | &#10004;
`OMD_PLATFORM_FREEBSD`          | `0x18` | FreeBSD              | &#10004;
`OMD_PLATFORM_FUCHSIA`          | `0x19` | Fuchsia              | &#10004;
`OMD_PLATFORM_GNU_HURD`         | `0x1a` | GNU/Hurd             | 
`OMD_PLATFORM_HAIKU`            | `0x1b` | Haiku                | &#10004;
`OMD_PLATFORM_HI_UX_MPP`        | `0x1c` | HI-UX MPP            | 
`OMD_PLATFORM_HP_UX`            | `0x1d` | HP-UX                | 
`OMD_PLATFORM_ILLUMOS`          | `0x1e` | illumos              | 
`OMD_PLATFORM_INTEGRITY`        | `0x1f` | INTEGRITY            | 
`OMD_PLATFORM_INTERIX`          | `0x20` | Interix              | 
`OMD_PLATFORM_IOS`              | `0x21` | iOS                  | &#10004;
`OMD_PLATFORM_IOS_SIMULATOR`    | `0x22` | iOS simulator        | &#10004;
`OMD_PLATFORM_IRIX`             | `0x23` | IRIX                 | 
`OMD_PLATFORM_LINUX`            | `0x24` | Linux                | &#10004;
`OMD_PLATFORM_LYNX`             | `0x25` | LynxOS               | 
`OMD_PLATFORM_MACOS`            | `0x26` | macOS                | &#10004;
`OMD_PLATFORM_MINIX`            | `0x27` | MINIX                | 
`OMD_PLATFORM_MINT`             | `0x28` | MiNT                 | 
`OMD_PLATFORM_MORPHOS`          | `0x29` | MorphOS              | 
`OMD_PLATFORM_MPE_IX`           | `0x2a` | MPE/iX               | 
`OMD_PLATFORM_MSDOS`            | `0x2b` | MSDOS                | 
`OMD_PLATFORM_MSX`              | `0x2c` | MSX                  | 
`OMD_PLATFORM_NACL`             | `0x2d` | Google Native Client | 
`OMD_PLATFORM_NETBSD`           | `0x2e` | NetBSD               | &#10004;
`OMD_PLATFORM_NEXTSTEP`         | `0x2f` | NeXTSTEP             | 
`OMD_PLATFORM_NONSTOP`          | `0x30` | Tandem NonStop       | 
`OMD_PLATFORM_NUCLEUS_RTOS`     | `0x31` | Nucleus RTOS         | 
`OMD_PLATFORM_OPENBSD`          | `0x32` | OpenBSD              | &#10004;
`OMD_PLATFORM_OPENSERVER`       | `0x33` | SCO OpenServer       | 
`OMD_PLATFORM_OS2`              | `0x34` | OS/2                 | 
`OMD_PLATFORM_OS400`            | `0x35` | IBM OS/400           | &#10004;
`OMD_PLATFORM_OS9`              | `0x36` | Microware OS-9       | 
`OMD_PLATFORM_PALMOS`           | `0x37` | Palm OS              | 
`OMD_PLATFORM_PLAN9`            | `0x38` | Plan 9               | 
`OMD_PLATFORM_QNX`              | `0x39` | QNX                  | &#10004;
`OMD_PLATFORM_REACTOS`          | `0x3a` | ReactOS              | 
`OMD_PLATFORM_SERENITY`         | `0x3b` | SerenityOS           | 
`OMD_PLATFORM_SINUX`            | `0x3c` | SINUX                | 
`OMD_PLATFORM_SOLARIS`          | `0x3d` | Solaris              | &#10004;
`OMD_PLATFORM_STRATUS_VOS`      | `0x3e` | Stratus VOS          | 
`OMD_PLATFORM_SUNOS`            | `0x3f` | SunOS                | 
`OMD_PLATFORM_SYLLABLE`         | `0x40` | Syllable             | 
`OMD_PLATFORM_SYMBIAN`          | `0x41` | Symbian OS           | 
`OMD_PLATFORM_TRU64`            | `0x42` | Tru64 (OSF/1)        | 
`OMD_PLATFORM_ULTRIX`           | `0x43` | Ultrix               | 
`OMD_PLATFORM_UNICOS`           | `0x44` | UNICOS               | &#10004;
`OMD_PLATFORM_UNICOS_MP`        | `0x45` | UNICOS/mp            | 
`OMD_PLATFORM_UNIX`             | `0x46` | UNIX                 | 
`OMD_PLATFORM_UNIXWARE`         | `0x47` | UnixWare             | 
`OMD_PLATFORM_UWIN`             | `0x48` | U/Win                | 
`OMD_PLATFORM_VMS`              | `0x49` | VMS                  | &#10004;
`OMD_PLATFORM_VXWORKS`          | `0x4a` | VxWorks              | &#10004;
`OMD_PLATFORM_WINDOWS`          | `0x4b` | Windows              | 
`OMD_PLATFORM_WINDOWS_CE`       | `0x4c` | Windows CE           | &#10004;
`OMD_PLATFORM_WINDU`            | `0x4d` | Wind/U               | &#10004;
`OMD_PLATFORM_ZOS`              | `0x4e` | z/OS                 | 


## `OMD_PLATFORM_NAME`
Target platform / OS name as string literal, chosen depending on `OMD_PLATFORM`.

### Values

Constant                             | Value
-------------------------------------|---------------------------
`OMD_PLATFORM_UNKNOWN_NAME`          | `"Unknown"`
`OMD_PLATFORM_AIX_NAME`              | `"IBM AIX"`
`OMD_PLATFORM_AMDAHL_UTS_NAME`       | `"Amdahl UTS"`
`OMD_PLATFORM_AMIGA_NAME`            | `"AmigaOS"`
`OMD_PLATFORM_ANDROID_NAME`          | `"Android"`
`OMD_PLATFORM_APOLLO_AEGIS_NAME`     | `"Apollo AEGIS"`
`OMD_PLATFORM_APOLLO_DOMAIN_OS_NAME` | `"Apollo Domain/OS"`
`OMD_PLATFORM_AROS_NAME`             | `"AROS"`
`OMD_PLATFORM_BEOS_NAME`             | `"BeOS"`
`OMD_PLATFORM_BLUE_GENE_L_NAME`      | `"IBM Blue Gene/L"`
`OMD_PLATFORM_BLUE_GENE_P_NAME`      | `"IBM Blue Gene/P"`
`OMD_PLATFORM_BLUE_GENE_Q_NAME`      | `"IBM Blue Gene/Q"`
`OMD_PLATFORM_BSD_NAME`              | `"BSD"`
`OMD_PLATFORM_BSDI_NAME`             | `"BSDi"`
`OMD_PLATFORM_CONVEX_NAME`           | `"ConvexOS"`
`OMD_PLATFORM_CPM_NAME`              | `"CP/M"`
`OMD_PLATFORM_CYGWIN_NAME`           | `"Cygwin"`
`OMD_PLATFORM_DC_OSX_NAME`           | `"Pyramid DC/OSx"`
`OMD_PLATFORM_DG_UX_NAME`            | `"DG/UX"`
`OMD_PLATFORM_DRAGONFLY_NAME`        | `"DragonFly BSD"`
`OMD_PLATFORM_DYNIX_PTX_NAME`        | `"DYNIX/ptx"`
`OMD_PLATFORM_ECOS_NAME`             | `"eCos"`
`OMD_PLATFORM_EMX_NAME`              | `"EMX"`
`OMD_PLATFORM_EMSCRIPTEN_NAME`       | `"Emscripten"`
`OMD_PLATFORM_FREEBSD_NAME`          | `"FreeBSD"`
`OMD_PLATFORM_FUCHSIA_NAME`          | `"Fuchsia"`
`OMD_PLATFORM_GNU_HURD_NAME`         | `"GNU/Hurd"`
`OMD_PLATFORM_HAIKU_NAME`            | `"Haiku"`
`OMD_PLATFORM_HP_UX_NAME`            | `"HP-UX"`
`OMD_PLATFORM_HI_UX_MPP_NAME`        | `"HI-UX MPP"`
`OMD_PLATFORM_ILLUMOS_NAME`          | `"illumos"`
`OMD_PLATFORM_INTEGRITY_NAME`        | `"INTEGRITY"`
`OMD_PLATFORM_INTERIX_NAME`          | `"Interix"`
`OMD_PLATFORM_IOS_NAME`              | `"iOS"`
`OMD_PLATFORM_IOS_SIMULATOR_NAME`    | `"iOS (simulator)"`
`OMD_PLATFORM_IRIX_NAME`             | `"IRIX"`
`OMD_PLATFORM_LINUX_NAME`            | `"Linux"`
`OMD_PLATFORM_LYNX_NAME`             | `"LynxOS"`
`OMD_PLATFORM_MACOS_NAME`            | `"macOS"`
`OMD_PLATFORM_MINIX_NAME`            | `"MINIX"`
`OMD_PLATFORM_MINT_NAME`             | `"MiNT"`
`OMD_PLATFORM_MORPHOS_NAME`          | `"MorphOS"`
`OMD_PLATFORM_MPE_IX_NAME`           | `"MPE/iX"`
`OMD_PLATFORM_MSDOS_NAME`            | `"MSDOS"`
`OMD_PLATFORM_MSX_NAME`              | `"MSX"`
`OMD_PLATFORM_NACL_NAME`             | `"Google Native Client"`
`OMD_PLATFORM_NETBSD_NAME`           | `"NetBSD"`
`OMD_PLATFORM_NEXTSTEP_NAME`         | `"NeXTSTEP"`
`OMD_PLATFORM_NONSTOP_NAME`          | `"Tandem NonStop"`
`OMD_PLATFORM_NUCLEUS_RTOS_NAME`     | `"Nucleus RTOS"`
`OMD_PLATFORM_OPENBSD_NAME`          | `"OpenBSD"`
`OMD_PLATFORM_OPENSERVER_NAME`       | `"SCO OpenServer"`
`OMD_PLATFORM_OS2_NAME`              | `"OS/2"`
`OMD_PLATFORM_OS400_NAME`            | `"IBM OS/400"`
`OMD_PLATFORM_OS9_NAME`              | `"Microware OS-9"`
`OMD_PLATFORM_PALMOS_NAME`           | `"Palm OS"`
`OMD_PLATFORM_PLAN9_NAME`            | `"Plan 9"`
`OMD_PLATFORM_QNX_NAME`              | `"QNX"`
`OMD_PLATFORM_REACTOS_NAME`          | `"ReactOS"`
`OMD_PLATFORM_SERENITY_NAME`         | `"SerenityOS"`
`OMD_PLATFORM_SINUX_NAME`            | `"SINUX"`
`OMD_PLATFORM_SOLARIS_NAME`          | `"Solaris"`
`OMD_PLATFORM_STRATUS_VOS_NAME`      | `"Stratus VOS"`
`OMD_PLATFORM_SUNOS_NAME`            | `"SunOS"`
`OMD_PLATFORM_SYLLABLE_NAME`         | `"Syllable"`
`OMD_PLATFORM_SYMBIAN_NAME`          | `"Symbian OS"`
`OMD_PLATFORM_TRU64_NAME`            | `"Tru64 (OSF/1)"`
`OMD_PLATFORM_ULTRIX_NAME`           | `"Ultrix"`
`OMD_PLATFORM_UNICOS_NAME`           | `"UNICOS"`
`OMD_PLATFORM_UNICOS_MP_NAME`        | `"UNICOS/mp"`
`OMD_PLATFORM_UNIX_NAME`             | `"UNIX"`
`OMD_PLATFORM_UNIXWARE_NAME`         | `"UnixWare"`
`OMD_PLATFORM_UWIN_NAME`             | `"U/Win"`
`OMD_PLATFORM_VMS_NAME`              | `"VMS"`
`OMD_PLATFORM_VXWORKS_NAME`          | `"VxWorks"`
`OMD_PLATFORM_WINDOWS_NAME`          | `"Windows"`
`OMD_PLATFORM_WINDOWS_CE_NAME`       | `"Windows CE"`
`OMD_PLATFORM_WINDU_NAME`            | `"Wind/U"`
`OMD_PLATFORM_ZOS_NAME`              | `"z/OS"`

## `OMD_PLATFORM_VERSION`
Target platform / OS version, chosen depending on `OMD_PLATFORM`.

Encoded using `OMD_VERSION`. If not detected / not applicable, set to `OMD_NO_VERSION`.

Related constants:
* `OMD_PLATFORM_MAJOR` - same as `OMD_VERSION_MAJOR(OMD_PLATFORM_VERSION)`
* `OMD_PLATFORM_MINOR` - same as `OMD_VERSION_MINOR(OMD_PLATFORM_VERSION)`
* `OMD_PLATFORM_PATCH` - same as `OMD_VERSION_PATCH(OMD_PLATFORM_VERSION)`
