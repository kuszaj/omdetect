/**
 * print_info.c
 * Print info about compiler, C standard and target.
 */
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
