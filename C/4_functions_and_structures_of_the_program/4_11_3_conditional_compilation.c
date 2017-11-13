#include <stdio.h>

#define SYSTEM "SYSV"

#ifndef SYSTEM == "SYSV"
#define HDR "sysv.h"
#elif SYSTEM == BSD
#define HDR "bsd.h"
#elif SYSTEM == MSDOS
#define HDR "msdos.h"
#else

int main() {
    printf("%s\n", SYSTEM);
}