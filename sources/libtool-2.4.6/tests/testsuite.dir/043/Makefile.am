AUTOMAKE_OPTIONS = no-dependencies foreign
ACLOCAL_AMFLAGS = -I m4

noinst_LTLIBRARIES = libfoo.la
libfoo_la_SOURCES = foo.c
libfoo_la_LIBADD = $(LIBM)
libfoo_la_LDFLAGS = -no-undefined
noinst_HEADERS = foo.h

bin_PROGRAMS = cdemo
cdemo_SOURCES = main.c
cdemo_LDADD = libfoo.la

libtool: $(LIBTOOL_DEPS)
	 $(SHELL) ./config.status --recheck
