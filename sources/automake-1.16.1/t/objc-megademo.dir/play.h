#ifndef PLAY_H
#define PLAY_H

#include "foo.h"

#ifdef __cplusplus
extern "C" {
#endif

void hello_cxx (void);
void hello_objc (void);
void hello_objcxx (void);

#ifdef __OBJC__
@interface Hello_ObjC
{ }
+ (void)display;
@end
#endif /* __OBJC__ */

#ifdef __cplusplus
}

class Hello_CXX
{
  public:
    Hello_CXX() { }
    virtual ~Hello_CXX () { }
    void hello_cxx ();
};

#ifdef __OBJC__
@interface Hello_ObjCXX
{ }
+ (void)display;
@end

class Hello_OBJCXX
{
  public:
    Hello_OBJCXX () { }
    virtual ~Hello_OBJCXX () { }
    void hello_objcxx();
};
#endif /* __OBJC__ */

#endif /* __cplusplus */

#endif /* PLAY_H */
