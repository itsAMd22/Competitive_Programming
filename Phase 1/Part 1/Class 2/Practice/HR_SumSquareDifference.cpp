#include<bits/stdc++.h>
using namespace std;

#define ll long long

//sum of i = n*(n+1)/2
//sum of i^2  = n*(n+1)*(2*n+1)/6

void solve(){
    ll n;   cin >> n;
    ll ans = (n * (n+1) / 2) * (n * (n+1) / 2);
    // for(int i=1;i<=n;++i)   ans -= i*i;
    //cout << abs(ans) << endl;
    cout << abs(ans - (n*(n+1)*(2*n+1)/6)) << endl;
}

int main(){
    int t=1;    cin >> t;
    while(t--)  solve();
    return 0;
}