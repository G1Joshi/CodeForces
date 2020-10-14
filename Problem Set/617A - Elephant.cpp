#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c=0, t=6;
    cin>>n;
    while(--t && n) {
        c+=n/t;
        n%=t;
    }
    cout<<c;
    return 0;
}
