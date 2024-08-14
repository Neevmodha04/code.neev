/*
Substring: Used to find substring from the given string.
*/

#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char str1[10] = "Hello", str2[10] = {0};
  char index;
  int j = 0;

  cout << "The Given String is : " << str1 << endl;
  cout << "Enter the char to remove from STRING: ";
  cin >> index;

  for (int i = 0; i < strlen(str1); i++) {
    if (index != str1[i]) {
      str2[j++] = str1[i];
    }
  }
  str2[j] = '\0'; // Null-terminate the resultant string

  cout << "Resultant String: " << str2 << endl;

  return 0;
}

/*
/tmp/JBvAwW3let.o
The Give String is : Hello
Enter The Char to remove form STRING :e
H

=== Code Execution Successful ===
*/
