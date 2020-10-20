#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c=0;
    cin>>n;
    while(n--) {
        string s;
        cin>>s;
        switch (s[0]) {
        case 'T' :
            c+=4;
            break;
        case 'C' :
            c+=6;
            break;
        case 'O' :
            c+=8;
            break;
        case 'D' :
            c+=12;
            break;
        case 'I' :
            c+=20;
            break;
        }
    }
    cout<<c;
    return 0;
}
