#define FORGE_IMPLEMENTATION
#include "../../forge.h"

FORGE_MAIN {
    FORGE_OUTDIR("build");
    FORGE_STD(c99);
    FORGE_WARN();

    FORGE_LIB(greet) {
        FORGE_SRC("lib/greet.c");
        FORGE_INC("include");
    }

    FORGE_EXE(hello) {
        FORGE_SRC("src/hello.c");
        FORGE_USE(greet);
    }
}
