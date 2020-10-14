#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w, t=0;
    cin>>k>>n>>w;
    for(int i=1; i<=w; i++)
    {
        t+=i*k;
    }
    if(t>n)
        cout<<t-n;
    else
        cout<<"0";
    return 0;
}
