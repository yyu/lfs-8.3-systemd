#include <config.h>
#include <stdio.h>
#include <string.h>

#include "foo.h"

#define STREQ !strcmp

#define lt_preloaded_symbols lt__PROGRAM__LTX_preloaded_symbols

typedef struct
{
  const char *name;
  void *address;
} lt_dlsymlist;

extern LT_DLSYM_CONST lt_dlsymlist lt_preloaded_symbols[];

int main ()
{
  const lt_dlsymlist *s;
  int (*pfoo)() = 0;
  int (*phello)() = 0;
  int *pnothing = 0;

  printf ("Welcome to *modular* GNU Hell!\n");

  /* Look up the symbols we require for this demonstration. */
  s = lt_preloaded_symbols;
  while (s->name)
    {
      if (s->address) {
        const char *name = s->name;
        printf ("found symbol: %s\n", name);
        if (STREQ ("@INIT@", name))
	  ((void(*)())s->address)();
        if (STREQ ("hello", name))
	  phello = (int(*)())s->address;
        else if (STREQ ("foo", name))
	  pfoo = (int(*)())s->address;
        else if (STREQ ("nothing", name))
#ifndef _WIN32
	  /* In an ideal world we could do this... */
	  pnothing = (int*)s->address;
#else /* !_WIN32 */
	  /* In an ideal world a shared lib would be able to export data */
	  pnothing = (int*)&nothing;
#endif
      } else
        printf ("found file: %s\n", s->name);
      s ++;
    }

  /* Try assigning to the nothing variable. */
  if (pnothing)
    *pnothing = 1;
  else
    fprintf (stderr, "did not find the 'nothing' variable\n");

  /* Just call the functions and check return values. */
  if (pfoo)
    {
      if ((*pfoo) () != FOO_RET)
	return 1;
    }
  else
    fprintf (stderr, "did not find the 'foo' function\n");

  if (phello)
    {
      if ((*phello) () != HELLO_RET)
	return 3;
    }
  else
    fprintf (stderr, "did not find the 'hello' function\n");

  return 0;
}
