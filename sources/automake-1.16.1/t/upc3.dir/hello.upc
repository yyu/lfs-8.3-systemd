#include <stdio.h>
#include <upc.h>
#include "message.h"
int
main (void)
{
  printf ("Thread %d says, '%s'\n", MYTHREAD, message());
  return 0;
}
