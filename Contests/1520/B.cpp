#include <iostream>
using namespace std;

int ordinary(int n)
{
    if (n < 10)
        return n;
    if (n < 100)
        return n / 11 + 9;
    if (n < 1000)
        return n / 111 + 18;
    if (n < 10000)
        return n / 1111 + 27;
    if (n < 100000)
        return n / 11111 + 36;
    if (n < 1000000)
        return n / 111111 + 45;
    if (n < 10000000)
        return n / 1111111 + 54;
    if (n < 100000000)
        return n / 11111111 + 63;
    if (n < 1000000000)
        return n / 111111111 + 72;
    return n / 1111111111 + 81;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << ordinary(n) << "\n";
    }
    return 0;
}