#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin >> n;
    int a[n], mx;
    for(int i=0;i<n;i++)    cin >> a[i];


    for(int l=0;l<n;l++){
        for(int r = l;r<n;r++){
            mx = INT_MIN;
            for(int i=l;i<=r;i++)   mx = max(mx,a[i]);
            cout << mx <<  " ";
        }
    }

    cout << endl;
}

int main(){
    int t=1;    cin >> t;
    while(t--)  solve();
    return 0;
}