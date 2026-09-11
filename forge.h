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

#include <stddef.h>

#ifdef _WIN32
#  ifndef _CRT_SECURE_NO_WARNINGS
#    define _CRT_SECURE_NO_WARNINGS 1
#  endif
#endif

#if defined(_MSC_VER) && !defined(__cplusplus)
#  define FORGE_INLINE static __inline
#else
#  define FORGE_INLINE static inline
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
    FORGE_KIND_CMD,
    FORGE_KIND_GROUP
};

#define FORGE_KIND_IMPORT FORGE_KIND_GROUP

FORGE_INLINE int forge_os(void)
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

FORGE_INLINE int forge_arch(void)
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

FORGE_INLINE int forge_cc(void)
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

FORGE_INLINE int forge_dialect(void)
{
    int cc = forge_cc();
    if (cc == FORGE_CC_MSVC || cc == FORGE_CC_CLANGCL)
        return FORGE_DIALECT_MSVC;
    return FORGE_DIALECT_GNU;
}

FORGE_INLINE const char *forge_header_path(void)
{
    return __FILE__;
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
    ForgeStrs outs;
    ForgeStrs argv;
} ForgeTarget;

const char *forge_path(const char *name);
const char *forge_exe(const char *name);

void forge__rebuild(int argc, char **argv, const char *src, ...);
void forge__init(void);
int  forge__run(int argc, char **argv);
ForgeTarget *forge__cur(void);
ForgeTarget *forge__begin(int kind, const char *name);
ForgeTarget *forge__end(ForgeTarget *t);
void forge__add(ForgeStrs *s, ...);
void forge__add_src(ForgeStrs *s, ...);
void forge__pkg(const char *name);
void forge__set_jobs(int n);

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
#define FORGE_GROUP(name) \
    for (ForgeTarget *forge__t = forge__begin(FORGE_KIND_GROUP, #name); forge__t; forge__t = forge__end(forge__t))
#define FORGE_IMPORT(name) FORGE_GROUP(name)
#define FORGE_CMD(name) \
    for (ForgeTarget *forge__t = forge__begin(FORGE_KIND_CMD, #name); forge__t; forge__t = forge__end(forge__t))
/* FORGE_DEFAULT accepts at most 8 names per call; use multiple calls for more. */
#define FORGE__STR(x) #x
#define FORGE__DEFAULT_1(a) FORGE__STR(a)
#define FORGE__DEFAULT_2(a,b) FORGE__STR(a), FORGE__STR(b)
#define FORGE__DEFAULT_3(a,b,c) FORGE__STR(a), FORGE__STR(b), FORGE__STR(c)
#define FORGE__DEFAULT_4(a,b,c,d) FORGE__STR(a), FORGE__STR(b), FORGE__STR(c), FORGE__STR(d)
#define FORGE__DEFAULT_5(a,b,c,d,e) FORGE__STR(a), FORGE__STR(b), FORGE__STR(c), FORGE__STR(d), FORGE__STR(e)
#define FORGE__DEFAULT_6(a,b,c,d,e,f) FORGE__STR(a), FORGE__STR(b), FORGE__STR(c), FORGE__STR(d), FORGE__STR(e), FORGE__STR(f)
#define FORGE__DEFAULT_7(a,b,c,d,e,f,g) FORGE__STR(a), FORGE__STR(b), FORGE__STR(c), FORGE__STR(d), FORGE__STR(e), FORGE__STR(f), FORGE__STR(g)
#define FORGE__DEFAULT_8(a,b,c,d,e,f,g,h) FORGE__STR(a), FORGE__STR(b), FORGE__STR(c), FORGE__STR(d), FORGE__STR(e), FORGE__STR(f), FORGE__STR(g), FORGE__STR(h)
#define FORGE__DEFAULT_N(_1,_2,_3,_4,_5,_6,_7,_8,N,...) FORGE__DEFAULT_##N
#define FORGE__DEFAULT_NARG(...) FORGE__DEFAULT_N(__VA_ARGS__, 8, 7, 6, 5, 4, 3, 2, 1, 0)
#define FORGE_DEFAULT(...) do { \
    const char *forge__dn[] = { FORGE__DEFAULT_NARG(__VA_ARGS__)(__VA_ARGS__), NULL }; \
    int forge__di; \
    for (forge__di = 0; forge__dn[forge__di]; forge__di++) \
        forge__add1(&forge__defaults, forge__dn[forge__di]); \
} while (0)
#define FORGE_RUN_GROUP(name) FORGE_DEFAULT(name)

#define FORGE_SRC(...)         forge__add_src(&forge__cur()->srcs, __VA_ARGS__, NULL)
#define FORGE_INC(...)         forge__add(&forge__cur()->incs, __VA_ARGS__, NULL)
#define FORGE_DEF(...)         forge__add(&forge__cur()->defs, __VA_ARGS__, NULL)
#define FORGE_LIBDIR(...)      forge__add(&forge__cur()->libdirs, __VA_ARGS__, NULL)
#define FORGE_LIBS(...)        forge__add(&forge__cur()->libs, __VA_ARGS__, NULL)
#define FORGE_CFLAGS(...)      forge__add(&forge__cur()->cflags, __VA_ARGS__, NULL)
#define FORGE_CFLAGS_GNU(...)  forge__add(&forge__cur()->cflags_gnu, __VA_ARGS__, NULL)
#define FORGE_CFLAGS_MSVC(...) forge__add(&forge__cur()->cflags_msvc, __VA_ARGS__, NULL)
#define FORGE_CFLAGS_CLANG(...) forge__add(&forge__cur()->cflags_clang, __VA_ARGS__, NULL)
#define FORGE_USE(name)        forge__add(&forge__cur()->uses, #name, NULL)
#define FORGE_OUT(...)         forge__add(&forge__cur()->outs, __VA_ARGS__, NULL)
#define FORGE_ARGV(...)        forge__add(&forge__cur()->argv, __VA_ARGS__, NULL)
#define FORGE_PKG(pkg)         forge__pkg(pkg)
#define FORGE_OUTDIR(p)        (forge__cur()->outdir = (p))
#define FORGE_STD(x)           (forge__cur()->std = #x)
#define FORGE_OPT(n)           (forge__cur()->opt = (n))
#define FORGE_DEBUG()          (forge__cur()->debug = 1)
#define FORGE_WARN()           (forge__cur()->warn = 1)
#define FORGE_PIC()            (forge__cur()->pic = 1)
#define FORGE_JOBS(n)          forge__set_jobs(n)

#if defined(__GNUC__) || defined(__clang__)
#  define FORGE__UNUSED __attribute__((unused))
#else
#  define FORGE__UNUSED
#endif

#define FORGE_MAIN \
    static void forge__recipe(int argc FORGE__UNUSED, char **argv FORGE__UNUSED); \
    int main(int argc, char **argv) { \
        forge__rebuild(argc, argv, __FILE__, forge_header_path(), NULL); \
        forge__init(); \
        forge__recipe(argc, argv); \
        return forge__run(argc, argv) ? 0 : 1; \
    } \
    static void forge__recipe(int argc FORGE__UNUSED, char **argv FORGE__UNUSED)

#define FORGE_MAIN_PLUS(...) \
    static void forge__recipe(int argc FORGE__UNUSED, char **argv FORGE__UNUSED); \
    int main(int argc, char **argv) { \
        forge__rebuild(argc, argv, __FILE__, __VA_ARGS__, NULL); \
        forge__init(); \
        forge__recipe(argc, argv); \
        return forge__run(argc, argv) ? 0 : 1; \
    } \
    static void forge__recipe(int argc FORGE__UNUSED, char **argv FORGE__UNUSED)

#endif /* _FORGE_BUILD_SYSTEM_FOR_C_CXX_H_ */

#ifdef FORGE_IMPLEMENTATION
#ifndef FORGE__IMPL
#define FORGE__IMPL

#if !defined(_WIN32)
#  if defined(__APPLE__) && !defined(_DARWIN_C_SOURCE)
#    define _DARWIN_C_SOURCE
#  elif !defined(_DEFAULT_SOURCE) && !defined(_POSIX_C_SOURCE) && \
        !defined(_GNU_SOURCE) && !defined(_BSD_SOURCE)
#    define _DEFAULT_SOURCE 1
#  endif
#endif

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
#  include <sys/time.h>
#  include <sys/wait.h>
#  include <unistd.h>
#  include <dirent.h>
#  include <fcntl.h>
#  include <sys/ioctl.h>
#  include <termios.h>
#  include <sys/select.h>
#  define forge__popen  popen
#  define forge__pclose pclose
#  ifndef EWOULDBLOCK
#    define EWOULDBLOCK EAGAIN
#  endif
#  ifndef S_ISREG
#    define S_ISREG(m) (((m) & S_IFMT) == S_IFREG)
#  endif
#  ifndef S_ISDIR
#    define S_ISDIR(m) (((m) & S_IFMT) == S_IFDIR)
#  endif
#endif

static ForgeTarget  forge__def;
static ForgeTarget *forge__now;
static ForgeTarget *forge__targets;
static int          forge__ntargets;
static int          forge__tcap;
static int          forge__err;
static int          forge__bar_on;
static int          forge__bar_tot;
static int          forge__bar_done;
static const char  *forge__bar_tn[16];
static int          forge__bar_tr[16];
static int          forge__bar_tnc;
static int          forge__bar_live;
static int          forge__verbose;
static int          forge__njobs;
static int          forge__def_jobs;
static int          forge__jobs_cli;
static ForgeStrs    forge__defaults;

static void forge__errf(const char *fmt, ...);
static void forge__warnf(const char *fmt, ...);
static int  forge__exec(ForgeStrs *cmd, int capture);
static void forge__bar_draw(void);
static void forge__clear_color(void);

static void forge__oom(void)
{
    forge__errf("out of memory");
    exit(1);
}

static int forge__vsnprintf(char *s, size_t n, const char *fmt, va_list ap)
{
#if defined(_MSC_VER) && _MSC_VER < 1900
    int r;
    if (!s || n == 0)
        return _vscprintf(fmt, ap);
    r = _vsnprintf(s, n, fmt, ap);
    if (n)
        s[n - 1] = '\0';
    if (r >= 0 && (size_t)r < n)
        return r;
    return _vscprintf(fmt, ap);
#else
    return vsnprintf(s, n, fmt, ap);
#endif
}

static int forge__snprintf(char *s, size_t n, const char *fmt, ...)
{
    va_list ap;
    int r;
    va_start(ap, fmt);
    r = forge__vsnprintf(s, n, fmt, ap);
    va_end(ap);
    return r;
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
    va_list ap;
    int n;
    size_t cap = 256;
    char *s;
    for (;;) {
        s = (char *)malloc(cap);
        if (!s)
            forge__oom();
        va_start(ap, fmt);
        n = forge__vsnprintf(s, cap, fmt, ap);
        va_end(ap);
        if (n < 0) {
            free(s);
            if (cap >= (size_t)1 << 20)
                forge__oom();
            cap *= 2;
            continue;
        }
        if ((size_t)n < cap)
            return s;
        free(s);
        cap = (size_t)n + 1;
        if (cap < (size_t)n)
            forge__oom();
    }
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

void forge__set_jobs(int n)
{
    forge__def_jobs = n < 1 ? 1 : n;
}

static int forge__nproc(void)
{
#ifdef _WIN32
    SYSTEM_INFO si;
    GetSystemInfo(&si);
    if (si.dwNumberOfProcessors < 1)
        return 1;
    return (int)si.dwNumberOfProcessors;
#else
    {
        long n = 1;
#ifdef _SC_NPROCESSORS_ONLN
        n = sysconf(_SC_NPROCESSORS_ONLN);
#endif
        return n < 1 ? 1 : (int)n;
    }
#endif
}

static void forge__resolve_jobs(void)
{
    if (forge__jobs_cli > 0)
        forge__njobs = forge__jobs_cli;
    else if (forge__jobs_cli < 0)
        forge__njobs = forge__nproc();
    else if (forge__def_jobs > 0)
        forge__njobs = forge__def_jobs;
    else
        forge__njobs = forge__nproc();
    if (forge__njobs < 1)
        forge__njobs = 1;
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
    forge__strs_copy(&t->outs, &forge__def.outs);
    forge__strs_copy(&t->argv, &forge__def.argv);
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

static const char *forge__stdflag(const char *std)
{
    char buf[32];
    const char *s = std;
    size_t n;
    if (!forge__msvc())
        return forge__fmt("-std=%s", std);
    if (forge_cc() == FORGE_CC_CLANGCL)
        return forge__fmt("/std:%s", std);
    if (s[0] == 'g' && s[1] == 'n' && s[2] == 'u')
        s += 3;
    n = strlen(s);
    if (n >= sizeof(buf))
        return forge__fmt("/std:%s", s);
    memcpy(buf, s, n + 1);
    if (strcmp(buf, "c89") == 0 || strcmp(buf, "c90") == 0)
        return NULL;
    if (strcmp(buf, "c99") == 0)
        memcpy(buf, "c11", 4);
    else if (strcmp(buf, "c18") == 0)
        memcpy(buf, "c17", 4);
    else if (strcmp(buf, "c23") == 0 || strcmp(buf, "c2x") == 0)
        memcpy(buf, "clatest", 8);
    else if (strcmp(buf, "c++98") == 0 || strcmp(buf, "c++03") == 0 ||
             strcmp(buf, "c++11") == 0)
        memcpy(buf, "c++14", 6);
    else if (strcmp(buf, "c++2a") == 0)
        memcpy(buf, "c++20", 6);
    else if (strcmp(buf, "c++23") == 0 || strcmp(buf, "c++2b") == 0)
        memcpy(buf, "c++latest", 10);
#if defined(_MSC_VER) && !defined(__clang__) && _MSC_VER < 1928
    {
        int cxx = buf[0] == 'c' && buf[1] == '+' && buf[2] == '+';
#  if _MSC_VER < 1900
        (void)cxx;
        return NULL;
#  else
        if (!cxx)
            return NULL;
#  endif
    }
#endif
    return forge__fmt("/std:%s", buf);
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

static const char *forge__obj(const char *dir, const char *src)
{
    return forge__fmt("%s/%s%s", dir, forge__base(src), forge__objext());
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

static int forge__needsx(const char *output, const char **in, int nin, int require)
{
    time_t ot, it;
    int i;
    if (!forge__mtime(output, &ot))
        return 1;
    for (i = 0; i < nin; i++) {
        if (!forge__mtime(in[i], &it)) {
            if (require) {
                forge__errf("missing `%s`", in[i]);
                return -1;
            }
            return 1;
        }
        if (it > ot)
            return 1;
    }
    return 0;
}

static int forge__needs(const char *output, const char **in, int nin)
{
    return forge__needsx(output, in, nin, 1);
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

static int forge__mkdir_out(const char *path)
{
    char *p = forge__dup(path);
    char *s;
    if (!p[0]) {
        free(p);
        return 1;
    }
    for (s = p + strlen(p); s > p; ) {
        --s;
        if (*s == '/' || *s == '\\') {
            if (s == p)
                break;
            *s = '\0';
            if (!forge__mkdirs(p)) {
                free(p);
                return 0;
            }
            break;
        }
    }
    free(p);
    return 1;
}

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

static int forge__esc(const char **p)
{
#ifndef _WIN32
    if (**p == '\\' && (*p)[1]) {
        (*p)++;
        return 1;
    }
#else
    (void)p;
#endif
    return 0;
}

static int forge__low(int c)
{
    return (c >= 'A' && c <= 'Z') ? c + 32 : c;
}

static int forge__eqc(int a, int b)
{
#ifdef _WIN32
    return forge__low(a) == forge__low(b);
#else
    return a == b;
#endif
}

static int forge__class(const char **pp, int ch)
{
    const char *p = *pp + 1;
    int neg = 0, ok = 0, a, b, c = ch;
    if (*p == '!' || *p == '^') {
        neg = 1;
        p++;
    }
    if (*p == ']') {
        ok = c == ']';
        p++;
    }
    if (!*p)
        return -1;
    while (*p != ']') {
        if (!*p)
            return -1;
        if (p[1] == '-' && p[2] && p[2] != ']') {
            a = (unsigned char)p[0];
            b = (unsigned char)p[2];
#ifdef _WIN32
            a = forge__low(a);
            b = forge__low(b);
            c = forge__low(ch);
#endif
            if (a <= c && c <= b)
                ok = 1;
            p += 3;
            continue;
        }
        if (forge__eqc((unsigned char)*p, ch))
            ok = 1;
        p++;
    }
    *pp = p;
    return neg ? !ok : ok;
}

static int forge__dotok(const char *pat)
{
    const char *p = pat;
    if (*p == '.')
        return 1;
    if (*p == '[')
        return forge__class(&p, '.') == 1;
    return 0;
}

static int forge__gmatch(const char *pat, const char *str)
{
    const char *p = pat, *s = str, *bp = NULL, *bs = NULL;
    if (*s == '.' && !forge__dotok(p))
        return 0;
    while (*s) {
        if (*p == '*') {
            while (p[1] == '*')
                p++;
            bp = ++p;
            bs = s;
            continue;
        }
        if (forge__esc(&p)) {
            if (!*p || !forge__eqc((unsigned char)*p, (unsigned char)*s))
                goto star;
            p++;
            s++;
            continue;
        }
        if (*p == '?') {
            p++;
            s++;
            continue;
        }
        if (*p == '[') {
            const char *pp = p;
            int r = forge__class(&pp, (unsigned char)*s);
            if (r > 0) {
                p = pp + 1;
                s++;
                continue;
            }
            if (r == 0)
                goto star;
        }
        if (*p && forge__eqc((unsigned char)*p, (unsigned char)*s)) {
            p++;
            s++;
            continue;
        }
    star:
        if (!bp)
            return 0;
        p = bp;
        s = ++bs;
    }
    while (*p == '*')
        p++;
    return *p == '\0';
}

static int forge__starstar(const char *s)
{
    return s[0] == '*' && s[1] == '*' && s[2] == '\0';
}

static int forge__gwild(const char *s)
{
    for (; *s; s++) {
        if (forge__esc(&s))
            continue;
        if (*s == '*' || *s == '?' || *s == '[')
            return 1;
    }
    return 0;
}

static int forge__hasglob(const char *s)
{
    int depth = 0, comma = 0;
    for (; *s; s++) {
        if (forge__esc(&s))
            continue;
        if (*s == '*' || *s == '?' || *s == '[')
            return 1;
        if (*s == '{') {
            depth++;
            comma = 0;
        } else if (*s == ',' && depth)
            comma = 1;
        else if (*s == '}' && depth) {
            if (comma)
                return 1;
            depth--;
        }
    }
    return 0;
}

static int forge__isdot(const char *n)
{
    return n[0] == '.' && (!n[1] || (n[1] == '.' && !n[2]));
}

static int forge__isfile(const char *path)
{
#ifdef _WIN32
    DWORD a = GetFileAttributesA(path);
    return a != INVALID_FILE_ATTRIBUTES && !(a & FILE_ATTRIBUTE_DIRECTORY);
#else
    struct stat st;
    return stat(path, &st) == 0 && S_ISREG(st.st_mode);
#endif
}

static int forge__can_enter(const char *path)
{
#ifdef _WIN32
    DWORD a = GetFileAttributesA(path);
    return a != INVALID_FILE_ATTRIBUTES
        && (a & FILE_ATTRIBUTE_DIRECTORY)
        && !(a & FILE_ATTRIBUTE_REPARSE_POINT);
#else
    struct stat st;
    return lstat(path, &st) == 0 && S_ISDIR(st.st_mode);
#endif
}

typedef struct {
#ifdef _WIN32
    HANDLE h;
    WIN32_FIND_DATAA fd;
    int first;
#else
    DIR *d;
#endif
} forge__dir;

static int forge__dopen(forge__dir *d, const char *path)
{
    path = path && path[0] ? path : ".";
#ifdef _WIN32
    {
        char pat[1024];
        forge__snprintf(pat, sizeof(pat), "%s\\*", path);
        d->h = FindFirstFileA(pat, &d->fd);
        d->first = 1;
        return d->h != INVALID_HANDLE_VALUE;
    }
#else
    d->d = opendir(path);
    return d->d != NULL;
#endif
}

static int forge__dread(forge__dir *d, char *name, int n)
{
    const char *src;
#ifdef _WIN32
    if (d->first)
        d->first = 0;
    else if (!FindNextFileA(d->h, &d->fd))
        return 0;
    src = d->fd.cFileName;
#else
    struct dirent *de = readdir(d->d);
    if (!de)
        return 0;
    src = de->d_name;
#endif
    strncpy(name, src, (size_t)n - 1);
    name[n - 1] = '\0';
    return 1;
}

static void forge__dclose(forge__dir *d)
{
#ifdef _WIN32
    if (d->h != INVALID_HANDLE_VALUE)
        FindClose(d->h);
#else
    if (d->d)
        closedir(d->d);
#endif
}

static int forge__rm_file(const char *path)
{
#ifdef _WIN32
    if (DeleteFileA(path))
        return 1;
    {
        DWORD e = GetLastError();
        if (e == ERROR_FILE_NOT_FOUND || e == ERROR_PATH_NOT_FOUND)
            return 1;
        SetFileAttributesA(path, FILE_ATTRIBUTE_NORMAL);
        if (DeleteFileA(path))
            return 1;
        forge__errf("remove `%s` failed (%lu)", path, (unsigned long)GetLastError());
        return 0;
    }
#else
    if (unlink(path) == 0 || errno == ENOENT)
        return 1;
    forge__errf("remove `%s`: %s", path, strerror(errno));
    return 0;
#endif
}

static int forge__rm_rf(const char *path)
{
    forge__dir dd;
    char name[1024];
    ForgeStrs kids = {0};
    int i;

#ifdef _WIN32
    {
        DWORD a = GetFileAttributesA(path);
        if (a == INVALID_FILE_ATTRIBUTES) {
            DWORD e = GetLastError();
            return e == ERROR_FILE_NOT_FOUND || e == ERROR_PATH_NOT_FOUND;
        }
        if (a & FILE_ATTRIBUTE_DIRECTORY) {
            if (a & FILE_ATTRIBUTE_REPARSE_POINT) {
                if (RemoveDirectoryA(path))
                    return 1;
                forge__errf("rmdir `%s` failed (%lu)",
                        path, (unsigned long)GetLastError());
                return 0;
            }
        } else {
            return forge__rm_file(path);
        }
    }
#else
    {
        struct stat st;
        if (lstat(path, &st) != 0)
            return errno == ENOENT;
        if (!S_ISDIR(st.st_mode))
            return forge__rm_file(path);
    }
#endif
    if (!forge__dopen(&dd, path)) {
        forge__errf("opendir `%s` failed", path);
        return 0;
    }
    while (forge__dread(&dd, name, (int)sizeof(name))) {
        if (forge__isdot(name))
            continue;
        forge__add1(&kids, forge__fmt("%s/%s", path, name));
    }
    forge__dclose(&dd);
    for (i = 0; i < kids.count; i++) {
        if (!forge__rm_rf(kids.items[i]))
            return 0;
    }
#ifdef _WIN32
    if (!RemoveDirectoryA(path)) {
        DWORD e = GetLastError();
        if (e != ERROR_FILE_NOT_FOUND && e != ERROR_PATH_NOT_FOUND) {
            forge__errf("rmdir `%s` failed (%lu)", path, (unsigned long)e);
            return 0;
        }
    }
#else
    if (rmdir(path) != 0 && errno != ENOENT) {
        forge__errf("rmdir `%s`: %s", path, strerror(errno));
        return 0;
    }
#endif
    return 1;
}

static void forge__ppush(char **buf, int *n, int *cap, const char *name)
{
    if (*n > 0 && (*buf)[*n - 1] != '/')
        forge__buf_add(buf, n, cap, "/", 1);
    forge__buf_add(buf, n, cap, name, (int)strlen(name));
}

static void forge__prew(char **buf, int *n, int save)
{
    *n = save;
    if (*buf)
        (*buf)[save] = '\0';
}

static const char *forge__gdir(char **buf, int n)
{
    return n && *buf ? *buf : ".";
}

static void forge__gwalk(char **buf, int *n, int *cap, char **segs, int nseg, ForgeStrs *out)
{
    int save = *n, i, hide;
    forge__dir dd;
    char name[1024];

    if (nseg <= 0) {
        if (*n && *buf && forge__isfile(*buf))
            forge__add1(out, forge__dup(*buf));
        return;
    }

    if (forge__starstar(segs[0])) {
        i = 0;
        while (i < nseg && forge__starstar(segs[i]))
            i++;
        forge__gwalk(buf, n, cap, segs + i, nseg - i, out);
        if (!forge__dopen(&dd, forge__gdir(buf, *n)))
            return;
        while (forge__dread(&dd, name, (int)sizeof(name))) {
            if (forge__isdot(name) || name[0] == '.')
                continue;
            forge__ppush(buf, n, cap, name);
            if (forge__can_enter(*buf))
                forge__gwalk(buf, n, cap, segs + i - 1, nseg - i + 1, out);
            forge__prew(buf, n, save);
        }
        forge__dclose(&dd);
        return;
    }

    if (!forge__gwild(segs[0])) {
        forge__ppush(buf, n, cap, segs[0]);
        forge__gwalk(buf, n, cap, segs + 1, nseg - 1, out);
        forge__prew(buf, n, save);
        return;
    }

    hide = !forge__dotok(segs[0]);
    if (!forge__dopen(&dd, forge__gdir(buf, *n)))
        return;
    while (forge__dread(&dd, name, (int)sizeof(name))) {
        if (forge__isdot(name) || (hide && name[0] == '.'))
            continue;
        if (!forge__gmatch(segs[0], name))
            continue;
        forge__ppush(buf, n, cap, name);
        forge__gwalk(buf, n, cap, segs + 1, nseg - 1, out);
        forge__prew(buf, n, save);
    }
    forge__dclose(&dd);
}

static void forge__gpat(const char *pattern, ForgeStrs *out)
{
    char *dup = forge__dup(pattern);
    char *segs[64];
    char *p, *buf = NULL;
    int nseg = 0, n = 0, cap = 0, i;

    for (i = 0; dup[i]; i++)
        if (dup[i] == '\\')
            dup[i] = '/';
    p = dup;
    if (p[0] && p[1] == ':') {
        forge__buf_add(&buf, &n, &cap, p, 2);
        p += 2;
        if (*p == '/') {
            forge__buf_add(&buf, &n, &cap, "/", 1);
            p++;
        }
    } else if (*p == '/') {
        forge__buf_add(&buf, &n, &cap, "/", 1);
        p++;
    }
    while (*p && nseg < 64) {
        segs[nseg++] = p;
        while (*p && *p != '/')
            p++;
        if (*p)
            *p++ = '\0';
        if (!segs[nseg - 1][0])
            nseg--;
    }
    forge__gwalk(&buf, &n, &cap, segs, nseg, out);
    free(dup);
    free(buf);
}

static void forge__gbrace(const char *pre, const char *pat, ForgeStrs *out)
{
    const char *p, *open = NULL, *close = NULL, *al;
    int depth = 0, comma = 0;
    for (p = pat; *p; p++) {
        if (forge__esc(&p))
            continue;
        if (*p == '{') {
            if (depth == 0)
                open = p;
            depth++;
        } else if (*p == ',' && depth == 1) {
            comma = 1;
        } else if (*p == '}' && depth) {
            if (depth == 1 && comma && open) {
                close = p;
                break;
            }
            depth--;
        }
    }
    if (!close) {
        forge__add1(out, forge__fmt("%s%s", pre, pat));
        return;
    }
    al = open + 1;
    depth = 1;
    for (p = open + 1; p <= close; p++) {
        if (p < close && forge__esc(&p))
            continue;
        if (*p == '{')
            depth++;
        else if (*p == '}' || *p == ',') {
            if (*p == '}')
                depth--;
            if ((*p == ',' && depth == 1) || (*p == '}' && depth == 0)) {
                char *np = forge__fmt("%s%.*s%.*s", pre,
                        (int)(open - pat), pat, (int)(p - al), al);
                forge__gbrace(np, close + 1, out);
                free(np);
                al = p + 1;
            }
        }
    }
}

static int forge__cmpstr(const void *a, const void *b)
{
    return strcmp(*(char *const *)a, *(char *const *)b);
}

static int forge__glob(const char *pattern, ForgeStrs *out)
{
    ForgeStrs pats = {0};
    int i, start = out->count, w;
    forge__gbrace("", pattern, &pats);
    for (i = 0; i < pats.count; i++)
        forge__gpat(pats.items[i], out);
    for (i = 0; i < pats.count; i++)
        free((void *)pats.items[i]);
    free(pats.items);
    if (out->count <= start)
        return 1;
    qsort(out->items + start, (size_t)(out->count - start), sizeof(char *), forge__cmpstr);
    w = start + 1;
    for (i = start + 1; i < out->count; i++) {
        if (strcmp(out->items[i], out->items[w - 1]) == 0)
            free((void *)out->items[i]);
        else
            out->items[w++] = out->items[i];
    }
    out->count = w;
    return 0;
}

void forge__add_src(ForgeStrs *s, ...)
{
    va_list ap;
    const char *x;
    va_start(ap, s);
    while ((x = va_arg(ap, const char *)) != NULL) {
        if (forge__hasglob(x)) {
            ForgeStrs g = {0};
            if (forge__glob(x, &g) != 0) {
                forge__errf("no files match `%s`", x);
                forge__err = 1;
            } else {
                forge__strs_cat(s, &g);
            }
            free(g.items);
        } else {
            forge__add1(s, x);
        }
    }
    va_end(ap);
}

#ifdef _WIN32
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

static int forge__tty(void)
{
    static int once, yes;
#ifdef _WIN32
    HANDLE h;
    DWORD mode = 0;
#endif
    if (once)
        return yes;
    once = 1;
#ifdef _WIN32
    h = GetStdHandle(STD_ERROR_HANDLE);
    if (!GetConsoleMode(h, &mode))
        return 0;
    yes = SetConsoleMode(h, mode | 0x0004 /* ENABLE_VIRTUAL_TERMINAL_PROCESSING */) ? 1 : 0;
#else
    yes = isatty(STDERR_FILENO);
#endif
    return yes;
}

static int forge__color(void)
{
    static int once, yes;
    const char *no;
    if (once)
        return yes;
    once = 1;
    no = getenv("NO_COLOR");
    yes = !(no && no[0]) && forge__tty();
    return yes;
}

static int forge__cols(void)
{
#ifdef _WIN32
    CONSOLE_SCREEN_BUFFER_INFO info;
    HANDLE h = GetStdHandle(STD_ERROR_HANDLE);
    if (GetConsoleScreenBufferInfo(h, &info)) {
        int w = info.srWindow.Right - info.srWindow.Left + 1;
        if (w > 20)
            return w;
    }
#else
#ifdef TIOCGWINSZ
    {
        struct winsize ws;
        if (ioctl(STDERR_FILENO, TIOCGWINSZ, &ws) == 0 && ws.ws_col > 20)
            return ws.ws_col;
    }
#endif
#endif
    return 80;
}

static void forge__bar_erase(void)
{
    if (forge__bar_on)
        fputs("\r\033[K", stderr);
}

static void forge__bar_off(void)
{
    if (!forge__bar_on)
        return;
    forge__bar_erase();
    fputs("\033[?25h", stderr);
    fflush(stderr);
    forge__bar_on = 0;
}

static void forge__bar_push(const char *name)
{
    int i;
    if (!name || !name[0])
        return;
    for (i = 0; i < forge__bar_tnc; i++) {
        if (strcmp(forge__bar_tn[i], name) == 0) {
            forge__bar_tr[i]++;
            forge__bar_draw();
            return;
        }
    }
    if (forge__bar_tnc < (int)(sizeof(forge__bar_tn) / sizeof(forge__bar_tn[0]))) {
        forge__bar_tn[forge__bar_tnc] = name;
        forge__bar_tr[forge__bar_tnc] = 1;
        forge__bar_tnc++;
    }
    forge__bar_draw();
}

static void forge__bar_pop(const char *name)
{
    int i, j;
    if (!name)
        return;
    for (i = 0; i < forge__bar_tnc; i++) {
        if (strcmp(forge__bar_tn[i], name) == 0) {
            if (--forge__bar_tr[i] > 0) {
                forge__bar_draw();
                return;
            }
            for (j = i + 1; j < forge__bar_tnc; j++) {
                forge__bar_tn[j - 1] = forge__bar_tn[j];
                forge__bar_tr[j - 1] = forge__bar_tr[j];
            }
            forge__bar_tnc--;
            forge__bar_draw();
            return;
        }
    }
}

static void forge__bar_names(char *dst, int cap)
{
    int i, n = 0;
    if (cap < 1)
        return;
    dst[0] = '\0';
    for (i = 0; i < forge__bar_tnc; i++) {
        int k = (int)strlen(forge__bar_tn[i]);
        if (n && n + 1 < cap) {
            dst[n++] = ' ';
            dst[n] = '\0';
        }
        if (n + k >= cap)
            break;
        memcpy(dst + n, forge__bar_tn[i], (size_t)k);
        n += k;
        dst[n] = '\0';
    }
}

static void forge__bar_draw(void)
{
    char bar[48], line[512], names[256];
    int cols, inner = 20, fill, i, n, cur;

    if (!forge__bar_on)
        return;
    cols = forge__cols();
    if (cols > 500)
        cols = 500;
    cur = forge__bar_done + forge__bar_live;
    if (cur > forge__bar_tot)
        cur = forge__bar_tot;
    fill = forge__bar_tot ? (inner * cur) / forge__bar_tot : 0;
    if (cur > 0 && fill == 0)
        fill = 1;
    if (fill == inner && cur < forge__bar_tot)
        fill = inner - 1;
    for (i = 0; i < inner; i++) {
        if (fill > 0 && i == fill - 1 && fill < inner)
            bar[i] = '>';
        else if (i < fill)
            bar[i] = '=';
        else
            bar[i] = ' ';
    }
    bar[inner] = '\0';
    forge__bar_names(names, (int)sizeof(names));
    if (names[0])
        n = forge__snprintf(line, sizeof(line), "  [%s] %d/%d    %s",
                bar, cur, forge__bar_tot, names);
    else
        n = forge__snprintf(line, sizeof(line), "  [%s] %d/%d",
                bar, cur, forge__bar_tot);
    if (n < 0)
        n = 0;
    if (n >= cols)
        line[cols - 1] = '\0';
    fprintf(stderr, "\r\033[K%s", line);
    fflush(stderr);
}

static void forge__bar_begin(int tot)
{
    static int once;
    forge__bar_tot = tot;
    forge__bar_done = 0;
    forge__bar_tnc = 0;
    forge__bar_live = 0;
    forge__bar_on = tot > 0 && forge__tty() && !forge__verbose;
    if (!forge__bar_on)
        return;
    if (!once) {
        atexit(forge__bar_off);
        once = 1;
    }
    fputs("\033[?25l", stderr);
    forge__bar_draw();
}

static void forge__printcmd(ForgeStrs *cmd)
{
    int i;
    if (forge__bar_on)
        forge__bar_erase();
    fprintf(stderr, "         ");
    for (i = 0; i < cmd->count; i++) {
        if (i)
            fputc(' ', stderr);
        fputs(cmd->items[i], stderr);
    }
    fputc('\n', stderr);
    if (forge__bar_on)
        forge__bar_draw();
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
    if (forge__bar_on)
        forge__bar_erase();
    if (forge__color())
        fprintf(stderr, "  %s%-6s\033[0m %s\n", col, tag, path);
    else
        fprintf(stderr, "  %-6s %s\n", tag, path);
    if (forge__bar_on)
        forge__bar_draw();
}

static void forge__errf(const char *fmt, ...)
{
    va_list ap;
    if (forge__bar_on)
        forge__bar_off();
    if (forge__color())
        fprintf(stderr, "  \033[1;31merror\033[0m  ");
    else
        fprintf(stderr, "  error  ");
    va_start(ap, fmt);
    vfprintf(stderr, fmt, ap);
    va_end(ap);
    fprintf(stderr, "\n");
}

static void forge__warnf(const char *fmt, ...)
{
    va_list ap;
    if (forge__bar_on)
        forge__bar_off();
    if (forge__color())
        fprintf(stderr, "  \033[1;33mwarn\033[0m   ");
    else
        fprintf(stderr, "  warn   ");
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

static int forge__name_echo(const char *s, int n)
{
    static const char *exts[] = {
        ".c", ".cc", ".cpp", ".cxx", ".h", ".hh", ".hpp", ".m", ".mm", NULL
    };
    const char **e;
    int i, el;
    if (n < 3)
        return 0;
    for (i = 0; i < n; i++) {
        unsigned char c = (unsigned char)s[i];
        if (c <= ' ' || c == ':' || c == '(')
            return 0;
    }
    for (e = exts; *e; e++) {
        el = (int)strlen(*e);
        if (n > el) {
            int ok = 1, j;
            for (j = 0; j < el; j++) {
                if (!forge__eqc(s[n - el + j], (*e)[j])) {
                    ok = 0;
                    break;
                }
            }
            if (ok)
                return 1;
        }
    }
    return 0;
}

static void forge__emit_child(const char *buf, int n, int ok)
{
    char *out = NULL;
    int i = 0, on = 0, ocap = 0;
    if (!buf || n <= 0)
        return;
    while (i < n) {
        int start = i, len;
        while (i < n && buf[i] != '\n')
            i++;
        len = i - start;
        if (len > 0 && buf[start + len - 1] == '\r')
            len--;
        if (!(forge__msvc() && forge__name_echo(buf + start, len))) {
            forge__buf_add(&out, &on, &ocap, buf + start, i - start);
            if (i < n)
                forge__buf_add(&out, &on, &ocap, "\n", 1);
        }
        if (i < n)
            i++;
    }
    if (!out)
        return;
    if (forge__bar_on)
        forge__bar_erase();
    fwrite(out, 1, (size_t)on, stderr);
    if (on > 0 && out[on - 1] != '\n')
        fputc('\n', stderr);
    fflush(stderr);
    if (ok && forge__bar_on)
        forge__bar_draw();
    free(out);
}

typedef struct ForgeSlot {
#ifdef _WIN32
    HANDLE proc, th, rd;
#else
    pid_t pid;
    int fd;
#endif
    int used, ok;
    char *obuf;
    int on, ocap;
    ForgeStrs cmd;
    const char *tname;
    int job;
} ForgeSlot;

static void forge__slot_clear(ForgeSlot *s)
{
#ifdef _WIN32
    s->proc = NULL;
    s->th = NULL;
    s->rd = NULL;
#else
    s->pid = 0;
    s->fd = -1;
#endif
    s->used = 0;
    s->ok = 0;
    s->obuf = NULL;
    s->on = 0;
    s->ocap = 0;
    s->cmd.items = NULL;
    s->cmd.count = 0;
    s->cmd.cap = 0;
    s->tname = NULL;
    s->job = -1;
}

static void forge__drain(ForgeSlot *s)
{
    char tmp[4096];
#ifdef _WIN32
    DWORD avail, got;
    if (!s->rd)
        return;
    for (;;) {
        avail = 0;
        if (!PeekNamedPipe(s->rd, NULL, 0, NULL, &avail, NULL) || avail == 0)
            break;
        got = 0;
        if (!ReadFile(s->rd, tmp, sizeof(tmp), &got, NULL) || got == 0)
            break;
        forge__buf_add(&s->obuf, &s->on, &s->ocap, tmp, (int)got);
    }
#else
    ssize_t r;
    if (s->fd < 0)
        return;
    for (;;) {
        r = read(s->fd, tmp, sizeof(tmp));
        if (r > 0) {
            forge__buf_add(&s->obuf, &s->on, &s->ocap, tmp, (int)r);
            continue;
        }
        if (r < 0 && (errno == EINTR || errno == EAGAIN || errno == EWOULDBLOCK))
            break;
        break;
    }
#endif
}

static int forge__spawn(ForgeStrs *cmd, ForgeSlot *s, int capture)
{
    if (cmd->count < 1) {
        forge__errf("empty command");
        return 0;
    }
    forge__slot_clear(s);
#ifdef _WIN32
    {
        STARTUPINFOA si;
        PROCESS_INFORMATION pi;
        char *line = forge__cmdline(cmd);
        HANDLE wr = NULL;
        memset(&si, 0, sizeof(si));
        memset(&pi, 0, sizeof(pi));
        si.cb = sizeof(si);
        if (capture) {
            SECURITY_ATTRIBUTES sa;
            sa.nLength = sizeof(sa);
            sa.lpSecurityDescriptor = NULL;
            sa.bInheritHandle = TRUE;
            if (!CreatePipe(&s->rd, &wr, &sa, 0)) {
                forge__errf("CreatePipe failed (%lu)", (unsigned long)GetLastError());
                free(line);
                return 0;
            }
            SetHandleInformation(s->rd, HANDLE_FLAG_INHERIT, 0);
            si.dwFlags |= STARTF_USESTDHANDLES;
            si.hStdInput = GetStdHandle(STD_INPUT_HANDLE);
            si.hStdOutput = wr;
            si.hStdError = wr;
        }
        if (!CreateProcessA(NULL, line, NULL, NULL, capture ? TRUE : FALSE,
                0, NULL, NULL, &si, &pi)) {
            forge__errf("CreateProcess failed (%lu)", (unsigned long)GetLastError());
            if (s->rd)
                CloseHandle(s->rd);
            if (wr)
                CloseHandle(wr);
            free(line);
            s->rd = NULL;
            return 0;
        }
        free(line);
        if (wr)
            CloseHandle(wr);
        s->proc = pi.hProcess;
        s->th = pi.hThread;
        s->used = 1;
        return 1;
    }
#else
    {
        int fds[2] = { -1, -1 };
        pid_t pid;
        if (capture && pipe(fds) != 0) {
            forge__errf("pipe: %s", strerror(errno));
            return 0;
        }
        pid = fork();
        if (pid < 0) {
            forge__errf("fork: %s", strerror(errno));
            if (fds[0] >= 0) {
                close(fds[0]);
                close(fds[1]);
            }
            return 0;
        }
        if (pid == 0) {
            char **argv = (char **)calloc((size_t)cmd->count + 1, sizeof(char *));
            int i;
            if (capture) {
                close(fds[0]);
                dup2(fds[1], 1);
                dup2(fds[1], 2);
                close(fds[1]);
            }
            if (!argv)
                _exit(127);
            for (i = 0; i < cmd->count; i++)
                argv[i] = (char *)cmd->items[i];
            execvp(argv[0], argv);
            fprintf(stderr, "execvp `%s`: %s\n", argv[0], strerror(errno));
            _exit(127);
        }
        if (capture) {
            close(fds[1]);
            fcntl(fds[0], F_SETFL, O_NONBLOCK);
            s->fd = fds[0];
        }
        s->pid = pid;
        s->used = 1;
        return 1;
    }
#endif
}

static int forge__slot_reap(ForgeSlot *s)
{
#ifdef _WIN32
    DWORD code = 1;
    forge__drain(s);
    if (s->rd) {
        char tmp[4096];
        DWORD got;
        for (;;) {
            if (!ReadFile(s->rd, tmp, sizeof(tmp), &got, NULL) || got == 0)
                break;
            forge__buf_add(&s->obuf, &s->on, &s->ocap, tmp, (int)got);
        }
        CloseHandle(s->rd);
        s->rd = NULL;
    }
    if (s->proc) {
        WaitForSingleObject(s->proc, INFINITE);
        GetExitCodeProcess(s->proc, &code);
        CloseHandle(s->proc);
        s->proc = NULL;
    }
    if (s->th) {
        CloseHandle(s->th);
        s->th = NULL;
    }
    s->ok = code == 0;
#else
    int st = 0;
    forge__drain(s);
    if (s->fd >= 0) {
        int fl = fcntl(s->fd, F_GETFL, 0);
        if (fl >= 0)
            fcntl(s->fd, F_SETFL, fl & ~O_NONBLOCK);
        forge__drain(s);
        close(s->fd);
        s->fd = -1;
    }
    if (s->pid > 0) {
        if (waitpid(s->pid, &st, 0) < 0) {
            forge__errf("waitpid: %s", strerror(errno));
            s->ok = 0;
            s->pid = 0;
            s->used = 0;
            forge__emit_child(s->obuf, s->on, 0);
            free(s->obuf);
            s->obuf = NULL;
            return 0;
        }
        s->ok = WIFEXITED(st) && WEXITSTATUS(st) == 0;
        s->pid = 0;
    }
#endif
    forge__emit_child(s->obuf, s->on, s->ok);
    if (!s->ok)
        forge__cmdfail(&s->cmd);
    free(s->obuf);
    s->obuf = NULL;
    s->used = 0;
    return 1;
}

static int forge__waitany(ForgeSlot *slots, int n, int *idx)
{
    int i;
#ifdef _WIN32
    HANDLE hs[64];
    int map[64], m = 0;
    DWORD wr;
    for (i = 0; i < n; i++) {
        if (slots[i].used)
            forge__drain(&slots[i]);
    }
    for (i = 0; i < n; i++) {
        if (!slots[i].used || !slots[i].proc)
            continue;
        hs[m] = slots[i].proc;
        map[m] = i;
        m++;
    }
    if (m < 1)
        return -1;
    wr = WaitForMultipleObjects((DWORD)m, hs, FALSE, 50);
    if (wr == WAIT_TIMEOUT)
        return 0;
    if (wr >= WAIT_OBJECT_0 && wr < WAIT_OBJECT_0 + (DWORD)m) {
        *idx = map[(int)(wr - WAIT_OBJECT_0)];
        return forge__slot_reap(&slots[*idx]) ? 1 : -1;
    }
    forge__errf("WaitForMultipleObjects failed (%lu)", (unsigned long)GetLastError());
    return -1;
#else
    pid_t pid;
    int st = 0;
    fd_set rf;
    int maxfd = -1;
    struct timeval tv;
    for (i = 0; i < n; i++) {
        if (slots[i].used)
            forge__drain(&slots[i]);
    }
    pid = waitpid(-1, &st, WNOHANG);
    if (pid < 0) {
        forge__errf("waitpid: %s", strerror(errno));
        return -1;
    }
    if (pid == 0) {
        FD_ZERO(&rf);
        for (i = 0; i < n; i++) {
            if (!slots[i].used || slots[i].fd < 0)
                continue;
#ifdef FD_SETSIZE
            if (slots[i].fd >= FD_SETSIZE)
                continue;
#endif
            FD_SET(slots[i].fd, &rf);
            if (slots[i].fd > maxfd)
                maxfd = slots[i].fd;
        }
        tv.tv_sec = 0;
        tv.tv_usec = 50000;
        if (maxfd >= 0)
            select(maxfd + 1, &rf, NULL, NULL, &tv);
        else {
            tv.tv_sec = 0;
            tv.tv_usec = 50000;
            select(0, NULL, NULL, NULL, &tv);
        }
        return 0;
    }
    for (i = 0; i < n; i++) {
        if (slots[i].used && slots[i].pid == pid) {
            *idx = i;
            slots[i].ok = WIFEXITED(st) && WEXITSTATUS(st) == 0;
            slots[i].pid = 0;
            forge__drain(&slots[i]);
            if (slots[i].fd >= 0) {
                close(slots[i].fd);
                slots[i].fd = -1;
            }
            forge__emit_child(slots[i].obuf, slots[i].on, slots[i].ok);
            if (!slots[i].ok)
                forge__cmdfail(&slots[i].cmd);
            free(slots[i].obuf);
            slots[i].obuf = NULL;
            slots[i].used = 0;
            return 1;
        }
    }
    return 0;
#endif
}

static int forge__exec(ForgeStrs *cmd, int capture)
{
    ForgeSlot s;
    forge__slot_clear(&s);
    if (!forge__spawn(cmd, &s, capture))
        return 0;
    forge__strs_copy(&s.cmd, cmd);
    if (!forge__slot_reap(&s))
        return 0;
    return s.ok;
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
    case FORGE_KIND_CMD:
        if (t->outs.count < 1)
            return NULL;
        return t->outs.items[0];
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
    if (t->kind == FORGE_KIND_CMD) {
        if (t->outs.count < 1)
            return NULL;
        return t->outs.items[0];
    }
    if (t->kind == FORGE_KIND_DLL && forge__msvc())
        return forge__fmt("%s/%s.lib", t->outdir, t->name);
    return forge__out(t);
}

const char *forge_path(const char *name)
{
    ForgeTarget *t = forge__find(name);
    if (!t) {
        forge__errf("unknown target `%s`", name);
        forge__err = 1;
        return "";
    }
    if (t->kind == FORGE_KIND_GROUP) {
        forge__errf("target `%s` is a group", name);
        forge__err = 1;
        return "";
    }
    if (t->kind == FORGE_KIND_CMD) {
        if (t->outs.count < 1) {
            forge__errf("target `%s` has no outs", name);
            forge__err = 1;
            return "";
        }
        return t->outs.items[0];
    }
    {
        const char *o = forge__out(t);
        if (!o) {
            forge__errf("target `%s` has no output", name);
            forge__err = 1;
            return "";
        }
        return o;
    }
}

const char *forge_exe(const char *name)
{
    ForgeTarget *t = forge__find(name);
    if (!t) {
        forge__errf("unknown target `%s`", name);
        forge__err = 1;
        return "";
    }
    if (t->kind == FORGE_KIND_GROUP) {
        forge__errf("target `%s` is a group", name);
        forge__err = 1;
        return "";
    }
    if (t->kind != FORGE_KIND_EXE && t->kind != FORGE_KIND_DLL) {
        forge__errf("target `%s` is not an executable", name);
        forge__err = 1;
        return "";
    }
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

    forge__snprintf(cmd, sizeof(cmd), "pkg-config --cflags --libs %s", name);
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
        if (u->kind == FORGE_KIND_CMD) {
            int j;
            for (j = 0; j < u->outs.count; j++)
                forge__add1(arts, u->outs.items[j]);
        } else if (u->kind == FORGE_KIND_LIB || u->kind == FORGE_KIND_DLL)
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
    if (t->std) {
        const char *f = forge__stdflag(t->std);
        if (f)
            forge__add1(cmd, f);
    }
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
#if defined(_MSC_VER) && _MSC_VER >= 1800
    if (msvc && t->debug && forge__njobs > 1)
        forge__add1(cmd, "/FS");
#endif
    if (t->warn) {
        if (msvc) {
            forge__add1(cmd, "/W4");
        } else {
            forge__add1(cmd, "-Wall");
#if !defined(__TINYC__) && (!defined(__GNUC__) || defined(__clang__) || \
     __GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
            forge__add1(cmd, "-Wextra");
#endif
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

enum {
    FORGE_J_CC,
    FORGE_J_AR,
    FORGE_J_LD,
    FORGE_J_CMD
};

typedef struct ForgeJob {
    int kind;
    ForgeTarget *t;
    const char *src;
    const char *obj;
    int cxx;
    int wait;
    int *kids;
    int nk, kcap;
} ForgeJob;

static int forge__job_add(ForgeJob **jobs, int *n, int *cap, ForgeJob *src)
{
    if (*n >= *cap) {
        *cap = *cap ? *cap * 2 : 32;
        *jobs = (ForgeJob *)realloc(*jobs, (size_t)*cap * sizeof(ForgeJob));
        if (!*jobs)
            forge__oom();
    }
    (*jobs)[*n] = *src;
    return (*n)++;
}

static void forge__job_edge(ForgeJob *jobs, int from, int to)
{
    ForgeJob *a = &jobs[from];
    if (a->nk >= a->kcap) {
        a->kcap = a->kcap ? a->kcap * 2 : 4;
        a->kids = (int *)realloc(a->kids, (size_t)a->kcap * sizeof(int));
        if (!a->kids)
            forge__oom();
    }
    a->kids[a->nk++] = to;
    jobs[to].wait++;
}

static void forge__acc_of(ForgeTarget *t, ForgeTarget *acc, ForgeStrs *arts)
{
    ForgeStrs seen = {0};
    memset(acc, 0, sizeof(*acc));
    acc->kind = t->kind;
    acc->outdir = t->outdir;
    acc->name = t->name;
    acc->std = t->std;
    acc->opt = t->opt;
    acc->debug = t->debug;
    acc->warn = t->warn;
    acc->pic = t->pic;
    forge__merge(acc, t);
    forge__gather(t, acc, arts, &seen);
}

static void forge__cmd_cc(ForgeJob *j, ForgeStrs *cmd)
{
    ForgeTarget acc;
    ForgeStrs arts = {0};
    forge__acc_of(j->t, &acc, &arts);
    cmd->count = 0;
    forge__add1(cmd, forge__ccbin(j->cxx));
    if (forge__msvc()) {
        forge__add1(cmd, "/nologo");
        forge__add1(cmd, "/c");
        forge__add1(cmd, forge__fmt("/Fo%s", j->obj));
    } else {
        forge__add1(cmd, "-c");
        forge__add1(cmd, "-o");
        forge__add1(cmd, j->obj);
    }
    forge__emit_compile(cmd, &acc);
    forge__add1(cmd, j->src);
}

static void forge__cmd_link(ForgeJob *j, ForgeStrs *cmd)
{
    ForgeTarget acc, *t = j->t;
    ForgeStrs arts = {0};
    char *objdir = forge__fmt("%s/%s", t->outdir, t->name);
    const char *out = forge__out(t);
    int i, cxx = 0;
    forge__acc_of(t, &acc, &arts);
    for (i = 0; i < t->srcs.count; i++) {
        if (forge__cxx(t->srcs.items[i]))
            cxx = 1;
    }
    cmd->count = 0;
    if (t->kind == FORGE_KIND_LIB) {
        if (forge__msvc()) {
            forge__add1(cmd, "lib.exe");
            forge__add1(cmd, "/nologo");
            forge__add1(cmd, forge__fmt("/OUT:%s", out));
        } else {
            forge__add1(cmd, "ar");
            forge__add1(cmd, "rcs");
            forge__add1(cmd, out);
        }
        for (i = 0; i < t->srcs.count; i++)
            forge__add1(cmd, forge__obj(objdir, t->srcs.items[i]));
        return;
    }
    forge__add1(cmd, forge__ccbin(cxx));
    if (forge__msvc()) {
        forge__add1(cmd, "/nologo");
        if (t->kind == FORGE_KIND_DLL)
            forge__add1(cmd, "/LD");
        forge__add1(cmd, forge__fmt("/Fe%s", out));
    } else {
        if (t->kind == FORGE_KIND_DLL)
            forge__add1(cmd, "-shared");
        forge__add1(cmd, "-o");
        forge__add1(cmd, out);
    }
    for (i = 0; i < t->srcs.count; i++)
        forge__add1(cmd, forge__obj(objdir, t->srcs.items[i]));
    for (i = 0; i < arts.count; i++)
        forge__add1(cmd, arts.items[i]);
    if (forge__msvc() && acc.libdirs.count > 0)
        forge__add1(cmd, "/link");
    for (i = 0; i < acc.libdirs.count; i++)
        forge__add1(cmd, forge__fmt(forge__msvc() ? "/LIBPATH:%s" : "-L%s", acc.libdirs.items[i]));
    for (i = 0; i < acc.libs.count; i++)
        forge__emit_lib(cmd, acc.libs.items[i]);
    for (i = 0; i < acc.pkg.count; i++) {
        const char *s = acc.pkg.items[i];
        if (forge__isincdef(s))
            continue;
        forge__add1(cmd, s);
    }
}

static int forge__start_job(ForgeJob *j, ForgeSlot *s, int ji)
{
    ForgeStrs cmd = {0};
    const char *tag, *path;
    if (j->kind == FORGE_J_CMD) {
        int i;
        for (i = 0; i < j->t->argv.count; i++)
            forge__add1(&cmd, j->t->argv.items[i]);
        for (i = 0; i < j->t->outs.count; i++) {
            if (!forge__mkdir_out(j->t->outs.items[i]))
                return 0;
        }
        tag = "CMD";
        path = j->t->name;
    } else if (j->kind == FORGE_J_CC) {
        forge__cmd_cc(j, &cmd);
        tag = j->cxx ? "CXX" : "CC";
        path = j->src;
    } else {
        forge__cmd_link(j, &cmd);
        if (j->kind == FORGE_J_AR)
            tag = "AR";
        else
            tag = j->t->kind == FORGE_KIND_DLL ? "DLL" : "LD";
        path = forge__out(j->t);
    }
    forge__say(tag, path);
    if (forge__verbose)
        forge__printcmd(&cmd);
    if (!forge__spawn(&cmd, s, 1))
        return 0;
    s->tname = j->t->name;
    s->job = ji;
    forge__strs_copy(&s->cmd, &cmd);
    return 1;
}

static int forge__is_out(const ForgeStrs *outs, const char *p)
{
    int i;
    for (i = 0; i < outs->count; i++)
        if (strcmp(outs->items[i], p) == 0)
            return 1;
    return 0;
}

static void forge__use_products(ForgeTarget *u, ForgeStrs *products)
{
    int j;
    if (u->kind == FORGE_KIND_EXE || u->kind == FORGE_KIND_LIB || u->kind == FORGE_KIND_DLL) {
        const char *p = forge__linkfile(u);
        if (p)
            forge__add1(products, p);
    } else if (u->kind == FORGE_KIND_CMD) {
        for (j = 0; j < u->outs.count; j++)
            forge__add1(products, u->outs.items[j]);
    }
}

static void forge__use_inputs(ForgeTarget *t, ForgeStrs *inputs)
{
    int i;
    for (i = 0; i < t->uses.count; i++) {
        ForgeTarget *u = forge__find(t->uses.items[i]);
        if (!u)
            continue;
        forge__use_products(u, inputs);
    }
}

static void forge__cmd_inputs(ForgeTarget *t, ForgeStrs *inputs)
{
    int i;
    forge__use_inputs(t, inputs);
    for (i = 0; i < t->argv.count; i++) {
        const char *a = t->argv.items[i];
        if (a[0] == '-')
            continue;
        if (forge__is_out(&t->outs, a))
            continue;
        if (forge__isfile(a) && !forge__has(inputs, a))
            forge__add1(inputs, a);
    }
}

static int forge__cmd_uptodate(ForgeTarget *t, const ForgeStrs *inputs)
{
    int i, j;
    time_t ot, it;
    for (i = 0; i < t->outs.count; i++) {
        if (!forge__mtime(t->outs.items[i], &ot))
            return 0;
        for (j = 0; j < inputs->count; j++) {
            if (!forge__mtime(inputs->items[j], &it))
                return 0;
            if (it > ot)
                return 0;
        }
    }
    return 1;
}

static int forge__mark_need(ForgeTarget *t)
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
        if (!forge__mark_need(u))
            return 0;
    }
    t->color = 2;
    return 1;
}

static int forge__collect_target(ForgeTarget *t, ForgeJob **jobs, int *nj, int *cap, int *link_of)
{
    char *objdir;
    ForgeStrs objs = {0}, arts = {0}, inputs = {0}, seen = {0};
    ForgeTarget acc;
    int i, need, cc0, ncc = 0, link, ti;
    const char *out;

    if (t->kind == FORGE_KIND_GROUP)
        return 1;
    if (t->kind == FORGE_KIND_CMD) {
        ForgeStrs cmdin = {0};
        ForgeJob j;
        ti = (int)(t - forge__targets);
        if (t->outs.count < 1) {
            forge__errf("target `%s` has no outs", t->name);
            return 0;
        }
        if (t->argv.count < 1) {
            forge__errf("target `%s` has no argv", t->name);
            return 0;
        }
        forge__cmd_inputs(t, &cmdin);
        if (forge__cmd_uptodate(t, &cmdin))
            return 1;
        memset(&j, 0, sizeof(j));
        j.kind = FORGE_J_CMD;
        j.t = t;
        link = forge__job_add(jobs, nj, cap, &j);
        link_of[ti] = link;
        return 1;
    }
    if (t->srcs.count < 1) {
        forge__errf("target `%s` has no sources", t->name);
        return 0;
    }
    if (!forge__mkdirs(t->outdir))
        return 0;
    objdir = forge__fmt("%s/%s", t->outdir, t->name);
    if (!forge__mkdirs(objdir))
        return 0;
    ti = (int)(t - forge__targets);
    cc0 = *nj;
    for (i = 0; i < t->srcs.count; i++) {
        const char *src = t->srcs.items[i];
        const char *obj = forge__obj(objdir, src);
        int is_cxx = forge__cxx(src);
        need = forge__needs(obj, &src, 1);
        if (need < 0)
            return 0;
        forge__add1(&objs, obj);
        if (need) {
            ForgeJob j;
            memset(&j, 0, sizeof(j));
            j.kind = FORGE_J_CC;
            j.t = t;
            j.src = src;
            j.obj = obj;
            j.cxx = is_cxx;
            forge__job_add(jobs, nj, cap, &j);
            ncc++;
        }
    }
    memset(&acc, 0, sizeof(acc));
    acc.kind = t->kind;
    forge__merge(&acc, t);
    forge__gather(t, &acc, &arts, &seen);
    out = forge__out(t);
    for (i = 0; i < objs.count; i++)
        forge__add1(&inputs, objs.items[i]);
    for (i = 0; i < arts.count; i++)
        forge__add1(&inputs, arts.items[i]);
    need = forge__needsx(out, inputs.items, inputs.count, 0);
    if (need < 0)
        return 0;
    if (ncc > 0)
        need = 1;
    if (!need)
        return 1;
    {
        ForgeJob j;
        memset(&j, 0, sizeof(j));
        j.kind = t->kind == FORGE_KIND_LIB ? FORGE_J_AR : FORGE_J_LD;
        j.t = t;
        link = forge__job_add(jobs, nj, cap, &j);
        link_of[ti] = link;
        for (i = 0; i < ncc; i++)
            forge__job_edge(*jobs, cc0 + i, link);
    }
    return 1;
}

static int forge__collect_jobs(ForgeStrs *want, ForgeJob **jobs, int *nj)
{
    int *link_of, cap = 0, i, k;
    *nj = 0;
    *jobs = NULL;
    link_of = (int *)malloc((size_t)forge__ntargets * sizeof(int));
    if (!link_of)
        forge__oom();
    for (i = 0; i < forge__ntargets; i++)
        link_of[i] = -1;
    if (want && want->count > 0) {
        for (i = 0; i < want->count; i++) {
            if (!forge__mark_need(forge__find(want->items[i]))) {
                free(link_of);
                return 0;
            }
        }
        for (i = 0; i < forge__ntargets; i++) {
            if (forge__targets[i].color != 2)
                continue;
            if (!forge__collect_target(&forge__targets[i], jobs, nj, &cap, link_of)) {
                free(link_of);
                return 0;
            }
        }
        forge__clear_color();
    } else {
        for (i = 0; i < forge__ntargets; i++) {
            if (forge__targets[i].kind == FORGE_KIND_GROUP)
                continue;
            if (!forge__mark_need(&forge__targets[i])) {
                free(link_of);
                return 0;
            }
        }
        forge__clear_color();
        for (i = 0; i < forge__ntargets; i++) {
            if (!forge__collect_target(&forge__targets[i], jobs, nj, &cap, link_of)) {
                free(link_of);
                return 0;
            }
        }
    }
    for (i = 0; i < forge__ntargets; i++) {
        ForgeTarget *t = &forge__targets[i];
        if (link_of[i] < 0)
            continue;
        for (k = 0; k < t->uses.count; k++) {
            ForgeTarget *u = forge__find(t->uses.items[k]);
            int ui;
            if (!u || u->kind == FORGE_KIND_GROUP)
                continue;
            ui = (int)(u - forge__targets);
            if (link_of[ui] >= 0)
                forge__job_edge(*jobs, link_of[ui], link_of[i]);
        }
    }
    free(link_of);
    return 1;
}

static int forge__sched(ForgeJob *jobs, int nj)
{
    int *ready, nr = 0, rh = 0, i, live = 0, fail = 0, finished = 0, nslot;
    ForgeSlot *slots;
    if (nj < 1)
        return 1;
    nslot = forge__njobs;
    if (nslot < 1)
        nslot = 1;
#ifdef _WIN32
    if (nslot > 64)
        nslot = 64;
#elif defined(FD_SETSIZE)
    if (nslot > FD_SETSIZE / 2)
        nslot = FD_SETSIZE / 2;
#endif
    if (nslot > nj)
        nslot = nj;
    ready = (int *)malloc((size_t)nj * sizeof(int));
    slots = (ForgeSlot *)calloc((size_t)nslot, sizeof(ForgeSlot));
    if (!ready || !slots)
        forge__oom();
    for (i = 0; i < nslot; i++)
        forge__slot_clear(&slots[i]);
    for (i = 0; i < nj; i++) {
        if (jobs[i].wait == 0)
            ready[nr++] = i;
    }
    while (finished < nj) {
        while (!fail && live < nslot && rh < nr) {
            int ji = ready[rh], s;
            for (s = 0; s < nslot; s++) {
                if (!slots[s].used)
                    break;
            }
            if (s == nslot)
                break;
            rh++;
            if (!forge__start_job(&jobs[ji], &slots[s], ji)) {
                fail = 1;
                break;
            }
            live++;
            forge__bar_live++;
            forge__bar_push(jobs[ji].t->name);
        }
        if (live < 1) {
            if (fail)
                break;
            forge__errf("job deadlock");
            fail = 1;
            break;
        }
        {
            int idx = 0, r = forge__waitany(slots, nslot, &idx);
            if (r < 0) {
                fail = 1;
                break;
            }
            if (r == 0)
                continue;
            forge__bar_pop(slots[idx].tname);
            forge__bar_live--;
            if (forge__bar_on)
                forge__bar_done++;
            finished++;
            live--;
            if (!slots[idx].ok)
                fail = 1;
            else if (!fail) {
                int ji = slots[idx].job;
                for (i = 0; i < jobs[ji].nk; i++) {
                    int d = jobs[ji].kids[i];
                    if (--jobs[d].wait == 0)
                        ready[nr++] = d;
                }
            }
        }
    }
    while (live > 0) {
        int idx = 0, r = forge__waitany(slots, nslot, &idx);
        if (r <= 0) {
            if (r < 0)
                break;
            continue;
        }
        forge__bar_pop(slots[idx].tname);
        forge__bar_live--;
        if (forge__bar_on)
            forge__bar_done++;
        live--;
    }
    free(ready);
    free(slots);
    return !fail && finished == nj;
}

static int forge__outdir_ok(const char *p)
{
    const char *s;
    if (!p || !p[0] || forge__is_root(p))
        return 0;
    if (strcmp(p, ".") == 0 || strcmp(p, "..") == 0)
        return 0;
    for (s = p; *s; ) {
        if (s[0] == '.' && s[1] == '.' &&
                (s[2] == '\0' || s[2] == '/' || s[2] == '\\'))
            return 0;
        while (*s && *s != '/' && *s != '\\')
            s++;
        if (*s)
            s++;
    }
    return 1;
}

static int forge__clean(void)
{
    ForgeStrs dirs = {0};
    int i, j;
    for (i = 0; i < forge__ntargets; i++) {
        ForgeTarget *t = &forge__targets[i];
        if (t->kind == FORGE_KIND_GROUP)
            continue;
        if (!t->outdir || forge__has(&dirs, t->outdir))
            continue;
        forge__add1(&dirs, t->outdir);
    }
    for (i = 0; i < dirs.count; i++) {
        const char *d = dirs.items[i];
        forge__say("CLEAN", d);
        if (forge__outdir_ok(d)) {
            if (!forge__rm_rf(d))
                return 0;
            continue;
        }
        for (j = 0; j < forge__ntargets; j++) {
            ForgeTarget *t = &forge__targets[j];
            const char *out, *lf;
            int k;
            if (t->kind == FORGE_KIND_GROUP || !t->outdir ||
                    strcmp(t->outdir, d) != 0)
                continue;
            if (t->kind == FORGE_KIND_CMD) {
                for (k = 0; k < t->outs.count; k++) {
                    if (!forge__rm_rf(t->outs.items[k]))
                        return 0;
                }
                continue;
            }
            out = forge__out(t);
            if (out && !forge__rm_rf(out))
                return 0;
            lf = forge__linkfile(t);
            if (lf && (!out || strcmp(lf, out) != 0) && !forge__rm_rf(lf))
                return 0;
            if (!forge__rm_rf(forge__fmt("%s/%s", t->outdir, t->name)))
                return 0;
        }
    }
    return 1;
}

static void forge__clear_color(void)
{
    int i;
    for (i = 0; i < forge__ntargets; i++)
        forge__targets[i].color = 0;
}

static int forge__clean_one(ForgeTarget *t)
{
    const char *out, *lf;
    int i;
    if (t->kind == FORGE_KIND_GROUP)
        return 1;
    forge__say("CLEAN", t->name);
    if (t->kind == FORGE_KIND_CMD) {
        for (i = 0; i < t->outs.count; i++) {
            if (!forge__rm_rf(t->outs.items[i]))
                return 0;
        }
        return 1;
    }
    out = forge__out(t);
    if (out && !forge__rm_rf(out))
        return 0;
    lf = forge__linkfile(t);
    if (lf && (!out || strcmp(lf, out) != 0) && !forge__rm_rf(lf))
        return 0;
    return forge__rm_rf(forge__fmt("%s/%s", t->outdir, t->name));
}

static int forge__clean_root(ForgeTarget *t)
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
        if (!forge__clean_root(u))
            return 0;
    }
    if (t->kind != FORGE_KIND_GROUP && !forge__clean_one(t))
        return 0;
    t->color = 2;
    return 1;
}

static void forge__help(const char *argv0)
{
    int i, ng = 0, nt = 0;
    printf("Usage: %s [option]... [target]...\n", forge__base(argv0));
    printf("  --rebuild   delete outputs and rebuild\n");
    printf("  --clean     delete outputs\n");
    printf("  --run       build then run an executable\n");
    printf("  --verbose   print compiler commands\n");
    printf("  -j, --jobs N  parallel jobs (default: nproc)\n");
    printf("  -h, --help  show this help\n");
    for (i = 0; i < forge__ntargets; i++) {
        if (forge__targets[i].kind == FORGE_KIND_GROUP)
            ng++;
        else
            nt++;
    }
    if (ng) {
        printf("\nGroups:\n");
        for (i = 0; i < forge__ntargets; i++) {
            if (forge__targets[i].kind == FORGE_KIND_GROUP)
                printf("  %s\n", forge__targets[i].name);
        }
    }
    if (nt) {
        printf("\nTargets:\n");
        for (i = 0; i < forge__ntargets; i++) {
            if (forge__targets[i].kind != FORGE_KIND_GROUP)
                printf("  %s\n", forge__targets[i].name);
        }
    }
}

static int forge__parse_jobs(const char *s, int *out)
{
    int n = 0;
    if (!s || !*s)
        return 0;
    while (*s) {
        if (*s < '0' || *s > '9')
            return 0;
        n = n * 10 + (*s - '0');
        if (n > 10000)
            return 0;
        s++;
    }
    if (n < 1)
        return 0;
    *out = n;
    return 1;
}

typedef struct {
    int rebuild;
    int clean;
    int run;
    ForgeStrs want;
    ForgeStrs run_argv;
} ForgeCli;

static ForgeTarget *forge__default_exe(void)
{
    int i;
    for (i = 0; i < forge__ntargets; i++) {
        if (forge__targets[i].kind == FORGE_KIND_EXE)
            return &forge__targets[i];
    }
    return NULL;
}

static ForgeTarget *forge__run_target(ForgeStrs *want)
{
    ForgeTarget *t;
    if (want->count > 1) {
        forge__errf("--run accepts at most one target");
        return NULL;
    }
    if (want->count == 1) {
        t = forge__find(want->items[0]);
        if (!t) {
            forge__errf("unknown target `%s`", want->items[0]);
            return NULL;
        }
        if (t->kind != FORGE_KIND_EXE) {
            forge__errf("target `%s` is not an executable", t->name);
            return NULL;
        }
        return t;
    }
    t = forge__default_exe();
    if (!t) {
        forge__errf("no executable target to run");
        return NULL;
    }
    return t;
}

static int forge__run_cmd(ForgeStrs *cmd)
{
    ForgeSlot s;
    int code = 127;
#ifdef _WIN32
    DWORD ec = 1;
#else
    int st = 0;
#endif
    if (cmd->count < 1)
        return 127;
    if (!forge__spawn(cmd, &s, 0))
        return 127;
#ifdef _WIN32
    WaitForSingleObject(s.proc, INFINITE);
    GetExitCodeProcess(s.proc, &ec);
    CloseHandle(s.proc);
    CloseHandle(s.th);
    s.proc = NULL;
    s.th = NULL;
    code = (int)ec;
#else
    if (waitpid(s.pid, &st, 0) >= 0) {
        if (WIFEXITED(st))
            code = WEXITSTATUS(st);
        else if (WIFSIGNALED(st))
            code = 128 + WTERMSIG(st);
    }
    s.pid = 0;
#endif
    s.used = 0;
    return code;
}

static int forge__run_exe(ForgeTarget *t, ForgeStrs *run_argv)
{
    ForgeStrs cmd = {0};
    const char *exe;
    int i;
    exe = forge__out(t);
    if (!exe)
        return 127;
    forge__add1(&cmd, exe);
    for (i = 0; i < run_argv->count; i++)
        forge__add1(&cmd, run_argv->items[i]);
    forge__say("RUN", exe);
    if (forge__verbose)
        forge__printcmd(&cmd);
    return forge__run_cmd(&cmd);
}

static int forge__args(int argc, char **argv, ForgeCli *cli)
{
    int i, rest = 0, run_rest = 0;
    cli->rebuild = 0;
    cli->clean = 0;
    cli->run = 0;
    cli->want.count = 0;
    cli->run_argv.count = 0;
    forge__verbose = 0;
    forge__jobs_cli = 0;
    for (i = 1; i < argc; i++) {
        const char *a = argv[i];
        if (cli->run && !run_rest && strcmp(a, "--") == 0) {
            run_rest = 1;
            continue;
        }
        if (!rest && !run_rest && strcmp(a, "--") == 0) {
            rest = 1;
            continue;
        }
        if (!rest && !run_rest && a[0] == '-' && a[1]) {
            if (strcmp(a, "--rebuild") == 0)
                cli->rebuild = 1;
            else if (strcmp(a, "--clean") == 0)
                cli->clean = 1;
            else if (strcmp(a, "--run") == 0)
                cli->run = 1;
            else if (strcmp(a, "--verbose") == 0)
                forge__verbose = 1;
            else if (strcmp(a, "--help") == 0 || strcmp(a, "-h") == 0) {
                forge__help(argv[0]);
                return 0;
            } else if (strncmp(a, "--jobs=", 7) == 0) {
                if (!forge__parse_jobs(a + 7, &forge__jobs_cli)) {
                    forge__errf("invalid jobs `%s`", a + 7);
                    return -1;
                }
            } else if (strcmp(a, "--jobs") == 0 || strcmp(a, "-j") == 0) {
                if (i + 1 < argc && forge__parse_jobs(argv[i + 1], &forge__jobs_cli))
                    i++;
                else
                    forge__jobs_cli = -1;
            } else if (a[1] == 'j' && a[2] >= '0' && a[2] <= '9') {
                if (!forge__parse_jobs(a + 2, &forge__jobs_cli)) {
                    forge__errf("invalid jobs `%s`", a + 2);
                    return -1;
                }
            } else {
                forge__errf("unknown option `%s`", a);
                return -1;
            }
            continue;
        }
        if (run_rest)
            forge__add1(&cli->run_argv, a);
        else
            forge__add1(&cli->want, a);
    }
    return 1;
}

static int forge__resolve(ForgeStrs *want)
{
    int i;
    for (i = 0; i < want->count; i++) {
        if (!forge__find(want->items[i])) {
            forge__errf("unknown target `%s`", want->items[i]);
            return 0;
        }
    }
    return 1;
}

static void forge__warn_empty_defaults(void)
{
    int i;
    for (i = 0; i < forge__defaults.count; i++) {
        ForgeTarget *t = forge__find(forge__defaults.items[i]);
        if (t && t->kind == FORGE_KIND_GROUP && t->uses.count < 1)
            forge__warnf("default group `%s` has no members", t->name);
    }
}

int forge__run(int argc, char **argv)
{
    ForgeCli cli = {0};
    ForgeStrs want = {0};
    ForgeTarget *run_t = NULL;
    ForgeJob *jobs = NULL;
    int i, tot = 0, ok = 1, args, nj = 0;
    if (forge__err)
        return 0;
    args = forge__args(argc, argv, &cli);
    if (args < 0)
        return 0;
    if (args == 0)
        return 1;
    if (cli.run) {
        run_t = forge__run_target(&cli.want);
        if (!run_t)
            return 0;
        if (cli.want.count < 1)
            forge__add1(&cli.want, run_t->name);
    }
    want = cli.want;
    if (!cli.run && want.count == 0 && forge__defaults.count > 0) {
        for (i = 0; i < forge__defaults.count; i++)
            forge__add1(&want, forge__defaults.items[i]);
        forge__warn_empty_defaults();
    }
    forge__resolve_jobs();
    if (want.count > 0 && !forge__resolve(&want))
        return 0;
    if (cli.clean || cli.rebuild) {
        if (want.count < 1) {
            if (!forge__clean())
                return 0;
        } else {
            for (i = 0; i < want.count; i++) {
                if (!forge__clean_root(forge__find(want.items[i])))
                    return 0;
            }
            forge__clear_color();
        }
    }
    if (cli.clean && !cli.rebuild)
        return 1;
    if (!forge__collect_jobs(&want, &jobs, &nj))
        return 0;
    tot = nj;
    forge__bar_begin(tot);
    ok = forge__sched(jobs, nj);
    forge__bar_off();
    if (!ok)
        return 0;
    if (cli.run)
        exit(forge__run_exe(run_t, &cli.run_argv));
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

static void forge__rm_quiet(const char *path)
{
#ifdef _WIN32
    SetFileAttributesA(path, FILE_ATTRIBUTE_NORMAL);
    DeleteFileA(path);
#else
    unlink(path);
#endif
}

static int forge__mv(const char *from, const char *to)
{
#ifdef _WIN32
    forge__rm_quiet(to);
    if (MoveFileA(from, to))
        return 1;
    forge__errf("rename `%s` -> `%s` failed (%lu)",
            from, to, (unsigned long)GetLastError());
    return 0;
#else
    if (rename(from, to) == 0)
        return 1;
    forge__errf("rename `%s` -> `%s`: %s", from, to, strerror(errno));
    return 0;
#endif
}

static const char *forge__selfbin(const char *argv0)
{
#ifdef _WIN32
    static char self[MAX_PATH];
    DWORD n = GetModuleFileNameA(NULL, self, MAX_PATH);
    if (n > 0 && n < MAX_PATH)
        return self;
    if (!forge__ends_iexe(argv0))
        return forge__fmt("%s.exe", argv0);
#endif
    return argv0;
}

static int forge__cc_self(const char *src, const char *out)
{
    ForgeStrs cmd = {0};
    forge__add1(&cmd, forge__ccbin(0));
    if (forge__msvc()) {
        forge__add1(&cmd, "/nologo");
        forge__add1(&cmd, forge__fmt("/Fe%s", out));
        forge__add1(&cmd, src);
    } else {
        forge__add1(&cmd, "-o");
        forge__add1(&cmd, out);
        forge__add1(&cmd, src);
    }
    if (forge__verbose)
        forge__printcmd(&cmd);
    return forge__exec(&cmd, 1);
}

static int forge__reentered(void)
{
#ifdef _WIN32
    char b[2];
    return GetEnvironmentVariableA("FORGE_REBUILT", b, 2) > 0;
#else
    return getenv("FORGE_REBUILT") != NULL;
#endif
}

static void forge__mark(void)
{
#ifdef _WIN32
    SetEnvironmentVariableA("FORGE_REBUILT", "1");
#else
    setenv("FORGE_REBUILT", "1", 1);
#endif
}

static void forge__apply(int argc, char **argv, const char *bin)
{
    ForgeStrs cmd = {0};
    int i, ok;
#ifndef _WIN32
    execv(bin, (char * const *)argv);
    forge__errf("exec `%s`: %s", bin, strerror(errno));
#endif
    forge__add1(&cmd, bin);
    for (i = 1; i < argc; i++)
        forge__add1(&cmd, argv[i]);
    ok = forge__exec(&cmd, 0);
    exit(ok ? 0 : 1);
}

void forge__rebuild(int argc, char **argv, const char *src, ...)
{
    const char *bin = forge__selfbin(argv[0]);
    char *oldp = forge__fmt("%s.old", bin);
    char *newp = forge__fmt("%s.new", bin);
    ForgeStrs srcs = {0};
    va_list ap;
    const char *extra;
    int need, i;

    forge__rm_quiet(oldp);
    forge__rm_quiet(newp);
    if (forge__reentered())
        return;

    forge__add1(&srcs, src);
    va_start(ap, src);
    while ((extra = va_arg(ap, const char *)) != NULL)
        forge__add1(&srcs, extra);
    va_end(ap);

    for (i = 0; i < srcs.count; i++) {
        time_t t;
        if (!forge__mtime(srcs.items[i], &t)) {
            forge__errf("cannot stat `%s`", srcs.items[i]);
            exit(1);
        }
    }

    need = forge__needs(bin, srcs.items, srcs.count);
    if (need < 0)
        exit(1);
    if (!need)
        return;

    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "--verbose") == 0)
            forge__verbose = 1;
    }

    forge__say("RECIPE", src);
    if (!forge__cc_self(src, newp)) {
        forge__rm_quiet(newp);
        exit(1);
    }
    if (!forge__mv(bin, oldp)) {
        forge__rm_quiet(newp);
        exit(1);
    }
    if (!forge__mv(newp, bin)) {
        forge__mv(oldp, bin);
        forge__rm_quiet(newp);
        exit(1);
    }
    forge__rm_quiet(oldp);
    forge__mark();
    forge__apply(argc, argv, bin);
}

#endif /* FORGE__IMPL */
#endif /* FORGE_IMPLEMENTATION */
