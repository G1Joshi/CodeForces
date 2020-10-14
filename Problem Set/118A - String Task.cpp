#include <bits/stdc++.h>
using namespace std;
 
bool isvowel(char c) {
    switch(c) {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
        case 'Y':
        case 'y':
        return true;
        default:
        return false;
    }
}
 
int main() {
    string str, s="";
    cin>>str;
    for(int i=0; i<str.length(); i++) {
        if(isvowel(str[i]))
        continue;
        if(islower(str[i])) {
            s+='.';
            s+=str[i];
        }
        if(isupper(str[i])) {
            s+='.';
            s+=str[i]+32;
        }
    }
    cout<<s;
    return 0;
}
