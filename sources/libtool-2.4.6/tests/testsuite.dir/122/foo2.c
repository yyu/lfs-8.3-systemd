#include <config.h>
#include <stdio.h>
#include <math.h>

#include "foo.h"

#define nothing libfoo2_LTX_nothing
#define foo2    libfoo2_LTX_foo2
#define hello   libfoo2_LTX_hello

/* Give a global variable definition. */
int nothing;

/* private function */
int _foo2_helper (void) {
  sub ();
  return FOO_RET;
}

/* export functions */
#ifdef __cplusplus
extern "C" {
#endif

int foo2 (void) {
    printf ("sin (0.0) = %g\n", (double) sin ((double) 0.0));
    return _foo2_helper ();
}

int hello () {
    printf ("** This is foolib 2 **\n");
    return HELLO_RET;
}

#ifdef __cplusplus
}
#endif
