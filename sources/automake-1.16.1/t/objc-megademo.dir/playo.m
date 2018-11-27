#import "play.h"

void hello_objc (void)
{
  [Hello_ObjC display];
}

@implementation Hello_ObjC
+ (void)display
{
  printf ("[Hello ObjC,");
  [World_ObjC display];
}
@end
