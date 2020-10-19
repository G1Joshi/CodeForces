#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll a, b;
        cin>>a>>b;
        cout<<(b*(a/b+1)-a)%b<<"\n";
    }
    return 0;
}
