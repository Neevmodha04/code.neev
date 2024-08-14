
// WAP to print a 2x4 Array with their Position Indexes

#include <iostream>
using namespace std;
int main() {
  int matrix[2][4];

  for (int b = 0; b < 4; b++) {
    for (int a = 0; a < 2; a++) {
      cin >> matrix[a][b];
    }
  }
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      cout << "Matrix[" << i << "][" << j << "] = " << matrix[i][j] << "\t\t";
    }
    cout << "\n";
  }
  return 0;
}
