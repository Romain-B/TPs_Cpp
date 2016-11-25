#include <stdio.h>

class Cx
{
public:

  //Getters
  float re();
  float im();

  Cx();
  Cx(int ire, int iim);
protected:
private :
  float re_;
  float im_;
  
};