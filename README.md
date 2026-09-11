# forge.h

C99 single-header build recipes for C/C++. POSIX + Windows. x86, x86_64, ARM, AArch64.

Write `build.c`, include `forge.h`, declare targets with macros. Bootstrap once with a C compiler; after that `./build` rebuilds itself if `build.c` changed, then builds the project.

```c
#define FORGE_IMPLEMENTATION
#include "forge.h"

FORGE_MAIN {
    FORGE_OUTDIR("build");
    FORGE_STD(c99);
    FORGE_WARN();

    FORGE_GROUP(sdl2) {
        FORGE_PKG("sdl2");
        FORGE_ON_WINDOWS {
            FORGE_INC("vendor/sdl2/include");
            FORGE_LIBDIR("vendor/sdl2/lib");
            FORGE_LIBS("SDL2");
        }
    }

    FORGE_LIB(foo) {
        FORGE_SRC("lib/*.c");
        FORGE_INC("include");
    }

    FORGE_EXE(hello) {
        FORGE_SRC("src/*.c", "src/**/*.cpp");
        FORGE_USE(foo);
        FORGE_USE(sdl2);
        FORGE_LIBS("m");
        FORGE_ON_WINDOWS {
            FORGE_LIBS("user32");
        }
        FORGE_CFLAGS_GNU("-fno-strict-aliasing");
        FORGE_CFLAGS_MSVC("/utf-8");
    }

    FORGE_CMD(gen) {
        FORGE_OUT("build/generated.h");
        FORGE_USE(hello);
        FORGE_ARGV(forge_exe("hello"), "-o", "build/generated.h");
    }

    FORGE_GROUP(all) {
        FORGE_USE(hello);
        FORGE_USE(gen);
    }

    FORGE_DEFAULT(all);
}
```

`FORGE_DEFAULT` takes up to 8 names per call; call it again for more. An empty default group (no `FORGE_USE`) prints a warning and builds nothing.

```
cc -o build build.c
./build
./build hello
./build --rebuild
./build --clean
./build --verbose
./build -j 8
```

MSVC: `cl build.c`
