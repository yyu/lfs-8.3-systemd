AUTOMAKE_OPTIONS = no-dependencies foreign
ACLOCAL_AMFLAGS = -I m4

# Build a libtool library, libhello.la for installation in libdir.
lib_LTLIBRARIES = libhello.la
libhello_la_SOURCES = hello.c foo.c
libhello_la_LIBADD = $(LIBM)
libhello_la_LDFLAGS = -no-undefined -version-info 3:12:1
libhello_la_CPPFLAGS = $(AM_CPPFLAGS) -DBUILDING_LIBHELLO

include_HEADERS = foo.h

if BINARY_HELLDL
BUILD_helldl = helldl
else
BUILD_helldl =
endif

bin_PROGRAMS = hell hell_static $(BUILD_helldl)

# Build hell from main.c and libhello.la
hell_SOURCES = main.c
hell_LDADD = libhello.la

# Create a statically linked version of hell.
hell_static_SOURCES = main.c
hell_static_LDADD = libhello.la
hell_static_LDFLAGS = $(STATIC)

if BINARY_HELLDL

# Create a version of hell that does a preloaded dlopen.
helldl_SOURCES = dlmain.c
helldl_LDFLAGS = -export-dynamic -dlpreopen libhello.la
helldl_DEPENDENCIES = libhello.la

else

# Create a script that says that -dlopen is not supported.
bin_SCRIPTS = helldl
helldl helldl$(EXEEXT):
	rm -rf
	echo '#! /bin/sh' >
	echo 'echo sorry, -dlopen is unsupported' >>
	chmod +x

endif

libtool: $(LIBTOOL_DEPS)
	$(SHELL) ./config.status --recheck

include $(srcdir)/demo.mk
