#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cassert>

class MyClass
{
public:
  //Getters
  int a();
  int b();

  MyClass sum(MyClass add);
  MyClass sub(MyClass subs);

  MyClass sum(int add);
  MyClass sub(int subs);

  MyClass();
  MyClass(int ia, int ib);
  MyClass(const MyClass& model);
  //~MyClass();

protected:
private:
  int a_,b_;

  
};