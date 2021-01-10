#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll s[4], c=0;
    for(ll i=0; i<4; i++)
        cin>>s[i];
    sort(s, s+4);
    for(ll i=1; i<4; i++)
        if(s[i]==s[i-1])
            c++;
    cout<<c;
    return 0;
}
