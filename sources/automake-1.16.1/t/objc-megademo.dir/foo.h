#ifndef FOO_H
#define FOO_H

#ifdef __cplusplus
#include <iostream>
extern "C" {
#else
#include <stdio.h>
#endif

void world_c (void);

#ifdef __OBJC__
@interface World_ObjC
{ }
+ (void)display;
@end
#endif /* __OBJC__ */

#ifdef __cplusplus
}

class World_CXX
{
  public:
    World_CXX() { }
    virtual ~World_CXX () { }
    void world_cxx ();
};

#ifdef __OBJC__
class World_OBJCXX
{
  public:
    World_OBJCXX () { }
    virtual ~World_OBJCXX () { }
    void world_objcxx ();
};

@interface World_ObjCXX
{ }
+ (void)display;
@end
#endif /* __OBJC__ */

#endif /* __cplusplus */

#endif /* FOO_H */
