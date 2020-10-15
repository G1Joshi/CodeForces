#include <bits/stdc++.h>
using namespace std;

int solve(unordered_map <int, int> m) {
    int c=0, r1=0, r2=0,r3=0;
    for(auto a : m) {
        if(a.first==4)
            c+=a.second;
        if(a.first==3) {
            r3+=a.second;
        }
        if(a.first==2) {
            c+=a.second/2;
            r2+=a.second%2;
        }
        if(a.first==1) {
            r1+=a.second;
        }
    }
    if(r3<r1) {
        c+=r3;
        r1-=r3;
    }
    else {
        c+=r3;
        r1=0;
    }
    if(r2) {
        if(r1<3) {
            c+=1;
        }
        else {
            c+=1;
            r1-=2;
            c+=ceil((float)r1/4);
        }
    }
    else
        c+=ceil((float)r1/4);
    return c;
}

int main()
{
    unordered_map <int, int> m;
    int n;
    cin>>n;
    for(int i=0; i<n; i++) {
        int a;
        cin>>a;
        m[a]++;
    }
    cout<<solve(m);
    return 0;
}
