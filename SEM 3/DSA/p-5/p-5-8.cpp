/*
Reverse Used to reverse the content of the given string.
*/

#include <cstring>
#include <iostream>
using namespace std;

int main(void) {
  char str1[10] = "Hello", str2[10];
  int i = 0, end = strlen(str1);

  while (i <= strlen(str1)) {
    // cout << end << i;
    str2[end] = str1[i - 1];
    i++;
    end--;
  }
  cout << "The Reversed String is :";
  puts(str2);
  cout << endl;
}

/*
/tmp/ZyMBxqHJlr.o
The Reversed String is :olleH



=== Code Execution Successful ===
*/
