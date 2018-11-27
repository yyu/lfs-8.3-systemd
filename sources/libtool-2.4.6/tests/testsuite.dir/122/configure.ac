AC_INIT([mdemo], 2.4.6, bug-libtool@gnu.org)
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIRS([m4])
LT_CONFIG_LTDL_DIR([libltdl])
AM_INIT_AUTOMAKE
AC_PROG_CC
LT_INIT([dlopen win32-dll])
LTDL_INIT([nonrecursive convenience])
AC_SUBST([LIBTOOL_DEPS])
AC_SUBST([INCLTDL])
AC_SUBST([LIBLTDL])
STATIC=
test yes = "" && STATIC=-static
AC_SUBST([STATIC])
LT_LIB_M
AC_CONFIG_FILES([Makefile])
AC_CONFIG_HEADERS([config.h:config.in.h])
AC_OUTPUT
