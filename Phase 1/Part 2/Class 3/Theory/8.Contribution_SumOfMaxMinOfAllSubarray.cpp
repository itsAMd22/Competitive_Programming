#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

void solve(){
    //n <= 1000;
    int n;
    cin >> n;

    long long a[n + 1], sum = 0;
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n);

    // O(n ^ 2)
    // for(int l = 1 ; l <= n ; l++){
    //     for(int r = l ; r <= n ; r++){
    //         sum += (a[r] - a[l]) * pow(2, max(0, r - l - 1));
    //     }
    // }

    for(int i = 1 ; i <= n ; i++){
        sum += a[i] * ((1LL << (i-1)) - (1LL << (n-i)));
        sum %= mod;
    }
    cout << sum << endl;
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