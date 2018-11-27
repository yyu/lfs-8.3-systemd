#import "play.h"

// Calling: C -> C++ -> ObjC

void hello_objcxx (void)
{
  Hello_OBJCXX *hello = new Hello_OBJCXX;
  hello->hello_objcxx ();
}

void Hello_OBJCXX::hello_objcxx ()
{
  [Hello_ObjCXX display];
}

@implementation Hello_ObjCXX
+ (void)display
{
  std::cout << "[Hello ObjC++,";
  [World_ObjCXX display];
}
@end
