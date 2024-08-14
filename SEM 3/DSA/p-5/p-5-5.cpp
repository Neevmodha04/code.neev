/*
String copy: Used to copy the content of one string into other.
*/

#include <cstring>
#include <iostream>
using namespace std;
int main(void) {
  char str1[10] = "Hello", str2[10];
  for (int i = 0; i < strlen(str1); i++) {
    str2[i] = str1[i];
  }
  cout << "The Copied String is : " << str2 << endl;
}

/*
/tmp/RKl8owbbIi.o
The Copied String is : Hello


=== Code Execution Successful ===
*/
