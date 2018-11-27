#include <config.h>
#include <stdio.h>
#include <math.h>

#include "foo.h"

int foo2 (void) {
  printf ("foo2 cos (0.0) = %g\n", (double) cos ((double) 0.0));
  return FOO_RET;
}
