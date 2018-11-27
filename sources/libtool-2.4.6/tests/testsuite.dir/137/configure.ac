AC_INIT([tagdemo], 2.4.6, bug-libtool@gnu.org)
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIRS([m4])
AC_CANONICAL_TARGET
AM_INIT_AUTOMAKE
AC_PROG_CC
AC_PROG_CPP
AC_PROG_CC_C_O
AC_PROG_CXX
AC_PROG_CXXCPP

# Check for namespace support and new-style headers
AC_LANG_PUSH([C++])
AC_MSG_CHECKING([whether the compiler implements namespaces])
AC_COMPILE_IFELSE(
    [AC_LANG_PROGRAM([[namespace A { namespace B { int i = 0; }}]],
		     [[using namespace A::B; return i;]])],
    [AC_MSG_RESULT([yes])
     AC_DEFINE([HAVE_NAMESPACES],[1],
	       [define if the compiler implements namespaces])],
    [AC_MSG_RESULT([no])])

AC_MSG_CHECKING([whether the compiler has ISO C++ iostream])
AC_COMPILE_IFELSE(
    [AC_LANG_PROGRAM([[#include <iostream>
#ifdef HAVE_NAMESPACES
using namespace std;
#endif ]], [[cout << "bingo\n"; return 0;]])],
    [AC_MSG_RESULT([yes])
     AC_DEFINE([HAVE_IOSTREAM],[1],
	       [define if the compiler has ISO C++ iostream])],
    [AC_MSG_RESULT([no])])
AC_LANG_POP([C++])

AC_LANG([C++])
LT_INIT

LT_LIB_M
AC_CONFIG_FILES([Makefile])
AC_CONFIG_HEADERS([config.h:config.in.h])
AC_OUTPUT
