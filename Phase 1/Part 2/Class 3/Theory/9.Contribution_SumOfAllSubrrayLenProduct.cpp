#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }

    long long sum = 0;
    for(int i = 1 ; i <= n ; i++){
        sum += 1LL * a[i] * ((n - i + 1) * (n - i) / 2) * (i - 1) * (n - i + 1) / 2;
    }


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