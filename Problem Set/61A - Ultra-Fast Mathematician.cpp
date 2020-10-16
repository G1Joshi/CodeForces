#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool a[100], b[100];
    string s, t;
    cin>>s>>t;
    for(int i=0; s[i]; i++)
        a[i]=s[i]-48;
    for(int i=0; t[i]; i++)
        b[i]=t[i]-48;
    for(int i=0; s[i]; i++)
        cout<<(a[i]^b[i]);
    return 0;
}
