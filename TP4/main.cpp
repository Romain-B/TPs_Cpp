#include "tp4.h"

int main()
{
  char a='b';
  char* p=&a;
  char* p2;
  char poub ;

  printf("\np* : %c\n", *&*&*&*&*&*&*&*&*&*&a);
  while(1)
  {
    printf("\nEntrer p2 : \n");
    scanf("%p%*c",&p2);
    printf("\nP :\t %p\n", p2);
  }
  return 0;
}