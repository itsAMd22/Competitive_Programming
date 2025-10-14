#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;

    if(n == 1){
        cout << "No";
        return;
    }
    
    for(int i = 2 ; 1LL * i * i <= n ; i++){
        if(n % i == 0){
            cout << "No";
            return;
        }
    }
    cout << "Yes";
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