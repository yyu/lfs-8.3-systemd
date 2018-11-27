AUTOMAKE_OPTIONS = no-dependencies foreign
ACLOCAL_AMFLAGS = -I m4

noinst_LTLIBRARIES = libconv.la
lib_LTLIBRARIES = libfoo.la libbaz.la

libfoo_la_SOURCES = foo.cpp
libfoo_la_LDFLAGS = -no-undefined
libfoo_la_LIBADD = libconv.la $(LIBM)

# Test some of the ILD support when using tagged configurations.
libbaz_la_SOURCES = baz.cpp
libbaz_la_LDFLAGS = -no-undefined
libbaz_la_LIBADD = libfoo.la

# Test convenience libraries.
libconv_la_SOURCES = conv.cpp
libconv_la_LDFLAGS = -no-undefined

noinst_HEADERS = foo.h baz.h conv.h

bin_PROGRAMS = tagdemo

tagdemo_SOURCES = main.cpp
tagdemo_LDADD = libbaz.la libfoo.la

libtool: $(LIBTOOL_DEPS)
	$(SHELL) ./config.status --recheck
