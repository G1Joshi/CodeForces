#include <iostream>
using namespace std;

string card(int w, int h, int n)
{
    if (n == 1)
        return "YES";
    int c = 1, m = w * h;
    if (m % 2)
        return "NO";
    while (!(m % 2))
    {
        if (w % 2 == 0)
        {
            w /= 2;
            c *= 2;
        }
        else
        {
            h /= 2;
            c *= 2;
        }
        m = w * h;
    }
    if (c >= n)
        return "YES";
    return "NO";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h, n;
        cin >> w >> h >> n;
        cout << card(w, h, n) << endl;
    }
    return 0;
}