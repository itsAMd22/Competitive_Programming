#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
long long pref[N][N];
char g[N][N];



void solve(){
    int n, m, q, x1, x2, y1, y2;
    cin >> n >> q;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cin >> g[i][j];
        }
    }

    for(int  i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            pref[i][j] = pref[i - 1][j] 
                       + pref[i][j - 1] 
                       - pref[i - 1][j - 1] 
                       + (g[i][j] == '*');
        }
    }

    long long ans;
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