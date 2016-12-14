#include <stdio.h>
#include <stdlib.h>

class Matrice
{
public:

  //Getters
  float ** tab();
  int m();
  int n();

  //Setters
  void tab(int i,int j, float v);

  //Methods
  void extend(int add_n, int add_m);


  //Constructeurs

  Matrice();
  Matrice(int n, int m); 
  //~Matrice();
protected:
private:
  int m_; //nb colonnes
  int n_; //nb lignes

  float** tab_; //tableau 2D

  void make_empty_tab();
  float** make_empty_tab(int kn, int km);

  
  
};