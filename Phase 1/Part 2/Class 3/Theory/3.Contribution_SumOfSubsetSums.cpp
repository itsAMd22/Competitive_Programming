#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    long long a[n + 1], sum = 0;
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];

        //ai contributes in 2 ^ (n - 1) sub-arrays.
        sum += (a[i] * (1 << (n - 1))); 
    }
    cout << "sum = " << sum << '\n';
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