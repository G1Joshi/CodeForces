#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin>>n;
    for(int i=0; i<n; i++) {
        cin>>a;
        if(a)
            break;
    }
    if(a)
        cout<<"HARD";
    else
        cout<<"EASY";
    return 0;
}
