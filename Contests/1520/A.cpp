#include <iostream>
using namespace std;

string distract(string t)
{
    int a[26] = {};
    for (int i = 0; t[i]; i++)
    {
        if (a[t[i] - 'A'])
            return "NO";
        a[t[i] - 'A'] = 1;
    }
    return "YES";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, t = "";
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i - 1])
            {
                t += s[i];
            }
        }
        cout << distract(t) << "\n";
    }
    return 0;
}
