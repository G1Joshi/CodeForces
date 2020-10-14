#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin>>n>>k;
    char arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    while(k--) {
        for(int i=1; i<n; i++) {
            if(arr[i]=='G' && arr[i-1]=='B') {
                char t=arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=t;
                i++;
            }
        }
    }
    for(int i=0; i<n; i++)
        cout<<arr[i];
    return 0;
}
