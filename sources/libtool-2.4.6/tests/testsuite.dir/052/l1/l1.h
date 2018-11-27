#ifndef L1_H
#define L1_H

#if (defined _WIN32 || defined _WIN32_WCE) && !defined __GNUC__
#  ifdef BUILDING_LIBL1
#    ifdef DLL_EXPORT
#      define LIBL1_SCOPE extern __declspec (dllexport)
#    endif
#  else
#    define LIBL1_SCOPE extern __declspec (dllimport)
#  endif
#endif
#ifndef LIBL1_SCOPE
#  define LIBL1_SCOPE extern
#endif

#ifdef __cplusplus
extern "C" {
#endif

  LIBL1_SCOPE int var_l1;
  int func_l1 (int);

#ifdef __cplusplus
}
#endif
#endif
