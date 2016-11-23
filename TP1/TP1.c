#include <stdio.h>

int fact(int a);
int r_fact(int a);
void premier();

int main()
{
  int a ;

  //printf("Hello\nEntrez votre valeur :\t");
  // scanf("%d", &a);
  // printf("\nLa factorielle de la valeur entrée est : \t %d\n", fact(a));
  //   printf("\nLa factorielle (2) de la valeur entrée est : \t %d\n", r_fact(a));

  premier();

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

int r_fact(int a)
{
  int res = 1;
  if(0 != a-1)
  {
    res *= r_fact(a-1);
  }
  return res*a ;
}

void premier()
{
  int tab[100];
  int i;
  int j;
  int tab_length = 100 ;
  for (i=0; i<tab_length; ++i)
  {
    tab[i] = i+1;
  } 


  for (i=0; i<tab_length; ++i)
  {
        
    for (j=0; j<tab_length; ++j)
    {
      if (0 != tab[j] && 0 != tab[i] && 0 == tab[i] % tab[j] && i > j && j > 0)
      {
        tab[i] = 0;  
      }
    }
  }

  for (i=0 ; i<tab_length; ++i)
  {
    if (0 != tab[i])
      printf("Nb premier : \t %d\n", tab[i]);
  }
}