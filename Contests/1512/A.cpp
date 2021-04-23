#include <iostream>
using namespace std;

int odd(int *a, int n)
{
    if (a[0] != a[1] && a[0] != a[2])
        return 1;
    int t = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] != t)
            return i + 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << odd(a, n) << "\n";
    }
    return 0;
}