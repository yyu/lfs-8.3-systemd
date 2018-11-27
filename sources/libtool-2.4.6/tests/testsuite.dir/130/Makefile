top_builddir	= .
LIBTOOL		= ./sub/ltdl/libtool
INCLUDES	= -I./sub/ltdl
MODFLAGS	= -module -avoid-version -no-undefined

LTCOMPILE = $(LIBTOOL) --tag=CC $(LIBTOOLFLAGS) --mode=compile \
        $(CC) $(INCLUDES) $(CPPFLAGS) $(CFLAGS)
LTLINK    = $(LIBTOOL) --tag=CC $(LIBTOOLFLAGS) --mode=link \
        $(CC) $(CFLAGS) $(LDFLAGS)

TARGETS		= sub/ltdl/libltdlc.la module.la ltdldemo$(EXEEXT)

all: $(TARGETS)

sub/ltdl/libltdlc.la: $(LIBTOOL) sub/ltdl/Makefile
	MAKE='$(MAKE)'; test -n "$$MAKE" || MAKE=make; \
	cd sub/ltdl && $$MAKE CC="$(CC)" LIBTOOLFLAGS="$(LIBTOOLFLAGS)" \
	  CPPFLAGS="$(CPPFLAGS)" CFLAGS="$(CFLAGS)" LDFLAGS="$(LDFLAGS)" \
          CONFIGURE_OPTIONS="$(CONFIGURE_OPTIONS)"

$(LIBTOOL): sub/ltdl/Makefile

sub/ltdl/Makefile:
	cd sub/ltdl && CONFIG_SHELL="$(SHELL)" $(SHELL) ./configure $(CONFIGURE_OPTIONS)

ltdldemo$(EXEEXT): $(LIBTOOL) module.la sub/ltdl/libltdlc.la main.lo
	$(LTLINK) -o ltdldemo$(EXEEXT) main.lo -dlopen module.la ./sub/ltdl/libltdlc.la

main.lo: $(LIBTOOL) main.c
	$(LTCOMPILE) -c main.c

module.la: $(LIBTOOL) module.lo
	$(LTLINK) -o module.la module.lo $(MODFLAGS) -rpath /dev/null

module.lo: $(LIBTOOL) module.c
	$(LTCOMPILE) -c module.c
SHELL = /bin/sh
