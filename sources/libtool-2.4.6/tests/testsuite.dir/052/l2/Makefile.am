AUTOMAKE_OPTIONS = no-dependencies foreign
AM_CPPFLAGS = -I$(top_srcdir) -DBUILDING_LIBL2
lib_LTLIBRARIES = libl2.la
libl2_la_SOURCES = l2.c l2.h
libl2_la_LDFLAGS = -no-undefined
libl2_la_LIBADD =
libl2_la_LIBADD += $(top_builddir)/l1/libl1.la
