bin_PROGRAMS = lexer
lexer_SOURCES = foo.l
lexer_LDADD = $(LEXLIB)

.PHONY: have-lexlib
have-lexlib:
	test x'$(LEXLIB)' != x
	echo 'int main (void) { return yywrap (); }' > x.c
	$(CC) -c x.c
	$(CC) x.$(OBJEXT) $(LEXLIB)
	rm -f x.c *.$(OBJEXT) *.o *.out *.exe
