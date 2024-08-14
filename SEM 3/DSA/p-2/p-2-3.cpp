#include <iostream>
using namespace std;

int main(void) {
  int arry[10], number_of_entry = 0;

  cout << "Enter number of entry : ";
  cin >> number_of_entry;

  cout << "Enter Arry : \n";
  for (int i = 0; i < number_of_entry; i++) {
    cin >> arry[i];
  }
  int number_to_add, position_of_number;
  cout << "Enter Number to add : ";
  cin >> number_to_add;
  cout << "Enter Position of Number : ";
  cin >> position_of_number;

  int temp = number_of_entry - 1;
  position_of_number--;
  while (temp >= position_of_number) {
    arry[temp + 1] = arry[temp];
    temp = temp - 1;
  }
  arry[position_of_number] = number_to_add;
  number_of_entry = number_of_entry + 1;

  for (int i = 0; i < number_of_entry; i++) {
    cout << arry[i] << endl;
  }
}
