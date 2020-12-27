#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;
    if(n>m)
        swap(n, m);
    if(n%2)
        cout<<"Akshat";
    else
        cout<<"Malvika";
    return 0;
}
