//****************************************************************************
//
//
//
//****************************************************************************

#include <cassert>
#include <cstdlib>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(int argc, char* argv[]) {
  assert(argc == 3);

  // Matrix 1
  const int x1 = 2, y1 = 3;
  float mat1[x1][y1];

  // Matrix 2
  int x2 = atoi(argv[1]);
  int y2 = atoi(argv[2]);
  float mat2[x2][y2];

  for (int i = 0 ; i < x2 ; ++i) {
    for (int j = 0 ; j < y2 ; ++j) {
      mat2[i][j] = 200 + 10 * i + j;
    }
  }

  // Matrix 3
  int x3, y3;
  cout << "Please enter the dimension of the other matrices:" << endl;
  cin >> x3 >> y3;

  float** mat3 = new float* [x3];
  for (int i = 0 ; i < x3 ; ++i) {
    mat3[i] = new float[y3];
    for (int j = 0 ; j < y3 ; ++j) {
      mat3[i][j] = 300 + 10 * i + j;
    }
  }

  // Matrix 4
  int x4 = x3, y4 = y3;
  float* mat4 = new float[x4 * y4];
  for (int i = 0 ; i < x4 ; ++i) {
    for (int j = 0 ; j < y4 ; ++j) {
      mat4[i * y4 + j] = 400 + 10 * i + j;
    }
  }

  // Matrix 5


  // Display the matrices
  for (int i = 0 ; i < x1 ; ++i) {
    for (int j = 0 ; j < y1 ; ++j) {
      cout << mat1[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  for (int i = 0 ; i < x2 ; ++i) {
    for (int j = 0 ; j < y2 ; ++j) {
      cout << mat2[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  for (int i = 0 ; i < x3 ; ++i) {
    for (int j = 0 ; j < y3 ; ++j) {
      cout << mat3[i][j] << " ";
    }
    cout << endl;
  }
  cout << endl;
  int max_i = x4 * y4;
  for (int i = 0 ; i < max_i ; ++i) {
    cout << mat4[i] << " ";
    if (i % y4 == y4 - 1) cout << endl;
  }
  cout << endl;

  delete mat3;
  delete mat4;

  return EXIT_SUCCESS;
}
