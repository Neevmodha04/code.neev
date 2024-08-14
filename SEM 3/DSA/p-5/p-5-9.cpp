/*
Append: Used to add new string at the end of the given string.
*/
#include <cstring>
#include <iostream>
using namespace std;
int main(void) {
  char str1[20] = "Hello", str2[20] = "World", str3[40];
  int i = 0, count = strlen(str1);
  while (i < strlen(str1)) {
    str1[count] = str2[i];
    i++;
    count++;
  }
  str1[count] = '\0';
  cout << str1 << endl;
}

/*
/tmp/dfF1TqcyCB.o
HelloWorld


=== Code Execution Successful ===
*/
