#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c=0;
    string str;
    cin>>n;
    cin>>str;
    for(int i=0; i<n-1; i++) {
        if(str[i]==str[i+1])
            c++;
    }
    cout<<c;
    return 0;
}
