AUTOMAKE_OPTIONS = no-dist-gzip
check-ark-name:
	test $(DIST_ARCHIVES) = $(distdir).tar.lz
check-ark-exists:
	test -f $(distdir).tar.lz
check-no-tar-gz:
	test ! -f $(distdir).tar.gz
