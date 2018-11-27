AUTOMAKE_OPTIONS = no-dependencies foreign
AM_CPPFLAGS = -I$(top_srcdir) -DBUILDING_LIBL3
lib_LTLIBRARIES = libl3.la
libl3_la_SOURCES = l3.c l3.h
libl3_la_LDFLAGS = -no-undefined
libl3_la_LIBADD =
libl3_la_LIBADD += $(top_builddir)/l1/libl1.la
libl3_la_LIBADD += $(top_builddir)/l2/libl2.la
