AUTOMAKE_OPTIONS = no-dependencies foreign
AM_CPPFLAGS = -I$(top_srcdir) -DBUILDING_LIBL4
lib_LTLIBRARIES = libl4.la
libl4_la_SOURCES = l4.c l4.h
libl4_la_LDFLAGS = -no-undefined
libl4_la_LIBADD =
libl4_la_LIBADD += $(top_builddir)/l3/libl3.la $(LIBM)
