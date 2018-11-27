bin_PROGRAMS = prog1 prog2 prog3
nobase_bin_PROGRAMS = progn1 progn2 progn3
lib_LTLIBRARIES = liblt1.la liblt2.la liblt3.la
nobase_lib_LTLIBRARIES = libltn1.la libltn2.la libltn3.la
unreadable-prog:
	chmod a-r prog1$(EXEEXT)
readable-prog:
	chmod a+r prog1$(EXEEXT)
unreadable-progn:
	chmod a-r progn1$(EXEEXT)
readable-progn:
	chmod a+r progn1$(EXEEXT)
