#include <iostream>
using namespace std;

string divide(int n, int o, int t)
{
    if (o % 2)
        return "NO";
    if (t % 2 == 0)
        return "YES";
    if (o > 0 && t)
        return "YES";
    return "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, o = 0, t = 0;
        cin >> n;
        int candy[n];
        for (int i = 0; i < n; i++)
        {
            cin >> candy[i];
            if (candy[i] == 1)
                o++;
            if (candy[i] == 2)
                t++;
        }
        cout << divide(n, o, t) << endl;
    }
    return 0;
}