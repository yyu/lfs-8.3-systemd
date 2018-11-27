AC_INIT([play], [1.3], [bug-automake@gnu.org])

AC_CONFIG_SRCDIR([play.c])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIR([m4])

AM_INIT_AUTOMAKE

AM_PROG_AR
LT_INIT

AC_PROG_CC
AC_PROG_CXX
AC_PROG_OBJC
AC_PROG_OBJCXX

AC_LANG_PUSH([Objective C])
AC_CACHE_CHECK(
  [whether the Objective C compiler really works],
  [my_cv_objc_works],
  [AC_LINK_IFELSE([AC_LANG_PROGRAM([[#import <stdio.h>]],
                                   [[printf ("foo\n");]])],
                  [my_cv_objc_works=yes],
                  [my_cv_objc_works=no])])
AC_LANG_POP([Objective C])

AC_LANG_PUSH([Objective C++])
AC_CACHE_CHECK(
  [whether the Objective C++ compiler really works],
  [my_cv_objcxx_works],
  [AC_LINK_IFELSE([AC_LANG_PROGRAM([[#import <iostream>]],
                                   [[std::cout << "foo" << "\n";]])],
                  [my_cv_objcxx_works=yes],
                  [my_cv_objcxx_works=no])])
AC_LANG_POP([Objective C++])

if test $my_cv_objc_works != yes; then
  AC_MSG_ERROR([couldn't find a working Objective C compiler], [77])
fi

if test $my_cv_objcxx_works != yes; then
  AC_MSG_ERROR([couldn't find a working Objective C++ compiler], [77])
fi

AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile])

AC_OUTPUT
