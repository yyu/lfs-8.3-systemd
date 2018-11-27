#include <config.h>
#include <stdio.h>
#include <math.h>

#include "foo.h"

int foo() {
  printf ("cos (0.0) = %g\n", (double) cos ((double) 0.0));
  return FOO_RET;
}

int hello() {
  printf ("** This is libfoo **\n");
  return HELLO_RET;
}
