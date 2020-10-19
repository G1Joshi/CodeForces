#include<bits/stdc++.h>
using namespace std;

int main()
{
    int flag=0;
    string s, t="";
    cin>>s;
    for(int i=0; s[i]; i++) {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') {
            if(i==0)
                flag=0;
            else
                flag=1;
            i+=2;
            continue;
        }
        if(flag) {
            t+=" ";
            flag=0;
        }
        t+=s[i];
    }
    cout<<t;
    return 0;
}
