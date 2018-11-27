AC_INIT([no-exec], [1])
AC_CONFIG_MACRO_DIRS([m4])

# We punt a bit here, to get the results of AC_PROG_CC
# (and allow it to do link tests) but still error out on
# link tests within Libtool macros.
LDFLAGS=-lnosuchlibrary
AC_NO_EXECUTABLES
AC_PROG_CC
AC_PROG_CXX
AC_PROG_F77
AC_PROG_FC
AM_PROG_GCJ

# Consequently, we have to set cache variables for each link
# test we may need.  For the purposes of this test, it shouldn't
# matter much whether these values are actually wrong, the point
# is that the linker should never be invoked.

lt_cv_shlibpath_overrides_runpath=no
lt_cv_archive_cmds_need_lc=no
lt_cv_cc_needs_belf=no
lt_cv_ld_exported_symbols_list=no
lt_cv_prog_compiler_static_works=no
lt_cv_aix_libpath=/usr/lib:/lib
lt_cv_irix_exported_symbol=yes

# Deal with AC_LIBTOOL_DLOPEN in one of two possible ways:
# - do not execute it at all in the ac_no_link case
# - preset the individual Autoconf test variables

if ${test_ac_libtool_dlopen-false}; then
    ac_cv_func_shl_load=no
    ac_cv_lib_dld_shl_load=no
    ac_cv_func_dlopen=no
    ac_cv_lib_dl_dlopen=no
    ac_cv_lib_svld_dlopen=no
    ac_cv_lib_dld_dld_link=no
  AC_LIBTOOL_DLOPEN
fi
AC_PROG_LIBTOOL

AC_OUTPUT
