#include "fact.h"

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{
  int i=0 ;
  int b = 12;
  for ( i=0 ; i<6 ; i++)
  {
    cout << "factr(" << i << ") = " << factr(i) << endl;
    cout << "facti(" << i << ") = " << facti(i) << endl;
  }
  return EXIT_SUCCESS;
}