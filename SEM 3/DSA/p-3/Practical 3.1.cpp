
// WAP to Search Elements of an Array

#include <iostream>
using namespace std;

int main()
{
    int search_value, i;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Enter Value to check in the array: ";
    cin >> search_value;

    bool found = false;

    for (i = 0; i < 10; i++)
    {
        if (search_value == a[i])
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << "Element Found\n";
    }
    else
    {
        cout << "Element Not Found";
    }
    return 0;
}
