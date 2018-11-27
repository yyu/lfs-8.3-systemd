#include <config.h>
#include <stdio.h>

#include "l1/l1.h"

int var_l1 = 0;
int func_l1 (int indent) {
  int i;
  for (i = 0; i < indent; i++)
    putchar (' ');
  printf ("l1 (%i)\n", var_l1);
  var_l1++;
  return 0;
}
