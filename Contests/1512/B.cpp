#include <iostream>
using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n][n];
        struct point p, q;
        bool flag = 1;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
                if (flag && a[i][j] == '*')
                {
                    p.x = i;
                    p.y = j;
                    flag = 0;
                }
                else if (a[i][j] == '*')
                {
                    q.x = i;
                    q.y = j;
                }
            }
        if (p.x == q.x)
        {
            if (p.x == n - 1)
            {
                p.x--;
                q.x--;
            }
            else
            {
                p.x++;
                q.x++;
            }
        }
        else if (p.y == q.y)
        {
            if (p.y == n - 1)
            {
                p.y--;
                q.y--;
            }
            else
            {
                p.y++;
                q.y++;
            }
        }
        else
        {
            int t = p.y;
            p.y = q.y;
            q.y = t;
        }
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
            {
                if (i == p.x && j == p.y)
                    a[i][j] = '*';
                else if (i == q.x && j == q.y)
                    a[i][j] = '*';
            }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                cout << a[i][j];
            cout << "\n";
        }
    }
    return 0;
}