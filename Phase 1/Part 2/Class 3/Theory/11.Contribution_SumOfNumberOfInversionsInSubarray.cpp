#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, ct = 0, right, left;
    cin >> n;
    int a[n + 1];
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }

    for(int i = 1 ; i <= n ; i++){
        for(int j = i + 1 ; j <= n ; j++){
            if(a[i] > a[j]){
                right = n - j + 1, left = i;
                ct += (right * left);
            }
        }
    }

    cout << ct << '\n';
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}