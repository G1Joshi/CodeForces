#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, flag=1;
    cin>>n;
    while(n--) {
        if(flag)
            cout<<"I hate ";
        if(!flag)
            cout<<"I love ";
        if(n)
            cout<<"that ";
        flag=!flag;
    }
    cout<<"it";
    return 0;
}
