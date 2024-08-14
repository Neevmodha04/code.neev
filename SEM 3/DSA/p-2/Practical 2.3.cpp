
// WAP to insert a New element in an already Existing array

#include <iostream>
using namespace std;
int main() {
  int a[5], p, x, i;
  cout << "Please Enter the Matrix:\n";
  for (i = 0; i < 5; i++) {
    cin >> a[i];
  }
  cout << "This is the Entered Matrix:\n";
  for (i = 0; i < 5; i++) {
    cout << a[i] << "\n";
  }
  cout << "Please enter the Position to add the new Element: ";
  cin >> p;
  cout << "Please enter the Value of the new Element: ";
  cin >> x;
  int temp = i - 1;
  p--;
  while (temp >= p) {
    a[temp + 1] = a[temp];
    temp--;
  }
  a[p] = x;
  i++;
  for (i = 0; i < 6; i++) {
    cout << a[i] << endl;
  }
  return 0;
}
