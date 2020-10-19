#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    float total=0.0;
    for(int i=0; i<n; i++) {
        float a;
        cin>>a;
        total+=a/n;
    }
    cout<<total;
    return 0;
}
