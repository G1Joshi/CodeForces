#include <bits/stdc++.h>
using namespace std;

string solve(int n) {
    if(n%4==0 || n%7==0 || n%44==0 || n%77==0 || n%47==0 || n%74==0 || n%444==0 || n%447==0 || n%474==0 || n%477==0)
        return "YES";
    while(n) {
        if(((n%10)!=4) && ((n%10)!=7))
            return "NO";
        n/=10;
    }
    return "YES";
}
int main()
{
    int n;
    cin>>n;
    cout<<solve(n);
    return 0;
}
