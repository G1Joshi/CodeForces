#include <bits/stdc++.h>
using namespace std;

string solve(int *a, int *b) {
    for(int i=0; i<26; i++)
        if(a[i]!=b[i])
            return "NO";
    return "YES";
}

int main()
{
    string g, r, m;
    cin>>g>>r>>m;
    int a[26]= {0};
    int b[26]= {0};
    for(int i=0; g[i]; i++)
        a[g[i]-65]++;
    for(int i=0; r[i]; i++)
        a[r[i]-65]++;
    for(int i=0; m[i]; i++)
        b[m[i]-65]++;
    cout<<solve(a, b);
    return 0;
}
