#ifndef L2_H
#define L2_H

#if (defined _WIN32 || defined _WIN32_WCE) && !defined __GNUC__
#  ifdef BUILDING_LIBL2
#    ifdef DLL_EXPORT
#      define LIBL2_SCOPE extern __declspec (dllexport)
#    endif
#  else
#    define LIBL2_SCOPE extern __declspec (dllimport)
#  endif
#endif
#ifndef LIBL2_SCOPE
#  define LIBL2_SCOPE extern
#endif

#ifdef __cplusplus
extern "C" {
#endif

  LIBL2_SCOPE int var_l2;
  int func_l2 (int);

#ifdef __cplusplus
}
#endif
#endif
