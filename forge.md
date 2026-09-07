# forge.h — specification (v0)

Single-file build system for C/C++. The user writes `build.c`, `#include`s `forge.h`, compiles that file with the host compiler, and runs `./build [target]`.

Macros are **syntactic sugar only**. Semantics live in the data structures below.

---

## 1. Data model

```c
typedef struct {
  const char *out;           /* artifact path, relative, e.g. "build/editor" */
  const char **patterns;     /* SRCS entries: literals and/or glob patterns */
  const char **flags;        /* compiler/linker flags */
  const char **deps;         /* other Cmd.out names this Cmd depends on */
} Cmd;

typedef struct {
  const char *name;          /* argv target name, e.g. "build", "test" */
  Cmd *cmds;
  size_t cmd_count;
} Target;
```

After runtime glob expand, each `Cmd` also has a concrete `srcs[]` list (not stored by the macros; produced by `os_glob`).

There is **no** separate graph DSL. `deps[]` are edges by `out` name.

---

## 2. Syntax (`build.c`)

Minimal macro set (v0):

| Macro | Role |
|-------|------|
| `TARGET(name)` … `END_TARGET` | Declare a named target |
| `EXE(out, …)` … `END` | One `Cmd` producing executable `out` |
| `SRCS(...)` | Glob patterns and/or literal source paths |
| `FLAGS(...)` | Flags passed to the compiler driver |
| `DEPS(...)` | Other artifact `out` names this cmd depends on |

```c
#include "forge.h"

TARGET(build)
  EXE("build/editor")
    SRCS("src/*.c", "src/os_*.c")
    FLAGS(-O0, -g, -Wall)
  END
END_TARGET

TARGET(test)
  EXE("build/test_buffer")
    SRCS("tests/test_buffer.c", "src/buffer.c")
    FLAGS(-O0, -Wall)
    DEPS("build/editor")
  END
END_TARGET
```

`EXE` may also take optional literal sources after `out`:

```c
EXE("build/editor", "src/main.c", "src/buffer.c")
  FLAGS(-O0, -g)
END
```

Literals in `EXE(...)` and entries in `SRCS(...)` feed the same pattern/src list.

### Syntax rules

1. `EXE` only inside `TARGET` … `END_TARGET`.
2. `SRCS` / `FLAGS` / `DEPS` only inside `EXE` … `END`.
3. `EXE` `out` is an **explicit relative path** (e.g. `"build/editor"`). No bare-name magic that maps `editor` → `./editor`.
4. Multiple `EXE` blocks in one target are allowed; they form an ordered list of `Cmd`s.
5. Macros expand to `Cmd` / `Target` data only. No side effects at macro time.
6. Keep the macro surface minimal (C99 `__VA_ARGS__`). Do not add a fifth catch-all macro. `LIB` / `OBJ` are **not** in v0.

---

## 3. Semantics of `./build [target]`

### 3.1 Rebuild-self (hard path, not a Target)

Before selecting a target:

1. If `build.c` or `forge.h` is newer than the `build` binary, rebuild `build` with the **same** host toolchain that produced the current binary, then `exec` the new binary with the original argv.
2. Rebuild-self is **not** an entry in the target table.

### 3.2 Target selection

1. If argv has no target name, use `"build"`.
2. Look up `name` in the target table.
3. Unknown name → fail with an error and print the list of known target names.

### 3.3 Toolchain for spawning cmds

Driver used to compile/link each `Cmd` is the toolchain that compiled `build.c`, detected at compile time of `forge.h` / `build.c`:

1. If `__clang__` → `clang` (check **before** `__GNUC__`; Clang defines both).
2. Else if `__GNUC__` → `gcc`.
3. Else if `_MSC_VER` → `cl`.

No `$CC` / env override in v0.

### 3.4 Per-`Cmd` pipeline (in target order)

For each `Cmd` in the selected target:

1. **Expand**
   - Run `os_glob` at **`./build` runtime** on every pattern/src entry.
   - Literals are kept as-is.
   - Results are merged into `srcs[]` and **sorted**.
   - Empty glob match → **fail**.
   - Patterns are **not** expanded by the preprocessor when compiling `build.c`.

2. **Deps**
   - All `Cmd`s from every `Target` form a global registry keyed by `out`.
   - For each name in `deps[]`, look up that `Cmd` in the registry and run its pipeline first (expand → deps → spawn), even if it belongs to another target.
   - v0: linear “all deps, then this cmd” (depth-first).
   - Full topo sort and cycle detection when chains grow past simple link→test; cycles → fail when detected.

3. **mtime-skip** (optional, v0.1)
   - Skip spawn if `out` is newer than all `srcs` and all dep outs.
   - Not required for v0 correctness.

4. **Spawn**
   - Invoke the detected driver:
     `driver -o <out> <srcs...> <flags...>`
     (MSVC/`cl` spelling adapted to that driver’s conventions).

### 3.5 Glob rules

| Allowed | Not in v0 |
|---------|-----------|
| `*`, `?` | `**` recursive globs |

- POSIX: `glob(3)`
- Windows: `FindFirstFile`
- Expand order: sorted
- Empty match: error

---

## 4. Out of scope for v0

- Package manager / dependency fetching
- Code generators
- Arbitrary graph DSL beyond `deps[]` on `Cmd`
- Preprocessor-time glob expansion
- Env-based compiler override (`$CC`, etc.)
- `LIB` / `OBJ` macros
- A catch-all / “universal” macro beyond the set above

---

## 5. Design intent (non-normative)

Forge aims to be **simpler than nob** (declarative `Cmd` lists, no imperative spawn-in-script side effects) while staying powerful enough to grow **mtime-based rebuild** on top of the same `Cmd` model without inventing a new DSL. Macros exist only to keep `build.c` readable.
