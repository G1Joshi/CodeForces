#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, flag=0;
    cin>>n>>m;
    int arr[m];
    for(int i=0; i<m; i++)
        cin>>arr[i];
    sort(arr, arr+m);
    int best=INT_MAX;
    for(int i=0; i<=m-n; i++) {
        best=min(best, arr[i+n-1]-arr[i]);
        flag=1;
    }
    if(flag)
        cout<<abs(best);
    else
        cout<<0;
    return 0;
}
