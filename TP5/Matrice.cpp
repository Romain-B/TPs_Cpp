#include "Matrice.h"

Matrice::Matrice()
{
  m_=2;
  n_=2;
  this->make_empty_tab();

}

Matrice::Matrice(int n, int m)
{
  m_ = m;
  n_ = n;
  this->make_empty_tab();
}

void Matrice::make_empty_tab()
{
  const int n = n_;
  const int m = m_;

  tab_ = new float*[n];  

  for(int i=0; i<n; ++i)
  {
    tab_[i] = new float[m];
    for (int j=0;j<m; ++j)
    {
      tab_[i][j] = 0;
    }
  }
}
float** Matrice::make_empty_tab(int kn, int km)
{
  const int n = kn;
  const int m = km;

  float** etab;
  etab = new float*[n];  

  for(int i=0; i<n; ++i)
  {
    etab[i] = new float[m];
    for (int j=0;j<m; ++j)
    {
      etab[i][j] = 0;
    }
  }

  return etab;
}

//Methods

void Matrice::extend(int add_n, int add_m)
{
  int new_n = n_+add_n, new_m = m_+add_m;
  float ** new_tab;
  new_tab = this->make_empty_tab(new_n, new_m);

  for(int i=0; i<n_; ++i)
  {
    for(int j=0; j< m_; ++j)
    {
      new_tab[i][j] = tab_[i][j];
    }
  }

  for(int i = 0; i < n_; i++)
    delete[] tab_[i];
  delete[] tab_;

  tab_ = new_tab;
  n_ = new_n;
  m_ = new_m;

}


//Setters

void Matrice::tab(int i, int j, float v)
{
  tab_[i][j] = v;
}


//Getters
int Matrice::n()
{
  return n_;
}

int Matrice::m()
{
  return m_;
}

float** Matrice::tab()
{
  return tab_;
} 