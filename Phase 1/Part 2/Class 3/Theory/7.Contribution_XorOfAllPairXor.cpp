#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, ct;
    cin >> n;
    
    int a[n + 1];
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }

    long long XOR = 0;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            XOR ^= (a[i] ^ a[j]);
            // overall result will be zero as each element has a frequency of 2n
        }
    }
    cout << "\nXOR = " << XOR << '\n';
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