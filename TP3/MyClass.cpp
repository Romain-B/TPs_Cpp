#include "MyClass.h"

MyClass::MyClass()
{
  a_ = 1;
  b_ = 1;
}

MyClass::MyClass(const MyClass& model)
{
  assert( sizeof(int) == sizeof(model.a_));
  a_ = model.a_;
  b_ = model.b_;
}

MyClass::MyClass(int ia, int ib)
{
  a_ = ia;
  b_ = ib;
}

int MyClass::a()
{
  return a_;
}

int MyClass::b()
{
  return b_;
}