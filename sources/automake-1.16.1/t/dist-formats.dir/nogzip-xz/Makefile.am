AUTOMAKE_OPTIONS = dist-xz
check-ark-name:
	test $(DIST_ARCHIVES) = $(distdir).tar.xz
check-ark-exists:
	test -f $(distdir).tar.xz
check-no-tar-gz:
	test ! -f $(distdir).tar.gz
