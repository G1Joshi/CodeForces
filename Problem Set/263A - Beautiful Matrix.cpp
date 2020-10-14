#include <bits/stdc++.h>
using namespace std;

int main()
{
    int M[5][5];
    int a=0, b=0;
    int i, j;
    for(i=0; i<5; i++) {
        for(j=0; j<5; j++) {
            cin>>M[i][j];
            if(M[i][j]) {
                a=i;
                b=j;
            }
        }
    }
    cout<<abs(a-2)+abs(b-2);
    return 0;
}
