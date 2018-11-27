AC_INIT([depdemo], 2.4.6, bug-libtool@gnu.org)
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_MACRO_DIRS([m4])
AM_INIT_AUTOMAKE
AC_PROG_CC

LT_INIT([win32-dll])
AC_SUBST([LIBTOOL_DEPS])
STATIC=
test yes = "$enable_static" && STATIC=-static
AC_SUBST([STATIC])

LT_LIB_M
AC_CONFIG_FILES([Makefile l1/Makefile l2/Makefile l3/Makefile l4/Makefile])
AC_CONFIG_HEADERS([config.h:config.in.h])
AC_OUTPUT
