#include <bits/stdc++.h>
using namespace std;

string solve(int *na, int n) {
    for(int i=0; i<n; i++) {
        if(!na[i])
            return "Oh, my keyboard!";
    }
    return "I become the guy.";
}

int main()
{
    int n, p, q;
    cin>>n>>p;
    int na[n]= {0};
    int pa[p];
    for(int i=0; i<p; i++) {
        cin>>pa[i];
        na[pa[i]-1]=1;
    }
    cin>>q;
    int qa[q];
    for(int i=0; i<q; i++) {
        cin>>qa[i];
        na[qa[i]-1]=1;
    }
    cout<<solve(na, n);
    return 0;
}
