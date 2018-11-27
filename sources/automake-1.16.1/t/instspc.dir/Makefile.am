foodir = $(prefix)/foo
fooexecdir = $(prefix)/foo

foo_HEADERS = sub/base.h
nobase_foo_HEADERS = sub/nobase.h

dist_foo_DATA = sub/base.dat
nobase_dist_foo_DATA = sub/nobase.dat

dist_fooexec_SCRIPTS = sub/base.sh
nobase_dist_fooexec_SCRIPTS = sub/nobase.sh

fooexec_PROGRAMS = sub/base
nobase_fooexec_PROGRAMS = sub/nobase
sub_base_SOURCES = source.c
sub_nobase_SOURCES = source.c

fooexec_LIBRARIES = sub/libbase.a
nobase_fooexec_LIBRARIES = sub/libnobase.a
sub_libbase_a_SOURCES = source.c
sub_libnobase_a_SOURCES = source.c

.PHONY: test-inst
test-inst: install
	test   -f '$(DESTDIR)/$(file)-prefix/foo/sub/nobase.h'
	test ! -f '$(DESTDIR)/$(file)-prefix/foo/nobase.h'
	test   -f '$(DESTDIR)/$(file)-prefix/foo/base.h'
	test   -f '$(DESTDIR)/$(file)-prefix/foo/sub/nobase.dat'
	test ! -f '$(DESTDIR)/$(file)-prefix/foo/nobase.dat'
	test   -f '$(DESTDIR)/$(file)-prefix/foo/base.dat'
	test   -f '$(DESTDIR)/$(file)-prefix/foo/sub/nobase.sh'
	test ! -f '$(DESTDIR)/$(file)-prefix/foo/nobase.sh'
	test   -f '$(DESTDIR)/$(file)-prefix/foo/base.sh'
	test   -f '$(DESTDIR)/$(file)-prefix/foo/sub/nobase$(EXEEXT)'
	test ! -f '$(DESTDIR)/$(file)-prefix/foo/nobase$(EXEEXT)'
	test   -f '$(DESTDIR)/$(file)-prefix/foo/base$(EXEEXT)'
	test   -f '$(DESTDIR)/$(file)-prefix/foo/sub/libnobase.a'
	test ! -f '$(DESTDIR)/$(file)-prefix/foo/libnobase.a'
	test   -f '$(DESTDIR)/$(file)-prefix/foo/libbase.a'
