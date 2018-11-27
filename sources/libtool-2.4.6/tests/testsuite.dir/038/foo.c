#include <config.h>
#include <stdio.h>
#include <math.h>

#include "foo.h"

/* Give a global variable definition. */
int nothing = FOO_RET;

int foo (void) {
  printf ("cos (0.0) = %g\n", (double) cos ((double) 0.0));
  return FOO_RET;
}
