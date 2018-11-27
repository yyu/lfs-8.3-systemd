#include <stdio.h>
#include "ltdl.h"

extern int mlib_func (int, char **);

int main (int argc, char **argv)
{
  int ret = 0;

  printf ("Welcome to GNU libtool mdemo2!\n");
  if (argc < 2) {
    fprintf (stderr, "usage: %s module [module...]\n", argv[0]);
  }

  /* This must be called in the program to get the preloaded symbols */
  LTDL_SET_PRELOADED_SYMBOLS();

  ret = mlib_func(argc, argv);

  return ret;
}
