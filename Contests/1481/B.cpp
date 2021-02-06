#include <iostream>
#include <vector>
using namespace std;

int bolder(vector<int> &v, int n, int k)
{
    int i = 0;
    while (i < n)
    {
        if (v[i] >= v[i + 1])
            i++;
        else
        {
            v[i] += 1;
            k--;
            if (!k)
                return i + 1;
            i = 0;
        }
    }
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int &a : v)
            cin >> a;
        v.push_back(0);
        cout << bolder(v, n, k) << "\n";
    }
    return 0;
}