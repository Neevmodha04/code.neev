// WAP to String concatenate: Used to combine two strings and store them into
// third string.
#include <cstring>
#include <iostream>
using namespace std;
int main(void) {
  char str1[20] = "Hello", str2[20] = "World", str3[40];
  int i = 0, count = 0;
  while (i < strlen(str1)) {
    str3[count] = str1[i];
    i++;
    count++;
  }
  str3[count] = ' ';
  count++;
  i = 0;
  while (i < strlen(str2)) {
    str3[count] = str2[i];
    count++;
    i++;
  }
  cout << str3 << endl;
}

/*
/tmp/uZmjawHDGe.o
Hello World


=== Code Execution Successful ===
*/
