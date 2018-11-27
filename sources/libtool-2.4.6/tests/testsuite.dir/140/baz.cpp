#include <config.h>

#include "foo.h"
#include "baz.h"

// --------------------------------------------------------------------
// Our C++ derived class methods.


int
barbaz_derived::baz(void)
{
  foobar_derived FB;

  return FB.foo();
}
