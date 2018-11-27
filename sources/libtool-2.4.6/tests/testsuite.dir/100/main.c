#include <stdio.h>
#include "ltdl.h"

int
main ()
{
  lt_dlhandle module;
  const char *(*func) (void) = 0;
  int status = 1;

  LTDL_SET_PRELOADED_SYMBOLS();
  if (lt_dlinit() != 0) {
    fprintf (stderr, "error during initialisation: %s\n", lt_dlerror());
    return 1;
  }

  module = lt_dlopen("./module.la");
  if (!module) {
    fprintf (stderr, "error dlopening ./module.la: %s\n", lt_dlerror());
    goto finish;
  }

  func = (const char *(*)(void)) lt_dlsym (module, "hello");
  if (!func) {
    fprintf (stderr, "error fetching func: %s\n", lt_dlerror());
    goto finish;
  }

  printf ("%s\n", (*func) ());
  status = 0;

finish:
  if (lt_dlexit() != 0) {
    fprintf (stderr, "error during finalisation: %s\n", lt_dlerror());
    status = 1;
  }

  return status;
}
