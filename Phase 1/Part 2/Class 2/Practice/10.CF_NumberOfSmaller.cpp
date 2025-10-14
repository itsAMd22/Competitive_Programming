#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m, ct = 0, j = 0, i = 0;
    cin >> n >> m;

    int a[n], b[m], c[m] = {0};
    for(auto &e : a){
        cin >> e;
    }
    for(auto &e : b){
        cin >> e;
    }

    for(j = 0 ; j < m ; j++){
        while(i < n && a[i] < b[j]){
            i++, ct++;
        }
        c[j] = ct;
    }
    
    for(auto e : c){
        cout << e << " ";
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