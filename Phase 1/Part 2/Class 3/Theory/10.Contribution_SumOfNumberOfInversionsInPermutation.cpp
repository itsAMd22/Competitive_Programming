#include<bits/stdc++.h>
using namespace std;

long long fact(long long n){
    long long ans = 1;
    while(n > 1){
        ans *= n;
        n--;
    }
    return ans;
}
void solve(){
    long long n;
    cin >> n;
    cout << 1LL * fact(n) * (n) * (n-1) / 4; 
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