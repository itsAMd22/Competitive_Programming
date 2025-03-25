#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;  cin >> n;
    int a[n];
    for(int i=0;i<n;i++)   cin >> a[i];
    long long ans = 0;
    for(int i=0;i<n-1;i++)    ans = max(ans, 1LL * a[i] * a[i+1]);
    cout << ans << endl;
}
int main(){
    int t=1;    cin >> t;
    while(t--)  solve();
}