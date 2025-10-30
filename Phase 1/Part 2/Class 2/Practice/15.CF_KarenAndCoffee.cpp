#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, q, l, r, a, b;
    cin >> n >> k >> q;

    vector<long long> temp(200005, 0), pref(200005, 0);
    
    for(int i = 1 ; i <= n ; i++){
        cin >> l >> r;
        temp[l]++, temp[r + 1]--;
    }

    long long cur = 0;
    
    for(int i = 1 ; i <= 200005 ; i++){
        temp[i] = (cur += temp[i]);
        pref[i] += pref[i - 1] + (temp[i] >= k);
    }

    while(q--){
        cin >> a >> b;    
        cout << pref[b] - pref[a - 1] << '\n';
    }
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

