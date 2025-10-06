#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
long long g[N][N], pref[N][N], dif[N][N];

void solve(){
    int n, m, q, x1, x2, y1, y2, val;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cin >> g[i][j];
        }
    }

    long long ans;
    cin >> q;
    while(q--){
        cin >> x1 >> y1 >> x2 >> y2 >> val;
        dif[x1][y1] += val;
        dif[x1][y2 + 1] -= val;
        dif[x2 + 1][y1] -= val;
        dif[x2 + 1][y2 + 1] += val;
    }

    for(int  i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            pref[i][j] = pref[i - 1][j] 
                       + pref[i][j - 1] 
                       - pref[i - 1][j - 1] 
                       + dif[i][j];
        }
    }


    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            cout <<  g[i][j] + pref[i][j] << " "; 
        }
        cout << '\n';
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