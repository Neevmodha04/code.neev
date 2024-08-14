#include <iostream>
using namespace std;

void ins() { cout << "This is INS"; }
void del() { cout << "This is DEL"; }
void dis(int arr[]);
int count = -1;
int main(void) {
  int arry[] = {1, 2, 3, 4}, ch;
  count = 3;
  while (1) {
    cout << "Select a Choice : " << "\n 1: Insert :" << "\n 2: Delete : ";
    cout << "\n 3: Display : " << "\n 4: Exit : ";
    cout << "\n Enter Choice : ";
    cin >> ch;
    switch (ch) {
    case 1:
      ins();
      break;
    case 2:
      del();
      break;
    case 3:
      dis(arry);
      break;
    case 4:
      dis(arry);
      exit(0);
    default:
      cout << "Error choice is not Found :";
    }
  };
}

void dis(int arr[]) {
  int c2 = count;
  cout << "Count(TOP) is :" << c2 << endl;
  cout << "The Stack is : \n";
  while (c2 >= 0) {
    cout << '\t' << arr[c2] << endl;
    c2--;
  }
}
