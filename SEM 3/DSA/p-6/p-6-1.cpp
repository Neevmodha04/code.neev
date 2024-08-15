#include <iostream>
using namespace std;

void ins(int arr[]);
void del(int arr[]);
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
      ins(arry);
      break;
    case 2:
      del(arry);
      break;
    case 3:
      dis(arry);
      break;
    case 4:
      dis(arry);
      exit(0);
    default:
      cout << "Error choice is not Found \n";
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

void del(int arr[]) {
  if (count == -1) {
    cout << "The STACK is Underflow \n";
    return;
  }
  cout << "The Del ele is : " << arr[count] << endl;
  count = count - 1;
  dis(arr);
}

void ins(int arr[]) {
  int x;
  if (count >= 3) {
    cout << "The STACK is Overflow \n";
    return;
  }
  cout << "Enter To add :";
  cin >> x;
  count++;
  arr[count] = x;
  dis(arr);
}