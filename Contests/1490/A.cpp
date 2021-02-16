#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        for (int i = 0; i < n - 1; i++)
        {
            if (max(v[i], v[i + 1]) > 2 * min(v[i], v[i + 1]))
            {
                int a = v[i];
                int b = v[i + 1];
                if (b > a)
                {
                    while (max(a, b) > 2 * min(a, b))
                    {
                        a *= 2;
                        c++;
                    }
                }
                else
                {
                    while (max(a, b) > 2 * min(a, b))
                    {
                        a = ceil(a / 2.0);
                        c++;
                    }
                }
            }
        }
        cout << c << "\n";
    }
    return 0;
}