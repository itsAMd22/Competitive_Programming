#include<bits/stdc++.h>
using namespace std;

const int N = 1005;
int pref[N][N];

void solve(){
    int n, m, q, x1, y1, x2, y2;
    cin >> n >> m;
    
    string s[n];
    for(int i = 0 ; i < n ; i++){
        cin >> s[i];
    }

    cin >> q;

    while(q--){
        cin >> x1 >> y1 >> x2 >> y2;
        pref[x1][y1]++, pref[x1][y2 + 1]--, pref[x2 + 1][y1]--, pref[x2 + 1][y2 + 1]++;
    }

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            pref[i][j] += pref[i - 1][j] + pref[i][j - 1] - pref[i - 1][j - 1];
            // cout << pref[i][j] << " ";
        }
        // cout << endl;
    }

    
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= m ; j++){
            if(pref[i][j] % 2 == 1){
                s[i - 1][j - 1] = ((s[i - 1][j - 1] == '0') ? '1' : '0');
            }
        }
        cout << s[i - 1] << endl;
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