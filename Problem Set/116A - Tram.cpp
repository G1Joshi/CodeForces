#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c=0, cap=0;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a>>b;
        c=c+b-a;
        cap=c>cap ? c : cap;
    }
    cout<<cap;
    return 0;
}
