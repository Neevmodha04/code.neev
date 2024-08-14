/*
Deletion: Used to delete a text (word) from the given string.
*/

#include <cstring>
#include <iostream>
using namespace std;
int main(void) {
  char str1[10] = "hello", str2[10];
  int i = 0, count = 0, pos = 3;
  while (i <= strlen(str1)) {
    if (pos == i) {
      count--;
    }
    str2[count] = str1[i];
    i++;
    count++;
  }
  str2[count] = '\0';

  cout << str2;
}

/*
/tmp/B1yu6u7Fyj.o
helo

=== Code Execution Successful ===
*/
