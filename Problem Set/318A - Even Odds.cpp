#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

ll solve(ll n, ll k) {
    ll c=0;
    if(k<=(n+1)/2)
        return 2*(k-1)+1;
    c=(n+1)/2;
    return (k-c)*2;
}

int main()
{
    ll n, k;
    cin>>n>>k;
    cout<<solve(n, k);
    return 0;
}
