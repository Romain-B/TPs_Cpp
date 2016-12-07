#include "fact.h"

int factr(int a) //fonction factorielle récursive
{
  int res = 1;
  if(0 != a-1)
  {
    res *= factr(a-1);
  }
  return res*a ;
}

int facti(int a) //fontion factorielle
{
  int i;
  int result = 1; 
  for (i=1; i<=a; ++i)
  {
    result *= i; 
  }
  return result;
}