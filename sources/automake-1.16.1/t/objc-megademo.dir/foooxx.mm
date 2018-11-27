#import "foo.h"

// Calling: ObjC -> C++

@implementation World_ObjCXX
+ (void)display
{
  World_OBJCXX *world = new World_OBJCXX;
  world->world_objcxx ();
}
@end

void World_OBJCXX::world_objcxx ()
{
  std::cout << " world ObjC++]" << "\n";
}
