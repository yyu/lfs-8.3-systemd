bin_PROGRAMS += mdemo2 mdemo2_static

# Create a version of mdemo2 that links a library that does dlopen.
mdemo2_LDFLAGS = -export-dynamic "-dlopen" force
mdemo2_LDADD = libmlib.la

# Create a statically linked version of mdemo.
mdemo2_static_SOURCES = mdemo2.c
mdemo2_static_LDFLAGS = $(STATIC) $(mdemo2_LDFLAGS)
mdemo2_static_LDADD = $(mdemo2_LDADD)
mdemo2_static_DEPENDENCIES = $(mdemo2_DEPENDENCIES)
