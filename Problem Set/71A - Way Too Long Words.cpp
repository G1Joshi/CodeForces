#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--) {
        string str;
        cin>>str;
        int size=str.length();
        if(size<=10) {
            cout<<str;
        }
        else {
            cout<<str[0]<<size-2<<str[size-1];
        }
        cout<<"\n";
    }
    return 0;
}
