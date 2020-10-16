#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, c=0;
    cin>>n>>k;
    for(int i=0; i<n; i++) {
        int a;
        cin>>a;
        if(a>k)
            c+=2;
        else
            c+=1;
    }
    cout<<c;
    return 0;
}
