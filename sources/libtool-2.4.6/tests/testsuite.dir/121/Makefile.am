AUTOMAKE_OPTIONS = no-dependencies subdir-objects foreign
ACLOCAL_AMFLAGS = -I m4
AM_CPPFLAGS = $(INCLTDL)
AM_LDFLAGS =

noinst_LTLIBRARIES =
EXTRA_LTLIBRARIES =

include_HEADERS =

EXTRA_DIST =

BUILT_SOURCES =
CLEANFILES =
MOSTLYCLEANFILES =

lib_LTLIBRARIES = libsub.la foo1.la libfoo2.la libmlib.la

foo1_la_SOURCES = foo1.c
foo1_la_LIBADD = $(LIBM) libsub.la
foo1_la_LDFLAGS = -no-undefined -module -avoid-version

libfoo2_la_SOURCES = foo2.c
libfoo2_la_LIBADD = $(LIBM) libsub.la
libfoo2_la_LDFLAGS = -no-undefined -module -export-symbols-regex "libfoo2.*"

libsub_la_SOURCES = sub.c
libsub_la_LDFLAGS = -no-undefined

## Use -export-symbols-regex here explicitly because libltdl marks
## its exported symbols, and we use libltdl as a convenience archive.
## Thus, on w32, auto-exporting is turned off.
libmlib_la_SOURCES = mlib.c
libmlib_la_LIBADD = $(LIBLTDL) "-dlopen" foo1.la "-dlopen" libfoo2.la
libmlib_la_LDFLAGS = -no-undefined -export-symbols-regex ".*"
libmlib_la_DEPENDENCIES = $(LIBLTDL) libsub.la foo1.la libfoo2.la

noinst_HEADERS = foo.h

bin_PROGRAMS = mdemo mdemo_static

# Create a version of mdemo that does dlopen.
mdemo_SOURCES = main.c
mdemo_LDFLAGS = -export-dynamic
## The quotes around -dlopen below fool automake into accepting it
mdemo_LDADD = $(LIBLTDL) libsub.la "-dlopen" self 		"-dlopen" foo1.la "-dlopen" libfoo2.la
mdemo_DEPENDENCIES = $(LIBLTDL) libsub.la foo1.la libfoo2.la

# Create a statically linked version of mdemo.
mdemo_static_SOURCES = $(mdemo_SOURCES)
mdemo_static_LDFLAGS = $(STATIC) $(mdemo_LDFLAGS)
mdemo_static_LDADD = $(mdemo_LDADD)
mdemo_static_DEPENDENCIES = $(mdemo_DEPENDENCIES)

libtool: $(LIBTOOL_DEPS)
	$(SHELL) ./config.status --recheck

include $(srcdir)/libltdl/ltdl.mk
include $(srcdir)/mdemo.mk
