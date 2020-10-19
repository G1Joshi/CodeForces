#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int max=arr[n-1], i2=n-1;
    for(int i=n-2; i>=0; i--)
        if(arr[i]>=max) {
            max=arr[i];
            i2=i;
        }
    int min=arr[0], i1=0;
    for(int i=1; i<n; i++)
        if(arr[i]<=min) {
            min=arr[i];
            i1=i;
        }
    if(i1>i2)
        cout<<n-1-i1+i2;
    else
        cout<<n-1-i1+i2-1;
    return 0;
}
