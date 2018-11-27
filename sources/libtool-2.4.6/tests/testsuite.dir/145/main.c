#include <stdio.h>

extern void hello (void);

int
main (void)
{
  printf ("Welcome to GNU Hell!\n");

  hello ();

  return 0;
}
