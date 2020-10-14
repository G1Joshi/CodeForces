#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    vector <int> v;
    cin>>str;
    for(int i=0; i<str.length(); i+=2) {
        v.push_back(str[i]);
    }
    sort(v.begin(), v.end());
    str=v[0];
    for(int i=1; i<v.size(); i++) {
        str+='+';
        str+=v[i];
    }
    cout<<str;
    return 0;
}
