#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a=0, flag=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    if(arr[0]%2)
        a++;
    if(arr[n-1]%2)
        a++;
    if(arr[n/2]%2)
        a++;
    if(a>1)
        flag=1;
    if(flag) {
        for(int i=0; i<n; i++)
            if(arr[i]%2==0) {
                cout<<i+1;
                break;
            }
    }
    else {
        for(int i=0; i<n; i++)
            if(arr[i]%2) {
                cout<<i+1;
                break;
            }
    }
    return 0;
}
