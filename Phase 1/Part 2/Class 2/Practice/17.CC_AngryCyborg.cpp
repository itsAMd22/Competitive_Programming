#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, q, l, r;
    long long cur = 0;
    cin >> n >> q;
    vector<long long> dest(n + 1, 0);
    map<long long, long long> mp;
    for(int i = 1 ; i <= q ; i++){
        cin >> l >> r;
        if(l <= n)  dest[l]++;
        if(r+1 <= n)  dest[r+1]--, mp[r + 1] -= (r - l + 1);
    }
    for(int i = 1 ; i <= n ; i++){
        dest[i] = (cur += dest[i]);
        cout << dest[i] << " ";
    }
    cout << endl;
    for(int i = 1 ; i <= n ; i++){
        dest[i] += dest[i - 1];
        cout << dest[i] << " ";
    }
    cout << endl;

    for(int i = 1 ; i <= n ; i++){
        dest[i] += mp[i];
        cout << dest[i] << " ";
    }
    cout << endl;
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