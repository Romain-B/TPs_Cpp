#include "MyClass.h"


MyClass MyClass::sum(MyClass add)
{
  MyClass sum_obj(this->a_+add.a_,this->b_+add.b_);
  return sum_obj;
}

MyClass MyClass::sub(MyClass subs)
{
  MyClass sub_obj(this->a_-subs.a_,this->b_-subs.b_);
  return sub_obj;
}

MyClass MyClass::sum(int add)
{
  MyClass sum_obj(this->a_+add,this->b_+add);
  return sum_obj;
}

MyClass MyClass::sub(int subs)
{
  MyClass sub_obj(this->a_-subs,this->b_-subs);
  return sub_obj;
}




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