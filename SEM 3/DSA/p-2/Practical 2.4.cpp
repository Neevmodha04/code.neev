
// WAP to remove an element from an already existing Array

#include <iostream>
using namespace std;
int main()
{
    int a[10], x, p, n, t;
    cout << "Enter Array Size: ";
    cin >> n;
    cout << "Enter Array:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter Position of the element to be removed: ";
    cin >> p;
    t = --p;
    x = a[p];
    while (t <= n - 1)
    {
        a[t] = a[t + 1];
        t++;
    }
    n--;
    for (int i = 0; i <= n - 1; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
