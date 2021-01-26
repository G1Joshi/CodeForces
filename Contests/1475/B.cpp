#include <iostream>
using namespace std;
 
string year(int n)
{
    if (n % 2020 == 0)
        return "YES";
    if (n % 2021 == 0)
        return "YES";
    int q = n / 2020;
    int r = n % 2020;
    if (r <= q)
        return "YES";
    return "NO";
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << year(n) << "\n";
    }
    return 0;
}
