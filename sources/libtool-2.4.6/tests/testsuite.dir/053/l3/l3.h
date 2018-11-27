#ifndef L3_H
#define L3_H

#if (defined _WIN32 || defined _WIN32_WCE) && !defined __GNUC__
#  ifdef BUILDING_LIBL3
#    ifdef DLL_EXPORT
#      define LIBL3_SCOPE extern __declspec (dllexport)
#    endif
#  else
#    define LIBL3_SCOPE extern __declspec (dllimport)
#  endif
#endif
#ifndef LIBL3_SCOPE
#  define LIBL3_SCOPE extern
#endif

#ifdef __cplusplus
extern "C" {
#endif

  LIBL3_SCOPE int var_l3;
  int func_l3 (int);

#ifdef __cplusplus
}
#endif
#endif
