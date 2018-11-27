#include <config.h>
#include <stdio.h>
#include <math.h>

#include "foo.h"

#define nothing foo1_LTX_nothing
#define foo1    foo1_LTX_foo1
#define hello   foo1_LTX_hello

/* Give a global variable definition. */
int nothing = FOO_RET;

/* private function */
int _foo1_helper (void) {
  sub ();
  return FOO_RET;
}

/* export functions */
#ifdef __cplusplus
extern "C" {
#endif

int foo1 (void) {
    printf ("cos (0.0) = %g\n", (double) cos ((double) 0.0));
    return _foo1_helper ();
}

int hello () {
    printf ("** This is foolib 1 **\n");
    return HELLO_RET;
}

#ifdef __cplusplus
}
#endif
