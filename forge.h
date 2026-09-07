/*
 *            ) ) )
 *           ( ( (
 *            ) ) )
 *     +-----------------+
 *     |      FORGE      |
 *     +-----------------+
 *           /     \
 *
 *  forge.h — C99 build recipes for C/C++
 *  POSIX + Windows | x86/x86_64/ARM/AArch64
 *
 *  Copyright (c) 2026 L0LC0D3
 *  SPDX-License-Identifier: MIT
 *
 *  In the spirit of nob.h, but much simpler.
 */
#ifndef _FORGE_BUILD_SYSTEM_FOR_C_CXX_H_
#define _FORGE_BUILD_SYSTEM_FOR_C_CXX_H_

#ifdef _WIN32
#  ifndef _CRT_SECURE_NO_WARNINGS
#    define _CRT_SECURE_NO_WARNINGS 1
#  endif
#endif

enum {
    FORGE_OS_WINDOWS,
    FORGE_OS_LINUX,
    FORGE_OS_MACOS,
    FORGE_OS_BSD,
    FORGE_OS_UNKNOWN
};

enum {
    FORGE_ARCH_X86,
    FORGE_ARCH_X64,
    FORGE_ARCH_ARM,
    FORGE_ARCH_AARCH64,
    FORGE_ARCH_UNKNOWN
};

enum {
    FORGE_CC_GCC,
    FORGE_CC_CLANG,
    FORGE_CC_MSVC,
    FORGE_CC_TCC,
    FORGE_CC_CLANGCL,
    FORGE_CC_UNKNOWN
};

enum {
    FORGE_DIALECT_GNU,
    FORGE_DIALECT_MSVC
};

enum {
    FORGE_KIND_EXE,
    FORGE_KIND_LIB,
    FORGE_KIND_DLL,
    FORGE_KIND_IMPORT
};

static inline int forge_os(void)
{
#if defined(_WIN32)
    return FORGE_OS_WINDOWS;
#elif defined(__APPLE__)
    return FORGE_OS_MACOS;
#elif defined(__linux__)
    return FORGE_OS_LINUX;
#elif defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__) || defined(__DragonFly__)
    return FORGE_OS_BSD;
#else
    return FORGE_OS_UNKNOWN;
#endif
}

static inline int forge_arch(void)
{
#if defined(__aarch64__) || defined(_M_ARM64)
    return FORGE_ARCH_AARCH64;
#elif defined(__arm__) || defined(_M_ARM)
    return FORGE_ARCH_ARM;
#elif defined(__x86_64__) || defined(_M_X64) || defined(_M_AMD64)
    return FORGE_ARCH_X64;
#elif defined(__i386__) || defined(_M_IX86)
    return FORGE_ARCH_X86;
#else
    return FORGE_ARCH_UNKNOWN;
#endif
}

static inline int forge_cc(void)
{
#if defined(__clang__) && defined(_MSC_VER)
    return FORGE_CC_CLANGCL;
#elif defined(_MSC_VER)
    return FORGE_CC_MSVC;
#elif defined(__clang__)
    return FORGE_CC_CLANG;
#elif defined(__TINYC__)
    return FORGE_CC_TCC;
#elif defined(__GNUC__)
    return FORGE_CC_GCC;
#else
    return FORGE_CC_UNKNOWN;
#endif
}

static inline int forge_dialect(void)
{
    int cc = forge_cc();
    if (cc == FORGE_CC_MSVC || cc == FORGE_CC_CLANGCL)
        return FORGE_DIALECT_MSVC;
    return FORGE_DIALECT_GNU;
}

typedef struct ForgeStrs {
    const char **items;
    int count;
    int cap;
} ForgeStrs;

typedef struct ForgeTarget {
    int kind;
    const char *name;
    const char *outdir;
    const char *std;
    int opt;
    int debug;
    int warn;
    int pic;
    int color;
    ForgeStrs srcs;
    ForgeStrs incs;
    ForgeStrs defs;
    ForgeStrs libdirs;
    ForgeStrs libs;
    ForgeStrs uses;
    ForgeStrs cflags;
    ForgeStrs cflags_gnu;
    ForgeStrs cflags_msvc;
    ForgeStrs cflags_clang;
    ForgeStrs pkg;
} ForgeTarget;

void forge__rebuild(int argc, char **argv, const char *src, ...);
void forge__init(void);
int  forge__run(void);
ForgeTarget *forge__cur(void);
ForgeTarget *forge__begin(int kind, const char *name);
ForgeTarget *forge__end(ForgeTarget *t);
void forge__add(ForgeStrs *s, ...);
void forge__pkg(const char *name);

#define FORGE_ON_WINDOWS  if (forge_os() == FORGE_OS_WINDOWS)
#define FORGE_ON_POSIX    if (forge_os() != FORGE_OS_WINDOWS)
#define FORGE_ON_MACOS    if (forge_os() == FORGE_OS_MACOS)
#define FORGE_ON_LINUX    if (forge_os() == FORGE_OS_LINUX)
#define FORGE_ON_MSVC     if (forge_dialect() == FORGE_DIALECT_MSVC)
#define FORGE_ON_GNU      if (forge_dialect() == FORGE_DIALECT_GNU)

#define FORGE_EXE(name) \
    for (ForgeTarget *forge__t = forge__begin(FORGE_KIND_EXE, #name); forge__t; forge__t = forge__end(forge__t))
#define FORGE_LIB(name) \
    for (ForgeTarget *forge__t = forge__begin(FORGE_KIND_LIB, #name); forge__t; forge__t = forge__end(forge__t))
#define FORGE_DLL(name) \
    for (ForgeTarget *forge__t = forge__begin(FORGE_KIND_DLL, #name); forge__t; forge__t = forge__end(forge__t))
#define FORGE_IMPORT(name) \
    for (ForgeTarget *forge__t = forge__begin(FORGE_KIND_IMPORT, #name); forge__t; forge__t = forge__end(forge__t))

#define FORGE_SRC(...)         forge__add(&forge__cur()->srcs, __VA_ARGS__, NULL)
#define FORGE_INC(...)         forge__add(&forge__cur()->incs, __VA_ARGS__, NULL)
#define FORGE_DEF(...)         forge__add(&forge__cur()->defs, __VA_ARGS__, NULL)
#define FORGE_LIBDIR(...)      forge__add(&forge__cur()->libdirs, __VA_ARGS__, NULL)
#define FORGE_LIBS(...)        forge__add(&forge__cur()->libs, __VA_ARGS__, NULL)
#define FORGE_CFLAGS(...)      forge__add(&forge__cur()->cflags, __VA_ARGS__, NULL)
#define FORGE_CFLAGS_GNU(...)  forge__add(&forge__cur()->cflags_gnu, __VA_ARGS__, NULL)
#define FORGE_CFLAGS_MSVC(...) forge__add(&forge__cur()->cflags_msvc, __VA_ARGS__, NULL)
#define FORGE_CFLAGS_CLANG(...) forge__add(&forge__cur()->cflags_clang, __VA_ARGS__, NULL)
#define FORGE_USE(name)        forge__add(&forge__cur()->uses, #name, NULL)
#define FORGE_PKG(pkg)         forge__pkg(pkg)
#define FORGE_OUTDIR(p)        (forge__cur()->outdir = (p))
#define FORGE_STD(x)           (forge__cur()->std = #x)
#define FORGE_OPT(n)           (forge__cur()->opt = (n))
#define FORGE_DEBUG()          (forge__cur()->debug = 1)
#define FORGE_WARN()           (forge__cur()->warn = 1)
#define FORGE_PIC()            (forge__cur()->pic = 1)

#if defined(__GNUC__) || defined(__clang__)
#  define FORGE__UNUSED __attribute__((unused))
#else
#  define FORGE__UNUSED
#endif

#define FORGE_MAIN \
    static void forge__recipe(int argc FORGE__UNUSED, char **argv FORGE__UNUSED); \
    int main(int argc, char **argv) { \
        forge__rebuild(argc, argv, __FILE__, NULL); \
        forge__init(); \
        forge__recipe(argc, argv); \
        return forge__run() ? 0 : 1; \
    } \
    static void forge__recipe(int argc FORGE__UNUSED, char **argv FORGE__UNUSED)

#define FORGE_MAIN_PLUS(...) \
    static void forge__recipe(int argc FORGE__UNUSED, char **argv FORGE__UNUSED); \
    int main(int argc, char **argv) { \
        forge__rebuild(argc, argv, __FILE__, __VA_ARGS__, NULL); \
        forge__init(); \
        forge__recipe(argc, argv); \
        return forge__run() ? 0 : 1; \
    } \
    static void forge__recipe(int argc FORGE__UNUSED, char **argv FORGE__UNUSED)

#endif /* _FORGE_BUILD_SYSTEM_FOR_C_CXX_H_ */

#ifdef FORGE_IMPLEMENTATION
#ifndef FORGE__IMPL
#define FORGE__IMPL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <errno.h>
#include <time.h>
#include <sys/stat.h>

#ifdef _WIN32
#  define WIN32_LEAN_AND_MEAN
#  include <windows.h>
#  include <direct.h>
#  define forge__popen  _popen
#  define forge__pclose _pclose
#else
#  include <sys/types.h>
#  include <sys/wait.h>
#  include <unistd.h>
#  define forge__popen  popen
#  define forge__pclose pclose
#endif

static ForgeTarget  forge__def;
static ForgeTarget *forge__now;
static ForgeTarget *forge__targets;
static int          forge__ntargets;
static int          forge__tcap;
static int          forge__err;

static void forge__errf(const char *fmt, ...);

static void forge__oom(void)
{
    forge__errf("out of memory");
    exit(1);
}

static char *forge__dup(const char *s)
{
    size_t n = strlen(s) + 1;
    char *p = (char *)malloc(n);
    if (!p)
        forge__oom();
    memcpy(p, s, n);
    return p;
}

static char *forge__fmt(const char *fmt, ...)
{
    va_list ap, aq;
    int n;
    char *s;
    va_start(ap, fmt);
    va_copy(aq, ap);
    n = vsnprintf(NULL, 0, fmt, ap);
    va_end(ap);
    if (n < 0)
        n = 256;
    s = (char *)malloc((size_t)n + 1);
    if (!s)
        forge__oom();
    vsnprintf(s, (size_t)n + 1, fmt, aq);
    va_end(aq);
    return s;
}

static void forge__add1(ForgeStrs *s, const char *x)
{
    if (s->count >= s->cap) {
        s->cap = s->cap ? s->cap * 2 : 8;
        s->items = (const char **)realloc(s->items, (size_t)s->cap * sizeof(char *));
        if (!s->items)
            forge__oom();
    }
    s->items[s->count++] = x;
}

void forge__add(ForgeStrs *s, ...)
{
    va_list ap;
    const char *x;
    va_start(ap, s);
    while ((x = va_arg(ap, const char *)) != NULL)
        forge__add1(s, x);
    va_end(ap);
}

static void forge__strs_cat(ForgeStrs *d, const ForgeStrs *s)
{
    int i;
    for (i = 0; i < s->count; i++)
        forge__add1(d, s->items[i]);
}

static void forge__strs_copy(ForgeStrs *d, const ForgeStrs *s)
{
    d->items = NULL;
    d->count = d->cap = 0;
    forge__strs_cat(d, s);
}

static int forge__has(const ForgeStrs *s, const char *x)
{
    int i;
    for (i = 0; i < s->count; i++)
        if (strcmp(s->items[i], x) == 0)
            return 1;
    return 0;
}

ForgeTarget *forge__cur(void)
{
    return forge__now;
}

void forge__init(void)
{
    memset(&forge__def, 0, sizeof(forge__def));
    forge__def.opt = -1;
    forge__def.outdir = ".";
    forge__now = &forge__def;
}

ForgeTarget *forge__begin(int kind, const char *name)
{
    ForgeTarget *t;
    if (forge__ntargets >= forge__tcap) {
        forge__tcap = forge__tcap ? forge__tcap * 2 : 8;
        forge__targets = (ForgeTarget *)realloc(forge__targets, (size_t)forge__tcap * sizeof(ForgeTarget));
        if (!forge__targets)
            forge__oom();
    }
    t = &forge__targets[forge__ntargets++];
    memset(t, 0, sizeof(*t));
    t->kind = kind;
    t->name = name;
    t->outdir = forge__def.outdir;
    t->std = forge__def.std;
    t->opt = forge__def.opt;
    t->debug = forge__def.debug;
    t->warn = forge__def.warn;
    t->pic = forge__def.pic;
    forge__strs_copy(&t->srcs, &forge__def.srcs);
    forge__strs_copy(&t->incs, &forge__def.incs);
    forge__strs_copy(&t->defs, &forge__def.defs);
    forge__strs_copy(&t->libdirs, &forge__def.libdirs);
    forge__strs_copy(&t->libs, &forge__def.libs);
    forge__strs_copy(&t->uses, &forge__def.uses);
    forge__strs_copy(&t->cflags, &forge__def.cflags);
    forge__strs_copy(&t->cflags_gnu, &forge__def.cflags_gnu);
    forge__strs_copy(&t->cflags_msvc, &forge__def.cflags_msvc);
    forge__strs_copy(&t->cflags_clang, &forge__def.cflags_clang);
    forge__strs_copy(&t->pkg, &forge__def.pkg);
    forge__now = t;
    return t;
}

ForgeTarget *forge__end(ForgeTarget *t)
{
    (void)t;
    forge__now = &forge__def;
    return NULL;
}

static int forge__msvc(void)
{
    return forge_dialect() == FORGE_DIALECT_MSVC;
}

static const char *forge__ccbin(int cxx)
{
    switch (forge_cc()) {
    case FORGE_CC_MSVC:    return "cl.exe";
    case FORGE_CC_CLANGCL: return "clang-cl";
    case FORGE_CC_CLANG:   return cxx ? "clang++" : "clang";
    case FORGE_CC_TCC:     return "tcc";
    case FORGE_CC_GCC:     return cxx ? "g++" : "gcc";
    default:               return cxx ? "c++" : "cc";
    }
}

static const char *forge__exeext(void)
{
#ifdef _WIN32
    return ".exe";
#else
    return "";
#endif
}

static const char *forge__objext(void)
{
    return forge__msvc() ? ".obj" : ".o";
}

static int forge__cxx(const char *src)
{
    size_t n = strlen(src);
    if (n >= 4 && strcmp(src + n - 4, ".cpp") == 0) return 1;
    if (n >= 4 && strcmp(src + n - 4, ".cxx") == 0) return 1;
    if (n >= 3 && strcmp(src + n - 3, ".cc") == 0) return 1;
    return 0;
}

static const char *forge__base(const char *p)
{
    const char *b = p;
    for (; *p; p++)
        if (*p == '/' || *p == '\\')
            b = p + 1;
    return b;
}

static int forge__mtime(const char *path, time_t *out)
{
#ifdef _MSC_VER
    struct _stat st;
    if (_stat(path, &st) != 0)
        return 0;
#else
    struct stat st;
    if (stat(path, &st) != 0)
        return 0;
#endif
    *out = st.st_mtime;
    return 1;
}

static int forge__needs(const char *output, const char **in, int nin)
{
    time_t ot, it;
    int i;
    if (!forge__mtime(output, &ot))
        return 1;
    for (i = 0; i < nin; i++) {
        if (!forge__mtime(in[i], &it)) {
            forge__errf("missing `%s`", in[i]);
            return -1;
        }
        if (it > ot)
            return 1;
    }
    return 0;
}

static int forge__mkdir1(const char *path)
{
#ifdef _WIN32
    return _mkdir(path) == 0 || errno == EEXIST;
#else
    return mkdir(path, 0755) == 0 || errno == EEXIST;
#endif
}

static int forge__is_root(const char *p)
{
    if (!p[0])
        return 1;
    if (p[1] == ':' && p[2] == '\0')
        return 1;
    if (p[1] == ':' && (p[2] == '/' || p[2] == '\\') && p[3] == '\0')
        return 1;
    if ((p[0] == '/' || p[0] == '\\') && p[1] == '\0')
        return 1;
    return 0;
}

static int forge__mkdir_comp(const char *buf)
{
    if (!buf[0] || strcmp(buf, ".") == 0 || strcmp(buf, "..") == 0 || forge__is_root(buf))
        return 1;
    if (forge__mkdir1(buf))
        return 1;
    forge__errf("mkdir `%s`: %s", buf, strerror(errno));
    return 0;
}

static int forge__mkdirs(const char *path)
{
    char *buf = forge__dup(path);
    char *p;
    for (p = buf; *p; p++) {
        if (*p == '/' || *p == '\\') {
            char c = *p;
            *p = '\0';
            if (!forge__mkdir_comp(buf)) {
                free(buf);
                return 0;
            }
            *p = c;
        }
    }
    if (!forge__mkdir_comp(buf)) {
        free(buf);
        return 0;
    }
    free(buf);
    return 1;
}

#ifdef _WIN32
static void forge__buf_add(char **buf, int *n, int *cap, const char *s, int len)
{
    if (*n + len + 1 > *cap) {
        *cap = *cap ? *cap * 2 : 256;
        while (*n + len + 1 > *cap)
            *cap *= 2;
        *buf = (char *)realloc(*buf, (size_t)*cap);
        if (!*buf)
            forge__oom();
    }
    memcpy(*buf + *n, s, (size_t)len);
    *n += len;
    (*buf)[*n] = '\0';
}

static char *forge__cmdline(ForgeStrs *cmd)
{
    char *out = NULL;
    int n = 0, cap = 0, i, j;
    for (i = 0; i < cmd->count; i++) {
        const char *a = cmd->items[i];
        size_t len = strlen(a);
        int bs = 0;
        if (i)
            forge__buf_add(&out, &n, &cap, " ", 1);
        if (len != 0 && strpbrk(a, " \t\n\v\"") == NULL) {
            forge__buf_add(&out, &n, &cap, a, (int)len);
            continue;
        }
        forge__buf_add(&out, &n, &cap, "\"", 1);
        for (j = 0; a[j]; j++) {
            char x = a[j];
            if (x == '\\') {
                bs++;
            } else {
                if (x == '"') {
                    int k;
                    for (k = 0; k < bs + 1; k++)
                        forge__buf_add(&out, &n, &cap, "\\", 1);
                }
                bs = 0;
            }
            forge__buf_add(&out, &n, &cap, &x, 1);
        }
        for (j = 0; j < bs; j++)
            forge__buf_add(&out, &n, &cap, "\\", 1);
        forge__buf_add(&out, &n, &cap, "\"", 1);
    }
    return out ? out : forge__dup("");
}
#endif

static int forge__color(void)
{
    static int once, yes;
    const char *no;
    if (once)
        return yes;
    once = 1;
    no = getenv("NO_COLOR");
    if (no && no[0]) {
        yes = 0;
        return 0;
    }
#ifdef _WIN32
    {
        HANDLE h = GetStdHandle(STD_ERROR_HANDLE);
        DWORD mode = 0;
        if (!GetConsoleMode(h, &mode)) {
            yes = 0;
            return 0;
        }
        yes = SetConsoleMode(h, mode | 0x0004 /* ENABLE_VIRTUAL_TERMINAL_PROCESSING */) ? 1 : 0;
        return yes;
    }
#else
    yes = isatty(STDERR_FILENO);
    return yes;
#endif
}

static void forge__say(const char *tag, const char *path)
{
    const char *col = "\033[1;34m";
    if (strcmp(tag, "CC") == 0 || strcmp(tag, "CXX") == 0)
        col = "\033[1;36m";
    else if (strcmp(tag, "AR") == 0)
        col = "\033[1;33m";
    else if (strcmp(tag, "LD") == 0)
        col = "\033[1;32m";
    else if (strcmp(tag, "DLL") == 0)
        col = "\033[1;35m";
    if (forge__color())
        fprintf(stderr, "  %s%-6s\033[0m %s\n", col, tag, path);
    else
        fprintf(stderr, "  %-6s %s\n", tag, path);
}

static void forge__errf(const char *fmt, ...)
{
    va_list ap;
    if (forge__color())
        fprintf(stderr, "  \033[1;31merror\033[0m  ");
    else
        fprintf(stderr, "  error  ");
    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);
    fprintf(stderr, "\n");
}

static void forge__cmdfail(ForgeStrs *cmd)
{
    int i;
    forge__errf("command failed");
    fprintf(stderr, "         ");
    for (i = 0; i < cmd->count; i++) {
        if (i)
            fputc(' ', stderr);
        fputs(cmd->items[i], stderr);
    }
    fputc('\n', stderr);
}

static int forge__exec(ForgeStrs *cmd)
{
    if (cmd->count < 1) {
        forge__errf("empty command");
        return 0;
    }
#ifdef _WIN32
    {
        STARTUPINFOA si;
        PROCESS_INFORMATION pi;
        char *line = forge__cmdline(cmd);
        DWORD code = 1;
        memset(&si, 0, sizeof(si));
        memset(&pi, 0, sizeof(pi));
        si.cb = sizeof(si);
        if (!CreateProcessA(NULL, line, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)) {
            forge__errf("CreateProcess failed (%lu)", (unsigned long)GetLastError());
            free(line);
            return 0;
        }
        free(line);
        WaitForSingleObject(pi.hProcess, INFINITE);
        GetExitCodeProcess(pi.hProcess, &code);
        CloseHandle(pi.hThread);
        CloseHandle(pi.hProcess);
        if (code != 0)
            forge__cmdfail(cmd);
        return code == 0;
    }
#else
    {
        pid_t pid = fork();
        if (pid < 0) {
            forge__errf("fork: %s", strerror(errno));
            return 0;
        }
        if (pid == 0) {
            char **argv = (char **)calloc((size_t)cmd->count + 1, sizeof(char *));
            int i;
            if (!argv)
                _exit(127);
            for (i = 0; i < cmd->count; i++)
                argv[i] = (char *)cmd->items[i];
            execvp(argv[0], argv);
            fprintf(stderr, "execvp `%s`: %s\n", argv[0], strerror(errno));
            _exit(127);
        }
        {
            int st = 0;
            if (waitpid(pid, &st, 0) < 0) {
                forge__errf("waitpid: %s", strerror(errno));
                return 0;
            }
            if (!(WIFEXITED(st) && WEXITSTATUS(st) == 0)) {
                forge__cmdfail(cmd);
                return 0;
            }
            return 1;
        }
    }
#endif
}

static ForgeTarget *forge__find(const char *name)
{
    int i;
    for (i = 0; i < forge__ntargets; i++)
        if (strcmp(forge__targets[i].name, name) == 0)
            return &forge__targets[i];
    return NULL;
}

static const char *forge__out(ForgeTarget *t)
{
    switch (t->kind) {
    case FORGE_KIND_EXE:
        return forge__fmt("%s/%s%s", t->outdir, t->name, forge__exeext());
    case FORGE_KIND_LIB:
        if (forge__msvc())
            return forge__fmt("%s/%s.lib", t->outdir, t->name);
        return forge__fmt("%s/lib%s.a", t->outdir, t->name);
    case FORGE_KIND_DLL:
#ifdef _WIN32
        return forge__fmt("%s/%s.dll", t->outdir, t->name);
#elif defined(__APPLE__)
        return forge__fmt("%s/lib%s.dylib", t->outdir, t->name);
#else
        return forge__fmt("%s/lib%s.so", t->outdir, t->name);
#endif
    default:
        return NULL;
    }
}

static const char *forge__linkfile(ForgeTarget *t)
{
    if (t->kind == FORGE_KIND_DLL && forge__msvc())
        return forge__fmt("%s/%s.lib", t->outdir, t->name);
    return forge__out(t);
}

void forge__pkg(const char *name)
{
    char cmd[256];
    char buf[8192];
    size_t n;
    FILE *f;
    int st;
    char *p, *start;

    snprintf(cmd, sizeof(cmd), "pkg-config --cflags --libs %s", name);
    f = forge__popen(cmd, "r");
    if (!f) {
#ifndef _WIN32
        forge__errf("pkg-config not found");
        forge__err = 1;
#endif
        return;
    }
    n = fread(buf, 1, sizeof(buf) - 1, f);
    buf[n] = '\0';
    st = forge__pclose(f);
    if (st != 0) {
#ifndef _WIN32
        forge__errf("pkg-config `%s` failed", name);
        forge__err = 1;
#endif
        return;
    }
    p = buf;
    while (*p) {
        while (*p == ' ' || *p == '\t' || *p == '\n' || *p == '\r')
            p++;
        if (!*p)
            break;
        start = p;
        while (*p && *p != ' ' && *p != '\t' && *p != '\n' && *p != '\r')
            p++;
        if (*p)
            *p++ = '\0';
        forge__add1(&forge__cur()->pkg, forge__dup(start));
    }
}

static void forge__merge(ForgeTarget *acc, ForgeTarget *u)
{
    forge__strs_cat(&acc->incs, &u->incs);
    forge__strs_cat(&acc->defs, &u->defs);
    forge__strs_cat(&acc->libdirs, &u->libdirs);
    forge__strs_cat(&acc->libs, &u->libs);
    forge__strs_cat(&acc->cflags, &u->cflags);
    forge__strs_cat(&acc->cflags_gnu, &u->cflags_gnu);
    forge__strs_cat(&acc->cflags_msvc, &u->cflags_msvc);
    forge__strs_cat(&acc->cflags_clang, &u->cflags_clang);
    forge__strs_cat(&acc->pkg, &u->pkg);
}

static void forge__gather(ForgeTarget *t, ForgeTarget *acc, ForgeStrs *arts, ForgeStrs *seen)
{
    int i;
    for (i = 0; i < t->uses.count; i++) {
        ForgeTarget *u = forge__find(t->uses.items[i]);
        if (!u || u->kind == FORGE_KIND_EXE || forge__has(seen, u->name))
            continue;
        forge__add1(seen, u->name);
        forge__gather(u, acc, arts, seen);
        forge__merge(acc, u);
        if (u->kind == FORGE_KIND_LIB || u->kind == FORGE_KIND_DLL)
            forge__add1(arts, forge__linkfile(u));
    }
}

static int forge__isincdef(const char *s)
{
    return !strncmp(s, "-I", 2) || !strncmp(s, "-D", 2) ||
           !strncmp(s, "/I", 2) || !strncmp(s, "/D", 2);
}

static int forge__iscflag(const char *s)
{
    return forge__isincdef(s) ||
           strcmp(s, "-pthread") == 0 || strcmp(s, "-pthreads") == 0;
}

static void forge__emit_cflags(ForgeStrs *cmd, ForgeTarget *t)
{
    int i, cc = forge_cc();
    for (i = 0; i < t->cflags.count; i++)
        forge__add1(cmd, t->cflags.items[i]);
    if (!forge__msvc())
        for (i = 0; i < t->cflags_gnu.count; i++)
            forge__add1(cmd, t->cflags_gnu.items[i]);
    if (forge__msvc())
        for (i = 0; i < t->cflags_msvc.count; i++)
            forge__add1(cmd, t->cflags_msvc.items[i]);
    if (cc == FORGE_CC_CLANG || cc == FORGE_CC_CLANGCL)
        for (i = 0; i < t->cflags_clang.count; i++)
            forge__add1(cmd, t->cflags_clang.items[i]);
}

static void forge__emit_compile(ForgeStrs *cmd, ForgeTarget *t)
{
    int i, msvc = forge__msvc();
    for (i = 0; i < t->incs.count; i++)
        forge__add1(cmd, forge__fmt(msvc ? "/I%s" : "-I%s", t->incs.items[i]));
    for (i = 0; i < t->defs.count; i++)
        forge__add1(cmd, forge__fmt(msvc ? "/D%s" : "-D%s", t->defs.items[i]));
    if (t->std)
        forge__add1(cmd, forge__fmt(msvc ? "/std:%s" : "-std=%s", t->std));
    if (t->opt >= 0) {
        if (msvc) {
            if (t->opt == 0)      forge__add1(cmd, "/Od");
            else if (t->opt == 1) forge__add1(cmd, "/O1");
            else if (t->opt == 2) forge__add1(cmd, "/O2");
            else                  forge__add1(cmd, "/Ox");
        } else {
            forge__add1(cmd, forge__fmt("-O%d", t->opt));
        }
    }
    if (t->debug)
        forge__add1(cmd, msvc ? "/Zi" : "-g");
    if (t->warn) {
        if (msvc) {
            forge__add1(cmd, "/W4");
        } else {
            forge__add1(cmd, "-Wall");
            forge__add1(cmd, "-Wextra");
        }
    }
    if ((t->pic || t->kind == FORGE_KIND_DLL) && !msvc)
        forge__add1(cmd, "-fPIC");
    forge__emit_cflags(cmd, t);
    for (i = 0; i < t->pkg.count; i++) {
        if (forge__iscflag(t->pkg.items[i]))
            forge__add1(cmd, t->pkg.items[i]);
    }
}

static void forge__emit_lib(ForgeStrs *cmd, const char *lib)
{
    if (strcmp(lib, "m") == 0 && forge__msvc())
        return;
    if (strcmp(lib, "pthread") == 0) {
        if (forge__msvc())
            return;
        forge__add1(cmd, "-pthread");
        return;
    }
    if (forge__msvc())
        forge__add1(cmd, forge__fmt("%s.lib", lib));
    else
        forge__add1(cmd, forge__fmt("-l%s", lib));
}

static int forge__build(ForgeTarget *t)
{
    ForgeTarget acc;
    ForgeStrs arts = {0}, seen = {0}, objs = {0}, inputs = {0}, cmd = {0};
    int i, cxx = 0, need;
    const char *out;
    char *objdir;

    if (t->srcs.count < 1) {
        forge__errf("target `%s` has no sources", t->name);
        return 0;
    }

    memset(&acc, 0, sizeof(acc));
    acc.kind = t->kind;
    acc.outdir = t->outdir;
    acc.name = t->name;
    acc.std = t->std;
    acc.opt = t->opt;
    acc.debug = t->debug;
    acc.warn = t->warn;
    acc.pic = t->pic;
    forge__merge(&acc, t);
    forge__gather(t, &acc, &arts, &seen);

    if (!forge__mkdirs(t->outdir))
        return 0;
    objdir = forge__fmt("%s/%s", t->outdir, t->name);
    if (!forge__mkdirs(objdir))
        return 0;

    for (i = 0; i < t->srcs.count; i++) {
        const char *src = t->srcs.items[i];
        const char *obj = forge__fmt("%s/%s%s", objdir, forge__base(src), forge__objext());
        int is_cxx = forge__cxx(src);
        if (is_cxx)
            cxx = 1;
        need = forge__needs(obj, &src, 1);
        if (need < 0)
            return 0;
        if (need) {
            cmd.count = 0;
            forge__add1(&cmd, forge__ccbin(is_cxx));
            if (forge__msvc()) {
                forge__add1(&cmd, "/nologo");
                forge__add1(&cmd, "/c");
                forge__add1(&cmd, forge__fmt("/Fo%s", obj));
            } else {
                forge__add1(&cmd, "-c");
                forge__add1(&cmd, "-o");
                forge__add1(&cmd, obj);
            }
            forge__emit_compile(&cmd, &acc);
            forge__add1(&cmd, src);
            forge__say(is_cxx ? "CXX" : "CC", src);
            if (!forge__exec(&cmd))
                return 0;
        }
        forge__add1(&objs, obj);
    }

    out = forge__out(t);
    for (i = 0; i < objs.count; i++)
        forge__add1(&inputs, objs.items[i]);
    for (i = 0; i < arts.count; i++)
        forge__add1(&inputs, arts.items[i]);
    need = forge__needs(out, inputs.items, inputs.count);
    if (need < 0)
        return 0;
    if (!need)
        return 1;

    cmd.count = 0;
    if (t->kind == FORGE_KIND_LIB) {
        if (forge__msvc()) {
            forge__add1(&cmd, "lib.exe");
            forge__add1(&cmd, "/nologo");
            forge__add1(&cmd, forge__fmt("/OUT:%s", out));
        } else {
            forge__add1(&cmd, "ar");
            forge__add1(&cmd, "rcs");
            forge__add1(&cmd, out);
        }
        for (i = 0; i < objs.count; i++)
            forge__add1(&cmd, objs.items[i]);
        forge__say("AR", out);
        return forge__exec(&cmd);
    }

    forge__add1(&cmd, forge__ccbin(cxx));
    if (forge__msvc()) {
        forge__add1(&cmd, "/nologo");
        if (t->kind == FORGE_KIND_DLL)
            forge__add1(&cmd, "/LD");
        forge__add1(&cmd, forge__fmt("/Fe%s", out));
    } else {
        if (t->kind == FORGE_KIND_DLL)
            forge__add1(&cmd, "-shared");
        forge__add1(&cmd, "-o");
        forge__add1(&cmd, out);
    }
    for (i = 0; i < objs.count; i++)
        forge__add1(&cmd, objs.items[i]);
    for (i = 0; i < arts.count; i++)
        forge__add1(&cmd, arts.items[i]);
    if (forge__msvc() && acc.libdirs.count > 0)
        forge__add1(&cmd, "/link");
    for (i = 0; i < acc.libdirs.count; i++)
        forge__add1(&cmd, forge__fmt(forge__msvc() ? "/LIBPATH:%s" : "-L%s", acc.libdirs.items[i]));
    for (i = 0; i < acc.libs.count; i++)
        forge__emit_lib(&cmd, acc.libs.items[i]);
    for (i = 0; i < acc.pkg.count; i++) {
        const char *s = acc.pkg.items[i];
        if (forge__isincdef(s))
            continue;
        forge__add1(&cmd, s);
    }
    forge__say(t->kind == FORGE_KIND_DLL ? "DLL" : "LD", out);
    return forge__exec(&cmd);
}

static int forge__need(ForgeTarget *t)
{
    int i;
    if (t->color == 2)
        return 1;
    if (t->color == 1) {
        forge__errf("cyclic FORGE_USE involving `%s`", t->name);
        return 0;
    }
    t->color = 1;
    for (i = 0; i < t->uses.count; i++) {
        ForgeTarget *u = forge__find(t->uses.items[i]);
        if (!u) {
            forge__errf("unknown target `%s` (used by `%s`)",
                    t->uses.items[i], t->name);
            return 0;
        }
        if (!forge__need(u))
            return 0;
    }
    if (t->kind != FORGE_KIND_IMPORT && !forge__build(t))
        return 0;
    t->color = 2;
    return 1;
}

int forge__run(void)
{
    int i;
    if (forge__err)
        return 0;
    for (i = 0; i < forge__ntargets; i++)
        if (!forge__need(&forge__targets[i]))
            return 0;
    return 1;
}

static int forge__ends_iexe(const char *s)
{
    size_t n = strlen(s);
    const char *e;
    if (n < 4)
        return 0;
    e = s + n - 4;
    return (e[0] == '.' &&
            (e[1] == 'e' || e[1] == 'E') &&
            (e[2] == 'x' || e[2] == 'X') &&
            (e[3] == 'e' || e[3] == 'E'));
}

void forge__rebuild(int argc, char **argv, const char *src, ...)
{
    const char *bin = argv[0];
    ForgeStrs srcs = {0}, cmd = {0};
    va_list ap;
    const char *extra;
    int need, i;
    char *oldp;

#ifdef _WIN32
    if (!forge__ends_iexe(bin))
        bin = forge__fmt("%s.exe", bin);
#endif
    forge__add1(&srcs, src);
    va_start(ap, src);
    while ((extra = va_arg(ap, const char *)) != NULL)
        forge__add1(&srcs, extra);
    va_end(ap);

    need = forge__needs(bin, srcs.items, srcs.count);
    if (need < 0)
        exit(1);
    if (!need)
        return;

    oldp = forge__fmt("%s.old", bin);
#ifdef _WIN32
    DeleteFileA(oldp);
    if (!MoveFileA(bin, oldp)) {
        forge__errf("rename `%s` -> `%s` failed (%lu)",
                bin, oldp, (unsigned long)GetLastError());
        exit(1);
    }
#else
    if (rename(bin, oldp) != 0) {
        forge__errf("rename `%s` -> `%s`: %s", bin, oldp, strerror(errno));
        exit(1);
    }
#endif

    forge__say("RECIPE", src);
    forge__add1(&cmd, forge__ccbin(0));
    if (forge__msvc()) {
        forge__add1(&cmd, "/nologo");
        forge__add1(&cmd, forge__fmt("/Fe%s", bin));
        forge__add1(&cmd, src);
    } else {
        forge__add1(&cmd, "-o");
        forge__add1(&cmd, bin);
        forge__add1(&cmd, src);
    }
    if (!forge__exec(&cmd)) {
#ifdef _WIN32
        MoveFileA(oldp, (char *)bin);
#else
        rename(oldp, bin);
#endif
        exit(1);
    }

    cmd.count = 0;
    forge__add1(&cmd, bin);
    for (i = 1; i < argc; i++)
        forge__add1(&cmd, argv[i]);
    i = forge__exec(&cmd);
    exit(i ? 0 : 1);
}

#endif /* FORGE__IMPL */
#endif /* FORGE_IMPLEMENTATION */
