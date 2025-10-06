#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+6;
long long a[N], dif[N], ct[N];
long long add[N], rem[N];

void solve(){
    int n, m, k, l, r, d, x, y;
    cin >> n >> m >> k;
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
        dif[i] = a[i] - a[i - 1];
    }

    vector<pair<pair<int, int>, int>> op(m + 1);
    for(int i = 1 ; i <= m ; i++){
        cin >> l >> r >> d;
        op[i] = {{l, r}, d};
    }

    for(int i = 1 ; i <= k ; i++){
        cin >> x >> y;
        add[x]++;
        rem[y+1]++;
    }
    
    long long cur = 0LL;
    for(int i = 1 ; i <= m ; i++){
        
        cur += add[i] - rem[i];

        l = op[i].first.first, r = op[i].first.second, d = op[i].second;

        dif[l] += (cur * d);
        dif[r + 1] -= (cur * d);
    }
    
    for(int i = 1 ; i <= n ; i++){
        cout << (dif[i] += dif[i-1]) << " ";
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