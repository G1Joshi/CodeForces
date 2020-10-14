#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c=0;
    cin>>a>>b;
    while(true) {
        c++;
        a*=3;
        b*=2;
        if(a>b)
            break;
    }
    cout<<c;
    return 0;
}
