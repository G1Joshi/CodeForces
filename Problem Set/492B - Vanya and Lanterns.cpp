#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, l;
    cin>>n>>l;
    ll a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n);
    ll m=2*max(a[0],l-a[n-1]);
    for (int i=1; i<n; i++)
        m=max(m, a[i]-a[i-1]);
    printf("%.10f\n",m/2.);
    return 0;
}
