#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    int a[n][n], d1 = 0, d2 = 0;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)    cin >> a[i][j];
    }
    
    for(int i=0;i<n;i++)    d1 += a[i][i];
    for(int i=0,j=n-1;i<n;++i,--j)  d2 += a[i][j];
    
    cout << abs(d1-d2);

    return 0;
}