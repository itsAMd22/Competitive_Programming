#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, l = 0, r = 0;
    long long s, sum = 0LL;

    cin >> n >> s;

    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    long long ct = 0;
    while(r < n){
        sum += a[r];
        while(l <= r && sum >= s){
        	ct += n - r;
        	sum -= a[l++];
        }
        r++;
    }
    cout << ct;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}