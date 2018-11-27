#include <config.h>
#include <stdio.h>

#include "foo.h"

int hello (void) {
  printf ("** This is not GNU Hello. There is no built-in mail reader. **\n");
  return HELLO_RET;
}
