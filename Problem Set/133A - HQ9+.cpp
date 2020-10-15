#include <bits/stdc++.h>
using namespace std;

string solve(string str) {
    for(int i=0; str[i]; i++) {
        if(str[i]=='H' || str[i]=='Q' || str[i]=='9') {
            return "YES";
        }
    }
    return "NO";
}
int main()
{
    string str;
    cin>>str;
    cout<<solve(str);
    return 0;
}
