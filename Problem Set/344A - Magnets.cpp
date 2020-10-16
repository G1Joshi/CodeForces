#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c=1;
    cin>>n;
    char arr[n*2];
    for(int i=0; i<n*2; i++)
        cin>>arr[i];
    for(int i=1; i<n*2; i++)
        if(arr[i]==arr[i-1])
            c++;
    cout<<c;
    return 0;
}
