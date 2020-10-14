#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int c=1, max=-1;
    for(int i=1; i<str.length(); i++) {
        if(str[i]==str[i-1]) {
            ++c;
            max = max>=c ? max : c;
        }
        else
            c=1;
    }
    if(max>=7)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
