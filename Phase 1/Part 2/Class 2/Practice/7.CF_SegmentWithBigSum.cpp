#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans = 100005, l = 0, r = 0;
    long long s, sum = 0LL;

    cin >> n >> s;

    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    
    while(r < n){
        sum += a[r];
        while(l <= r && sum >= s){
            ans = min(ans, r - l + 1);
            sum -= a[l++];
        }
        r++;
    }
    cout << (ans == 100005 ? -1 : ans);
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