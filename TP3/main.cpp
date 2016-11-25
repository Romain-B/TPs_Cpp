#include "tp3.h"

int main()
{
  MyClass test, test2(2,3);
  MyClass test3(test2);


  cout << "Test 1 : " << test.a()<<" , "<<test.b()<<endl;
  cout << "Test 2 : " << test2.a()<<" , "<<test2.b()<<endl;
  cout << "Test 3 : " << test3.a()<<" , "<<test3.b()<<endl;


  return 0;
}