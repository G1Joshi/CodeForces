#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l=0, u=0;
    string str;
    cin>>str;
    for(int i=0; str[i]; i++) {
        if(islower(str[i]))
            l++;
        if(isupper(str[i]))
            u++;
    }
    if(u>l)
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    else
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout<<str;
    return 0;
}
