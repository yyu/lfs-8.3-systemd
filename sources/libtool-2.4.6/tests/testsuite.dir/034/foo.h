#ifndef FOO_H
#define FOO_H

/* At some point, cygwin will stop defining __CYGWIN32__, but b19 and
 * earlier do not define __CYGWIN__.  This snippet allows us to check
 * for __CYGWIN__ reliably for both current, old, and (probable) future
 * releases.
 */
#ifdef __CYGWIN32__
#  ifndef __CYGWIN__
#    define __CYGWIN__
#  endif
#endif

#if (defined _WIN32 || defined _WIN32_WCE) && !defined __GNUC__
# ifdef BUILDING_LIBHELLO
#  ifdef DLL_EXPORT
#   define LIBHELLO_SCOPE extern __declspec (dllexport)
#  endif
# else
#  define LIBHELLO_SCOPE extern __declspec (dllimport)
# endif
#endif
#ifndef LIBHELLO_SCOPE
# define LIBHELLO_SCOPE extern
#endif

/* Keep this code in sync between libtool.m4, ltmain, lt_system.h, and tests.  */
#if defined _WIN32 || defined __CYGWIN__ || defined _WIN32_WCE
/* DATA imports from DLLs on WIN32 can't be const, because runtime
   relocations are performed -- see ld's documentation on pseudo-relocs.  */
# define LT_DLSYM_CONST
#elif defined __osf__
/* This system does not cope well with relocations in const data.  */
# define LT_DLSYM_CONST
#else
# define LT_DLSYM_CONST const
#endif

/* Silly constants that the functions return. */
#define HELLO_RET 0xe110
#define FOO_RET 0xf00

#ifdef __cplusplus
extern "C" {
#endif

int foo (void);
int hello (void);
LIBHELLO_SCOPE int nothing;

#ifdef __cplusplus
}
#endif

#endif
