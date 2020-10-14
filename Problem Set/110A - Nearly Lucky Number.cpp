#include <bits/stdc++.h>
using namespace std;

string solve(unsigned long long int n) {
    int c=0;
    while(n) {
        if(((n%10)==4) || ((n%10)==7))
            c++;
        n/=10;
    }
    if(!c)
        return "NO";
    while(c) {
        if(((c%10)!=4) && ((c%10)!=7))
            return "NO";
        c/=10;
    }
    return "YES";
}
int main()
{
    unsigned long long int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}
