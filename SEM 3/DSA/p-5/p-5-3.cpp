/* WAP to Conversion: Used to convert the case of the given string (i.e upper to
lower and vice versa). */

#include <cctype>
#include <cstring>
#include <iostream>

using namespace std;
int main(void) {
  char str[] = "TOLANI", str1[10];
  int i = 0;
  while (i < strlen(str)) {
    str1[i] = str[i] + 32;
    i++;
  }
  puts(str1);
}

/*
tolani


=== Code Execution Successful ===
*/
