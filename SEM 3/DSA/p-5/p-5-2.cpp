// WAP to find the length of a given string

#include <iostream>
using namespace std;
int main(void) {
  string str = "hello";
  int n = 0;
  while (str[n] != '\0') {
    n++;
  }
  cout << "The length is :" << n;
}

/*
/tmp/HPM482l9Cs.o
The length is :5

=== Code Execution Successful ===
*/
