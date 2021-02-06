#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, q;
        cin >> x >> y;
        string s;
        cin >> s;
        int l = 0, u = 0, r = 0, d = 0;
        for (int i = 0; s[i]; i++)
        {
            switch (s[i])
            {
            case 'L':
                l++;
                break;
            case 'U':
                u++;
                break;
            case 'R':
                r++;
                break;
            case 'D':
                d++;
                break;
            }
        }
        if (x >= 0 && y >= 0)
            q = 1;
        else if (x <= 0 && y >= 0)
            q = 2;
        else if (x <= 0 && y <= 0)
            q = 3;
        else if (x >= 0 && y <= 0)
            q = 4;
        switch (q)
        {
        case 1:
            if (r >= abs(x) && u >= abs(y))
                cout << "YES";
            else
                cout << "NO";
            break;
        case 2:
            if (l >= abs(x) && u >= abs(y))
                cout << "YES";
            else
                cout << "NO";
            break;
        case 3:
            if (l >= abs(x) && d >= abs(y))
                cout << "YES";
            else
                cout << "NO";
            break;
        case 4:
            if (r >= abs(x) && d >= abs(y))
                cout << "YES";
            else
                cout << "NO";
            break;
        }
        cout << "\n";
    }
    return 0;
}