AUTOMAKE_OPTIONS = dist-bzip2 no-dist-gzip
check-ark-name:
	test $(DIST_ARCHIVES) = $(distdir).tar.bz2
check-ark-exists:
	test -f $(distdir).tar.bz2
check-no-tar-gz:
	test ! -f $(distdir).tar.gz
