#ifndef FOO_H
#define FOO_H
// Silly constants that the functions return.
#define HELLO_RET 0xe110
#define FOO_RET 0xf00

// Our C test functions.
extern "C"
{
  int foo(void);
  int hello(void);
}

// Our test C++ base class.
class foobar
{
public:
  virtual int foo(void) = 0;
  virtual int hello(void) = 0;
  // Some dummy pure virtual functions.
};


// Our test C++ derived class.
class foobar_derived : public foobar
{
public:
  virtual int foo(void);
  virtual int hello(void);
  // Override the base class' pure virtual functions.
};

#endif
