bin_PROGRAMS = bar
bar_SOURCES = subsub/dist.c
nodist_bar_SOURCES = subsub/gen.c
subsub/gen.c:
	$(MKDIR_P) subsub
	echo 'int generated_subsub () { return 0; }' > $@
CLEANFILES = subsub/gen.c
