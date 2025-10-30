#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, q, l, r, j = 0, N;
    long long cur = 0, sum = 0;

    cin >> n >> q;
    
    vector<long long> a(n + 1), b(n + 1), oc(n + 1, 0LL), pref(n + 1, 0LL);
    vector<pair<long long, long long>> Q(q + 1, {0, 0}), vp(n + 1, {0, 0});

    
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
    
    for(int i = 1 ; i <= q ; i++){
        cin >> l >> r;
        Q[i] = {l, r};
        if(l <= n)  oc[l]++;
        if(r + 1 <= n)  oc[r + 1]--;
    }

    for(int i = 1 ; i <= n ; i++){
        oc[i] = (cur += oc[i]);
        vp[i] = {oc[i], i};
    }

    sort(a.begin(), a.end()), sort(vp.begin(), vp.end());
	
    for(int i = n ; i > 0 ; i--){
        b[vp[i].second] = a[i];
    }
    
    for(int i = 1 ; i <= n ; i++){
        pref[i] = pref[i - 1] + b[i];
    }
       
    for(int i = 1 ; i <= q ; i++){
        sum += pref[Q[i].second] - pref[Q[i].first-1];   
    }
    
    cout << sum;
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