#include <config.h>
#include <stdio.h>

#include "l3/l3.h"
#include "l1/l1.h"
#include "l2/l2.h"

int var_l3 = 0;
int func_l3 (int indent) {
  int i;
  for (i = 0; i < indent; i++)
    putchar (' ');
  printf ("l3 (%i)\n", var_l3);
  func_l1(indent+1);
  var_l3 += var_l1;
  func_l2(indent+1);
  var_l3 += var_l2;
  return 0;
}
