#include "TP1.h"


int fact(int a) //fontion factorielle
{
  int i;
  int result = 1; 
  for (i=1; i<=a; ++i)
  {
    result *= i; 
  }
  return result;
}

int r_fact(int a) //fonction factorielle récursive
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

  //Initialisation du tableau, de 1 à 100.
  for (i=0; i<tab_length; ++i)
  {
    tab[i] = i+1;
  } 


  for (i=0; i<tab_length; ++i)
  {
        
    for (j=0; j<tab_length; ++j)
    {
      //Pour un élément != 0, divisible par un élt autre que lui même (qui n'est pas 1)
      if (0 != tab[j] && 0 != tab[i] && 0 == tab[i] % tab[j] && i > j && j > 0)
      {
        tab[i] = 0;  //mise à 0
      }
    }
  }

  //Impression si le nb est != 0
  for (i=0 ; i<tab_length; ++i)
  {
    if (0 != tab[i])
      printf("Nb premier : \t %d\n", tab[i]);
  }
}