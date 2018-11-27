hardcode_tests = hc-direct hc-libflag hc-libpath hc-minusL
CLEANFILES = $(hardcode_tests)

# Unfortunately, in order to test libtool thoroughly, we need access
# to its private directory.
objdir = `$(LIBTOOL) --config | $(SED) -n -e 's/^objdir=\(.*\)$$/\1/p'`

# Test programs to see what gets hardcoded.
.PHONY: hardcode
hardcode: $(hardcode_tests)
SET_HARDCODE_FLAGS = \
  eval `$(LIBTOOL) --config | $(SED) -n -e '/^hardcode_.*=/p; /^wl=/p'`
hc-direct: $(hell_OBJECTS) $(hell_DEPENDENCIES) $(libdir)/libhello.la
	@rm -f hc-direct
	@echo "You may ignore any linking errors from the following command:"
	@shlib=./$(objdir)/libhello.a; \
	  eval "`$(GREP) '^library_names' libhello.la`"; \
	  for lib in $$library_names; do \
	    shlib="./$(objdir)/$$lib"; \
	  done; \
	  $(SET_HARDCODE_FLAGS); \
	  libdir=$(libdir); \
	  flag=`eval echo \"$$hardcode_libdir_flag_spec\"`; \
	  echo "$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(hell_OBJECTS) $$shlib $(LIBS) $(LIBM) $$flag || echo unsupported > $@"; \
	  eval "$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(hell_OBJECTS) $$shlib $(LIBS) $(LIBM) $$flag || echo unsupported > $@"

hc-libflag: $(hell_OBJECTS) $(hell_DEPENDENCIES) $(libdir)/libhello.la
	@$(SET_HARDCODE_FLAGS); \
	  libdir=`pwd`/$(objdir); \
	  flag=`eval echo \"$$hardcode_libdir_flag_spec\"`; \
	  if test -z "$$flag"; then \
	    echo "echo unsupported > $@"; \
	    echo unsupported > $@ || status="$$?"; \
	  else \
	    echo "$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(hell_OBJECTS) $$flag -L$(libdir) -lhello $(LIBS) $(LIBM)"; \
	    $(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(hell_OBJECTS) $$flag -L$(libdir) -lhello $(LIBS) $(LIBM) || status="$$?"; \
	  fi; \
	  exit $$status

hc-libpath: $(hell_OBJECTS) $(hell_DEPENDENCIES) $(libdir)/libhello.la
	@rm -f hc-libpath
	@echo "You may ignore any linking errors from the following command:"
	@$(SET_HARDCODE_FLAGS); \
	  eval `$(LIBTOOL) --config | $(GREP) '^shlibpath_var='`; \
	  libdir=$(libdir); \
	  flag=`eval echo \"$$hardcode_libdir_flag_spec\"`; \
	  echo "$$shlibpath_var=./$(objdir) $(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(hell_OBJECTS) -lhello $(LIBS) $(LIBM) $$flag || echo unsupported > $@"; \
	  eval "$$shlibpath_var=./$(objdir) $(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(hell_OBJECTS) -lhello $(LIBS) $(LIBM) $$flag || echo unsupported > $@"

hc-minusL: $(hell_OBJECTS) $(hell_DEPENDENCIES)
	@rm -f hc-minusL
	@$(SET_HARDCODE_FLAGS); \
	  libdir=$(libdir); \
	  flag=`eval echo \"$$hardcode_libdir_flag_spec\"`; \
	  echo "$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(hell_OBJECTS) -L./$(objdir) -lhello $(LIBS) $(LIBM) $$flag || echo unsupported > $@"; \
	  eval "$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(hell_OBJECTS) -L./$(objdir) -lhello $(LIBS) $(LIBM) $$flag || echo unsupported > $@"
