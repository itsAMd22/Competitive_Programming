#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k, q, l, r, x, index;
    cin >> n >> k;
    long long cur = 0;
    vector<long long> a(n + 1, 0), extra(n + 1, 0);

    while(k--){
        cin >> l >> r >> x;
        extra[l] += x, extra[r + 1] -= x;
    }

    for(int i = 0 ; i < n ; i++){
        a[i] = (cur += extra[i]);
    }
    cin >> q;
    while(q--){
        cin >> index;
        cout << a[index] << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
