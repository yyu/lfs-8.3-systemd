#include <stdio.h>

extern void sub (void);

int main (void)
{
  printf ("Welcome to GNU Libtool subdir-objects test!\n");
  sub();
  return 0;
}
