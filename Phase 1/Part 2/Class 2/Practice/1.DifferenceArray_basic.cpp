#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 7;
long long a[N], d[N];

void solve(){
    int n, q, l, r, x;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
        d[i] = a[i] - a[i - 1];
    }
    while(q--){
        cin >> l >> r >> x;
        
        d[l] += x; 
        // difference between a[l] && a[l-1] has increased by x
        
        d[r + 1] -= x; 
        // difference between a[r+1] && a[r] has increased by x
    }

    for(int i = 1 ; i <= n ; i++){
        cout << (d[i] += d[i - 1]) << " ";
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t=1;    
    cin >> t;
    while(t--){
        solve();
    }  
    return 0;
}