#define FORGE_IMPLEMENTATION
#include "../../forge.h"

FORGE_MAIN {
    FORGE_OUTDIR("build");
    FORGE_STD(c99);
    FORGE_WARN();
    FORGE_OPT(3);

    FORGE_LIB(core) {
        FORGE_INC("include");
        FORGE_SRC("src/mod_*.c");
    }

    FORGE_EXE(app) {
        FORGE_SRC("src/main.c");
        FORGE_USE(core);
    }
}
