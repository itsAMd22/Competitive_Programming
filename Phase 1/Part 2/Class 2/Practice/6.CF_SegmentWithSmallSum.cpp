#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans = 0, l = 0, r = 0;
    long long s, sum = 0LL;

    cin >> n >> s;

    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    
    while(r < n){
        if(sum + a[r] <= s){
            sum += a[r++];
            ans = max(ans, r - l);
        }else if(sum > 0){
            sum -= a[l++];
        }else{
            r++, l++;
        }
    }
    cout << ans;
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