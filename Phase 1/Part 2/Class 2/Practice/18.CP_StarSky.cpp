#include<bits/stdc++.h>
using namespace std;

int pref[11][101][101];

void solve(){
    int n, q, c, x, y, s;
    cin >> n >> q >> c;
    for(int i = 1 ; i <= n ; i++){
        cin >> x >> y >> s;
        pref[s][x][y]++;
    }

    for(int i = 0 ; i <= c ; i++){
        for(int j = 1 ; j < 101 ; j++){
            for(int k = 1 ; k < 101 ; k++){
                pref[i][j][k] += pref[i][j - 1][k] + pref[i][j][k - 1] - pref[i][j - 1][k - 1];
            }
        }
    }

    int t, x1, y1, x2, y2, ans = 0, total, ct, new_brightness;
    while(q--){
        cin >> t >> x1 >> y1 >> x2 >> y2;
        total = 0;
        for(int i = 0 ; i <= c ; i++){
            ct = pref[i][x2][y2] - pref[i][x1 - 1][y2] - pref[i][x2][y1 - 1] + pref[i][x1 - 1][y1 - 1];
            new_brightness = (i + t) % (c + 1);
            total += ct * new_brightness;
        }
        cout << total << '\n';
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