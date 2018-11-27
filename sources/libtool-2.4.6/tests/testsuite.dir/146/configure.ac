AC_INIT([libtool-demo], 2.4.6, bug-libtool@gnu.org)
AC_CONFIG_MACRO_DIRS([m4])
LT_INIT
LT_OUTPUT

cat >hello.c <<\_EOF
#include <stdio.h>

void
hello (void)
{
  printf ("** This is not GNU Hello.  There is no built-in mail reader. **\n");
}
_EOF

# Prove that we can run libtool from inside configure:
$SHELL ./libtool --mode=compile --tag=CC $CC $CPPFLAGS $CFLAGS \
    -I. -I$srcdir -c -o hello.lo hello.c  || exit 1
$SHELL ./libtool --mode=link --tag=CC $CC $CFLAGS $LDFLAGS \
    -o libhello.la -rpath /notexist hello.lo || exit 1

AC_CONFIG_FILES([Makefile])
AC_OUTPUT
