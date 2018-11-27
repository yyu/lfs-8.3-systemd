#ifndef BAZ_H
#define BAZ_H 1

// Our test C++ base class.
class barbaz
{
public:
  virtual int baz(void) = 0;
  // Some dummy pure virtual functions.
};

// Our test C++ derived class.
class barbaz_derived : public barbaz
{
public:
  virtual int baz(void);
  // Override the base class' pure virtual functions.
};

#endif
