#include <bits/stdc++.h>
using namespace std;

string solve(int *arr) {
    for(int i=0; i<26; i++)
        if(!arr[i])
            return "NO";
    return "YES";
}

int main()
{
    int n;
    cin>>n;
    int arr[26]= {0};
    for(int i=0; i<n; i++) {
        char c;
        cin>>c;
        arr[tolower(c)-97]++;
    }
    cout<<solve(arr);
    return 0;
}
