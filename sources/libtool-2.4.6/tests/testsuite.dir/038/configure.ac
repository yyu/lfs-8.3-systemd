AC_INIT([demo], 2.4.6, bug-libtool@gnu.org)
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIRS([m4])
AM_INIT_AUTOMAKE
AC_PROG_CC

LT_INIT([dlopen win32-dll])
AC_SUBST([LIBTOOL_DEPS])
STATIC=
test yes = "$enable_static" && STATIC=-static
AC_SUBST([STATIC])

case $lt_cv_sys_global_symbol_pipe in
  ?*) binary_helldl=yes ;;
esac
AM_CONDITIONAL([BINARY_HELLDL], [test yes = "$binary_helldl"])

LT_LIB_M
AC_CONFIG_FILES([Makefile])
AC_CONFIG_HEADERS([config.h:config.in.h])
AC_OUTPUT
