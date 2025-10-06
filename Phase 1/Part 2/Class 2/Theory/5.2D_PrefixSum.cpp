#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
long long g[N][N], pref[N][N];

// Sample TC
// 5 6
// 0 0 0 0 0 0
// 0 1 5 6 11 8
// 0 1 7 11 9 4
// 0 4 6 1 3 2
// 0 7 5 4 2 3
// 1
// 3 3 4 5 

void solve(){
    int n, m, q, x1, x2, y1, y2;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin >> g[i][j];
        }
    }

    for(int  i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            pref[i][j] = pref[i - 1][j] 
                       + pref[i][j - 1] 
                       - pref[i - 1][j - 1] 
                       + g[i][j];
        }
    }

    long long ans;
    cin >> q;
    while(q--){
        cin >> x1 >> y1 >> x2 >> y2;
        ans = pref[x2][y2] 
            - pref[x1 - 1][y2] 
            - pref[x2][y1 - 1] 
            + pref[x1 - 1][y1 - 1];
        cout << ans << '\n';
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