
// WAP to print a 2x4 Array

#include <iostream>
using namespace std;
int main() {
  int matrix[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 4; j++) {
      cout << "Matrix[" << i << "][" << j << "] = " << matrix[i][j] << "\t\t";
    }
    cout << "\n";
  }
  return 0;
}
// Address of A[i][j] = base-address + W(N[i]+[j])
// N = Total Number of columns(for Row major) or Row (For Column Major)
// W = The Size of the Data-type
// Address of A[i][j] = base-address + W(M[j]+[i]) (Column major)
