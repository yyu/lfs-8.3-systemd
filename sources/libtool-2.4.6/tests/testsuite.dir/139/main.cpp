#include <config.h>
#if HAVE_IOSTREAM
# include <iostream>
#else
# include <iostream.h>
#endif

#include "foo.h"
#include "baz.h"
#include "conv.h"

#if HAVE_NAMESPACES
namespace std { }
using namespace std;
#endif

int main (int, char *[])
{
  cout << "Welcome to GNU libtool tagdemo C++!" << endl;

  foobar_derived FB;
  // Instantiate the derived class.

  foobar *fb = &FB;
  // Have some fun with polymorphism.

  int value = fb->hello();

  cout << "foobar::hello returned: " << value << endl;
  if (value = HELLO_RET)
    cout << "foobar::hello is ok!" << endl;

  if (fb->foo() == FOO_RET)
    cout << "foobar::foo is ok!" << endl;

  // --------------

  barbaz_derived BB;
  // Instantiate the derived class.

  barbaz *bb = &BB;
  // Have some fun with polymorphism.

  // barbaz_derived::baz() should return FOO_RET since it calls
  // foobar_derived::foo(), which in turn calls ::foo().
  if (bb->baz() == FOO_RET)
    cout << "barbaz::baz is ok!" << endl;

  // --------------

  if (convenience())
    cout << "convenience is ok!" << endl;

  return 0;
}
