#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v;
    int sum[3]={0};
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>v;
            sum[j]+=v;
        }
    }
    if(sum[0] || sum[1] || sum[2])
        cout<<"NO";
    else
        cout<<"YES";
    return 0;
}
