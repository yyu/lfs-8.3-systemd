#include <config.h>
#ifdef HAVE_IOSTREAM
# include <iostream>
#else
# include <iostream.h>
#endif

#ifdef HAVE_NAMESPACES
namespace std { }
using namespace std;
#endif

#include <math.h>

#include "foo.h"

// Our C functions.
int
foo(void)
{
  cout << "cos (0.0) = " << (double) cos ((double) 0.0) << endl;
  return FOO_RET;
}

int
hello(void)
{
  cout << "** This is libfoo (tagdemo) **" << endl;
  return HELLO_RET;
}


// --------------------------------------------------------------------
// Our C++ derived class methods.


int
foobar_derived::foo(void)
{
  return ::foo();
}

int
foobar_derived::hello(void)
{
  return ::hello();
}
