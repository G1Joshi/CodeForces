#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total=0, sum=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        total+=arr[i];
    }
    sort(arr, arr+n);
    reverse(arr, arr+n);
    for(int i=0; i<n; i++) {
        sum+=arr[i];
        if(sum>total/2) {
            cout<<i+1;
            break;
        }
    }
    return 0;
}
