#include <config.h>
#include <stdio.h>
#include <math.h>
#include "l4/l4.h"
#include "l3/l3.h"

int var_l4 = 0;
int func_l4 (int indent) {
  int i;
  for (i = 0; i < indent; i++)
    putchar (' ');
  printf ("l4 (%i)\n", var_l4);
  func_l3(indent+1);
  for (i = 0; i < indent; i++)
    putchar (' ');
  printf("libm cos (0.0) = %g\n", (double) cos ((double) 0.0));
  var_l4 += var_l3;
  return 0;
}
