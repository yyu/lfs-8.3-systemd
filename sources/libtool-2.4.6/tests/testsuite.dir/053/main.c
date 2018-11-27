#include <config.h>
#include <stdio.h>
#include <string.h>

#include "l1/l1.h"
#include "l2/l2.h"
#include "l4/l4.h"

#define STREQ !strcmp

int main (int argc, char **argv)
{
  printf("dependencies:\n");
  func_l1(0);
  func_l2(0);
  func_l4(0);
  if (argc == 2 && STREQ (argv[1], "-alt")
      && var_l1 + var_l2 + var_l4 == 8)
	return 0;
  printf("var_l1(%d) + var_l2(%d) + var_l4(%d) == %d\n",
         var_l1,var_l2,var_l4, var_l1 + var_l2 + var_l4);
  if (var_l1 + var_l2 + var_l4 != 19)
    {
	printf("var_l1(%d) + var_l2(%d) + var_l4(%d) != 19\n",
               var_l1,var_l2,var_l4);
	return 1;
    }
  return 0;
}
