#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int flag = 1;
        string s;
        cin >> s;
        for (int i = 0; s[i]; i++)
        {
            if (flag)
            {
                if (s[i] != 'a')
                    s[i] = 'a';
                else
                    s[i] = 'b';
                flag = 0;
            }
            else
            {
                if (s[i] != 'z')
                    s[i] = 'z';
                else
                    s[i] = 'y';
                flag = 1;
            }
        }
        cout << s << "\n";
    }
    return 0;
}
