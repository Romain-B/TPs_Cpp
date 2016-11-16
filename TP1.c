#include <stdio.h>

int fact(int a);

int main()
{
  int a ;

  printf("Hello\nEntrez votre valeur :\t");
  scanf("%d", &a);
  printf("\nLa factorielle de la valeur entrée est : \t %d\n", 2*fact(a));

  return 0;
}


int fact(int a)
{
  int i;
  int result = 1; 
  for (i=1; i<=a; ++i)
  {
    result *= i; 
  }
  return result;
}