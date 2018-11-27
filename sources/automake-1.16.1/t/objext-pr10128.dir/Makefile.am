LINK = echo >$@ Linked $@ from
OBJEXT = fasl
EXEEXT =

noinst_PROGRAMS = foo zardoz
foo_SOURCES = foo.lisp
zardoz_SOURCES = mu1.lisp mu2.lisp

## Un-commenting this is enough to make the test pass.  Weird!
##.lisp.o:

.lisp.fasl:
	touch $@

.PHONY: test
test:
	is $(foo_OBJECTS) == foo.fasl
	is $(zardoz_OBJECTS) == mu1.fasl mu2.fasl
