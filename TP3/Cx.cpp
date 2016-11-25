#include "Cx.h"


Cx Cx::sum(Cx obj)
{
  Cx new_cx(this->re_+obj.re_, this->im_+obj.im_);
  return new_cx;
}

Cx Cx::sub(Cx obj)
{
  Cx new_cx(this->re_-obj.re_, this->im_-obj.im_);
  return new_cx;
}

//OPERATIONS FOR VALs
Cx Cx::sum(int val)
{
  Cx new_cx(this->re_+val, this->im_);
  return new_cx;
}

Cx Cx::sub(int val)
{
  Cx new_cx(this->re_-val, this->im_);
  return new_cx;
}


Cx::Cx()
{
  re_ = 0;
  im_ = 0;
}

Cx::Cx(int ire, int iim)
{
  re_ = ire;
  im_ = iim;
}

float Cx::re()
{
  return re_;
}

float Cx::im()
{
  return im_;
}
