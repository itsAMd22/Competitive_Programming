#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 6;
int a[N], d[N], b[N];

void solve(){
    int n;
    cin >> n;
    
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }

    for(int i = 1 ; i <= n ; i++){
        d[i] = a[i] - a[i - 1];
    }

    for(int i = 1 ; i <= n ; i++){
        b[i] = (d[i] += d[i - 1]);
    }

    for(int i = 1 ; i <= n ; i++){
        cout << b[i] << " ";
    }
    cout << '\n';
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