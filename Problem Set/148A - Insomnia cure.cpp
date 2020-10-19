#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, l, m, n, d, c=0;
    cin>>k>>l>>m>>n>>d;
    vector <int> v(d, 0);
    for(int i=1; i<=d; i++)
        if(!v[i-1])
            if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
                v[i-1]=1;
    for(auto a : v)
        if(a)
            c++;
    cout<<c;
    return 0;
}
