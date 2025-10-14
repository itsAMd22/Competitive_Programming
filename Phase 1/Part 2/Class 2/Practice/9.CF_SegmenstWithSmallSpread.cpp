#include<bits/stdc++.h>
using namespace std;

struct DS{
    multiset<long long> s;
    DS() {}
    void insert(long long val){
        s.insert(val);
    }
    void erase(long long val){
        s.erase(s.find(val));
    }
    long long getdif(){
        long long mx = *(--s.end()), mn = *s.begin();
        return mx - mn;
    }
    bool empty(){
        return s.empty();
    }
    void print(){
        for(auto e : s){
            cout << e << " ";
        }
        cout << '\n';
    }
}ds;

void solve(){
    int n, l, r;
    long long k, ans = 0LL;
    
    cin >> n >> k;

    long long a[n];
    
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    l = r = 0;
    while(r < n){
        ds.insert(a[r]);
        while(l < r && ds.getdif() > k){
            ds.erase(a[l++]);
        }
        ans += r - l + 1, r++;
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