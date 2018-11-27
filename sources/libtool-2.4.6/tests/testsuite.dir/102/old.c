#include <stdio.h>
#include "ltdl.h"
int main () {
  putchar ('.');
  putchar (lt_dlinit () ? 'E' : '.');
  putchar (lt_dlexit () ? 'E' : '.');
  return 0;
}
