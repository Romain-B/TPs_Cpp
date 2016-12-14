#include "Matrice.h"

int main()
{

  Matrice truc;
  Matrice bidule(2,8);

  truc.tab(1,1,56.9);

  printf("\nTab 1.1 %.2f\n",truc.tab()[1][1]);
  printf("%d\n",truc.n() );
  truc.extend(3,0);
  printf("%d\n",truc.n() );

  return 0;
}