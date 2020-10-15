#include <bits/stdc++.h>
using namespace std;

bool solve(int n, int &year) {
    year=n;
    int arr[10]= {};
    while(n) {
        arr[n%10]++;
        n/=10;
    }
    for(int i=0; i<10; i++)
        if(arr[i]>1)
            return false;
    return true;
}

int main()
{
    int n, year;
    cin>>n;
    while(true) {
        if(solve(++n, year))
            break;
    }
    cout<<year;
    return 0;
}
