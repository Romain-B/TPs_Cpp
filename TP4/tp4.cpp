#include "tp4.h"
#include <string>
#include <sstream>


void minmax(int x, int y, int* min, int* max)
{
  if (x > y)
  {
    *max = x;
    *min = y;
  }
  else
  {
    *max = y;
    *min = x;
  }

}

int chance(char ddn[] ) // Sous la forme jj mois aaaa
{
  char* mois[] = {"janvier", "février", "mars", "avril", "mai","juin", "juillet", "août", "septembre", "octobre", "novembre", "décembre"};
  char mo_c[20], jo[2], an[4] ;
  
  sscanf(ddn, "%s %s %s", jo, mo_c, an);
  int mot_i;
  int i,j ;
  int tmp;

  for (i=0; i < sizeof(mois)/sizeof(mois[0]); ++i)
  {
    if (strcmp(mo_c, mois[i]) == 0)
    {
      mot_i = i+1;
    } 
    
  }
  if (mot_i >=10)
  {
    mot_i = mot_i-10+1;
  }
  int total = mot_i;


  for (i=0; i<2 ;++i)
  {
    total += jo[i]-'0';
  }


  for (i=0; i<4 ; ++i)
  {
    total += an[i]-'0';
  }

  
  while (total/10 > 0)
  {
    tmp = total%10;
    total = total/10 + tmp;
  }

  printf("\nHERE !%d\n", total);

  return 0;

}

