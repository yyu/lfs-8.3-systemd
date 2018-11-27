#ifndef L4_H
#define L4_H

#if (defined _WIN32 || defined _WIN32_WCE) && !defined __GNUC__
#  ifdef BUILDING_LIBL4
#    ifdef DLL_EXPORT
#      define LIBL4_SCOPE extern __declspec (dllexport)
#    endif
#  else
#    define LIBL4_SCOPE extern __declspec (dllimport)
#  endif
#endif
#ifndef LIBL4_SCOPE
#  define LIBL4_SCOPE extern
#endif

#ifdef __cplusplus
extern "C" {
#endif

  LIBL4_SCOPE int var_l4;
  int func_l4 (int);

#ifdef __cplusplus
}
#endif
#endif
