AUTOMAKE_OPTIONS	= 1.7

SUBDIRS			= libltdl

AM_CPPFLAGS		= $(LTDLINCL)

lib_LTLIBRARIES		= libmodule.la
# Automake < 1.8 will use libmodule.la.c as default source,
# while newer will choose libmodule.c; so specify it here.
libmodule_la_SOURCES	= libmodule.c
libmodule_la_LDFLAGS	= -module

bin_PROGRAMS		= main
main_LDFLAGS		= -dlopen libmodule.la
main_LDADD		= $(LIBLTDL)
main_DEPENDENCIES	= $(LTDLDEPS) libmodule.la
