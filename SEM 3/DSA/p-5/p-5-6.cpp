/*
String compare: Used to compare two strings for equality.
*/

#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
int main(void) {
  char str1[10] = "Hello", str2[10] = "hello";
  if (strlen(str1) == strlen(str2)) {
    for (int i = 0; i < strlen(str1); i++) {
      str1[i] = toupper(str1[i]);
      str2[i] = toupper(str2[i]);
      if (str1[i] != str2[i]) {
        cout << "String is Not same";
        return 1;
      }
    }
    cout << "String is Same";
    return 0;
  } else {
    cout << "String is Not same";
    return 1;
  }
}

/*
/tmp/DdXsPEyBLL.o
String is Same

=== Code Execution Successful ===
*/
