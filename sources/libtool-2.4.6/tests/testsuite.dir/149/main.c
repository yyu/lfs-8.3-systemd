#include <ltdl.h>
#include <stdio.h>

typedef int funcp (void);

static int errors = 0;

int
main (void)
{
  lt_dlhandle handle;

  LTDL_SET_PRELOADED_SYMBOLS();

  if (lt_dlinit () != 0)
    {
      fprintf (stderr, "error during initialization: %s\n", lt_dlerror ());
      return 1;
    }

  handle = lt_dlopenext ("libmodule");
  if (!handle)
    {
      fprintf (stderr, "can't open libmodule: %s\n", lt_dlerror ());
      ++errors;
    }

  {
    funcp *f = (funcp *) lt_dlsym (handle, "f");

    if (f)
      {
        printf ("%d\n", f ());
      }
    else
      {
        fprintf (stderr, "function 'f' not found: %s\n", lt_dlerror ());
        ++errors;
      }
  }

  if (lt_dlexit () != 0)
    {
      fprintf (stderr, "error during exit: %s\n", lt_dlerror ());
      ++errors;
    }

  return (errors != 0);
}
