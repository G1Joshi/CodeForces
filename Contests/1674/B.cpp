#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int a = s[0] - 'a';
        int b = s[1] - 'a';
        if (a < b)
            cout << a * 26 + b - a << "\n";
        else
            cout << a * 26 + b - a + 1 << "\n";
    }
    return 0;
}