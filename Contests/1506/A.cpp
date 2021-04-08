#include <iostream>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n, m, x, y, z = 0;
        cin >> n >> m >> x;
        for (long long int i = 1; i <= n; i++)
        {
            ++z;
            long long int y = i;
            if (y == x)
                break;
            for (long long int j = 1; j < m; j++)
            {
                ++z;
                y += n;
                if (y == x)
                    break;
            }
            if (y == x)
                break;
        }
        cout << z<<"\n";
    }
    return 0;
}