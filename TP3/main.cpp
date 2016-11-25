#include "tp3.h"

int main()
{
  MyClass test, test2(2,3), test4;
  MyClass test3(test2);


  cout << "Test 1 : " << test.a()<<" , "<<test.b()<<endl;
  cout << "Test 2 : " << test2.a()<<" , "<<test2.b()<<endl;
  cout << "Test 3 : " << test3.a()<<" , "<<test3.b()<<endl;

  test4 = test.sum(test2);

  printf("Test 4 : %d,%d\n", test4.a(),test4.b());

  test = test.sum(10);

  printf("Test 1 : %d,%d\n", test.a(),test.b());



  return 0;
}