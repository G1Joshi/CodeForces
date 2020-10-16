#include <bits/stdc++.h>
using namespace std;

string solve(string str) {
    for(int i=1; str[i]; i++) {
        if(islower(str[i]))
            return str;
    }
    str[0]=isupper(str[0])?tolower(str[0]):toupper(str[0]);
    transform (str.begin()+1, str.end(), str.begin()+1, ::tolower);
    return str;
}

int main()
{
    string str;
    cin>>str;
    cout<<solve(str);
    return 0;
}
