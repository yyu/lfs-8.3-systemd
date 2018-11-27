#include <stdio.h>

extern void hello (void);

int
main (int argc, char *argv[])
{
  printf ("Welcome to GNU Hell!\n");

  hello ();

  return 0;
}
