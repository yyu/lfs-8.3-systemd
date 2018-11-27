ACLOCAL_AMFLAGS = -I m4
AUTOMAKE_OPTIONS = subdir-objects foreign 1.6
AM_CPPFLAGS	= -I$(top_srcdir)/../..

lib_LTLIBRARIES		= subdir/libsub.la
subdir_libsub_la_SOURCES= subdir/sub.c

bin_PROGRAMS		= subdir/subdemo
subdir_subdemo_SOURCES	= subdir/main.c
subdir_subdemo_LDADD	= subdir/libsub.la
