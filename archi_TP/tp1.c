#include "tp1.h"

/*
_______
Ex 1
_______
*/

float euro2franc(float e)
{
  return e*6.5595;
}

float franc2euro(float f)
{
  return f/6.5595;
}

float ask()
{
  float a;
  printf("\nEntrez la valeur à convertir : \t");
  scanf("%f",&a);
  return a;
}

void show(float cval, char u)
{
  printf("La valeur convertie est %.2f %c\n\n", cval, u);
}

void start()
{
  float a;
  char choice ='a';
  while(choice == 'a' || choice == 'b')
  {
    printf("\n\t###### CONVERTISSEUR DERNIER CRI ########\n\t___________________________________________\n\n\t\tChoisissez :\n");
    printf("\n\t\t\t (a) : Convertir de franc en euro");
    printf("\n\t\t\t (b) : Convertir d'euro en franc");
    printf("\n\t\t\t (c) : TERMINATE !!\n\n");
    printf("choix : \t");

    scanf("%c%*c",&choice);


    switch(choice)
    {
      case 'a' :
        show(franc2euro(ask()),'E');
        break;
      case 'b' :
        show(euro2franc(ask()),'F');
      default :
        printf("\n\n \t TERMINATED !!");
    }
  }
}

/*
_______
Ex 2
_______
*/

void dates()
{
  int jj,mm,aaaa;
  int jj1,mm1,aaaa1;
  int lim;

  printf("\nEntrez une date et laissez la roue de la fortune tourner !! \n\nDate (jj/mm/aaaa): \t");
  scanf("%d/%d/%d",&jj,&mm,&aaaa);

  if (verif_date(jj,mm))
    lendemain(jj,mm,aaaa);
  else
    printf("\nBien essayé gredin ! Mais je sais reconnaitre une date faussée quand j'en vois une !\n\n");

}

void lendemain(int jj, int mm, int aaaa)
{
  int lim, jj1,mm1,aaaa1;
  if ( (mm % 2 > 0 && mm < 7)||( mm % 2 < 0 && mm > 7))
  {
     lim = 31;
  }
  else if (mm == 2)
    lim = 28;
  else lim = 30;

  if (jj+1 < lim)
  {
    jj1 = jj+1;
    mm1 = mm;
    aaaa1 = aaaa;
  }
  else
  {
    if (mm == 12 && jj == 31)
    {
      jj1 = 01;
      mm1 = 01;
      aaaa1 = aaaa+1;
    }
    else
    {
      jj1 = 01;
      mm1 = mm+1;
      aaaa1 = aaaa;
    }
  }
    printf("\nLe lendemain est le \t %d/%d/%d\n\n",jj1,mm1,aaaa1);

}

bool verif_date(int jj, int mm)
{
  int lim;
  if (jj>31)
    return 0;
  
  else  
  {
    if ( (mm % 2 > 0 && mm < 7)||( mm % 2 < 0 && mm > 7))
    {
      lim = 31;
    }
    else if (mm == 2)
      lim = 28;
    else lim = 30;
  if (jj > lim)
      return 0;
  }
  return 1;
}

/*
_______
Ex 3
_______
*/

void tableaux()
{
  int tab[10] = {1,2,3,4,5,6,7,8,9,10};
  int len = 10;

  pr_normal(tab,len);
  pr_inverse(tab,len);
  pr_1sur2(tab,len);

}

void pr_normal(int tab[], int len)
{
  printf("\n");
  for (int i = 0 ; i<len ; ++i )
  {
    printf(" %d ", tab[i]);
  }
  printf("\n");
}

void pr_inverse(int tab[], int len)
{
  printf("\n");
  for (int i = len-1 ; i>=0 ; --i )
  {
    printf(" %d ", tab[i]);
  }
  printf("\n");
}

void pr_1sur2(int tab[], int len)
{
  printf("\n");
  for (int i = 0 ; i<len ; ++i )
  {
    if( 0 != i%2 )  
      printf(" %d ", tab[i]);
  }
  printf("\n");
}

int sum(int tab[], int len)
{
  int summ = 0;
  for (int i = 0 ; i<len ; ++i )
  {
    summ +=tab[i] ; 
  }
}

/*
_______
Ex 4
_______
*/

void tracking()
{
  FILE* TR = fopen("track", "a+");
  char id[4] ;

  if(NULL != TR)
  {
    
    printf("\nHey psst! ton identifiant stp :\t");
    scanf("%s%*c",id);
    bool test = 0;

    while(!feof(TR))
    {
      char id_in[4] ;
      fgets(id_in,5,TR);
      id_in; 
      if (!strcmp(id_in,id))
        test = 1;
    }
     if (test)
        printf("\nJt'e connais...\n");
      else
      {
        fprintf(TR,"%s\n",id);
        printf("Juste pour cette fois, jt'invite!\n");
      }
    fclose(TR);

  }
}

int nb_exec()
{
  int num;
  FILE* file = fopen("number_of_exec","rb");

  
  if ( NULL != file)
  {
    while(!feof(file))
    {
      fread(&num,sizeof(int),1,file);
    }
    num ++;
    fclose(file);
  }
  else
  {
    num = 1;
  }
  printf("\nNum of exec :\t %d \n\n",num);
  file = fopen("number_of_exec", "wb");
  if (NULL != file)
  {
    fwrite(&num, sizeof(int),1,file);
  }
  fclose(file);
}