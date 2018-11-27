EXTRA_LIBRARIES = libhell0.a
libhell0_a_SOURCES =
libhell0_a_LIBADD = hello.$(OBJEXT) foo.$(OBJEXT)
EXTRA_LTLIBRARIES = libhell1.la libhell2.la
libhell1_la_SOURCES = hell1.c
libhell1_la_LIBADD = -L. -lhell0
libhell1_la_LDFLAGS = -no-undefined -rpath $(libdir)
libhell1_la_DEPENDENCIES = libhell0.a
libhell2_la_SOURCES = hell2.c
libhell2_la_LIBADD = -L. -lhell0
libhell2_la_LDFLAGS = -no-undefined -rpath $(libdir)
libhell2_la_DEPENDENCIES = libhell0.a
EXTRA_PROGRAMS = hell0
hell0_SOURCES = main.c
hell0_LDADD = libhell1.la libhell2.la $(LIBM)

# 'hell0' in EXTRA_PROGRAMS gets translated to 'hell0.exe'; but we
# must explicitly list the wrapper script 'hell0'.  (bin_PROGRAMS
# are handled seamlessly by automake rules; the extra step is only
# necessary for EXTRA_PROGRAMS)
CLEANFILES = $(EXTRA_LIBRARIES) $(EXTRA_LTLIBRARIES) $(EXTRA_PROGRAMS) hell0

deplibs-check: hell0$(EXEEXT)
