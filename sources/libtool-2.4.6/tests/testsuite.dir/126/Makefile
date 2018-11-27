top_builddir	= .
LIBTOOL		= ./libltdl/libtool
INCLUDES	= -I./libltdl
MODFLAGS	= -module -avoid-version -no-undefined

LTCOMPILE = $(LIBTOOL) --tag=CC $(LIBTOOLFLAGS) --mode=compile \
        $(CC) $(INCLUDES) $(CPPFLAGS) $(CFLAGS)
LTLINK    = $(LIBTOOL) --tag=CC $(LIBTOOLFLAGS) --mode=link \
        $(CC) $(CFLAGS) $(LDFLAGS)

TARGETS		= libltdl/libltdlc.la module.la ltdldemo$(EXEEXT)

all: $(TARGETS)

libltdl/libltdlc.la: $(LIBTOOL) libltdl/Makefile
	MAKE='$(MAKE)'; test -n "$$MAKE" || MAKE=make; \
	cd libltdl && $$MAKE CC="$(CC)" LIBTOOLFLAGS="$(LIBTOOLFLAGS)" \
	  CPPFLAGS="$(CPPFLAGS)" CFLAGS="$(CFLAGS)" LDFLAGS="$(LDFLAGS)" \
          CONFIGURE_OPTIONS="$(CONFIGURE_OPTIONS)"

$(LIBTOOL): libltdl/Makefile

libltdl/Makefile:
	cd libltdl && CONFIG_SHELL="$(SHELL)" $(SHELL) ./configure $(CONFIGURE_OPTIONS)

ltdldemo$(EXEEXT): $(LIBTOOL) module.la libltdl/libltdlc.la main.lo
	$(LTLINK) -o ltdldemo$(EXEEXT) main.lo -dlopen module.la ./libltdl/libltdlc.la

main.lo: $(LIBTOOL) main.c
	$(LTCOMPILE) -c main.c

module.la: $(LIBTOOL) module.lo
	$(LTLINK) -o module.la module.lo $(MODFLAGS) -rpath /dev/null

module.lo: $(LIBTOOL) module.c
	$(LTCOMPILE) -c module.c
SHELL = /bin/sh
