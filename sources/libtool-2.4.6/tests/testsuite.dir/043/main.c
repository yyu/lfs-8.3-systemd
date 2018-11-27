#include <config.h>
#include <stdio.h>
#include "foo.h"

int main ()
{
  int value;

  printf ("Welcome to GNU libtool cdemo!\n");

  value = hello();
  printf ("hello returned: %i\n", value);
  if (value == HELLO_RET)
    printf("hello is ok!\n");

  if (foo () == FOO_RET)
    printf("foo is ok!\n");

  return 0;
}
