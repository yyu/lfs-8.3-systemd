#include <stdio.h>
#include <upc.h>
int
main (void)
{
  printf ("Thread %d says, 'Hello.'\n", MYTHREAD);
  return 0;
}
