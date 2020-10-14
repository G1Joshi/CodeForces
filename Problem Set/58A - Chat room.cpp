#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S, s="hello";
    int j=0;
    cin>>S;
    for(int i=0; S[i]; i++) {
        if(S[i]==s[j])
            j++;
    }
    if(j==5)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
