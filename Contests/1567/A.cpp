#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                cout << 'L';
            else if (s[i] == 'R')
                cout << 'R';
            else if (s[i] == 'U')
                cout << 'D';
            else if (s[i] == 'D')
                cout << 'U';
        }
        cout << '\n';
    }
    return 0;
}
