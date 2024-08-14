/*
Insertion: Used to insert a text (word) in the given string.
*/

#include <cstring>
#include <iostream>
using namespace std;
int main(void) {
  char str1[10] = "hello", str2[10], user_in = 'C';
  int i = 0, count = 0, pos = 3;
  while (i <= strlen(str1) + 1) {
    if (pos == i) {
      str2[count] = user_in;
      count++;
    }
    str2[count] = str1[i];
    i++;
    count++;
  }
  str2[count] = '\0';

  cout << str2;
}

/*
/tmp/ZWMsIcc0bh.o
helClo

=== Code Execution Successful ===
*/
