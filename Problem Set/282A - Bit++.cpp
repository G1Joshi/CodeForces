#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x=0;
    cin>>n;
    while(n--) {
        string op;
        cin>>op;
        if(op[1]=='+')
            ++x;
        else if(op[1]=='-')
            --x;
    }
    cout<<x;
    return 0;
}
