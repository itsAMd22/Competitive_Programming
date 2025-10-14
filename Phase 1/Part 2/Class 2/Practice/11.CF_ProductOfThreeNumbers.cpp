#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n1, n2, n3;
    cin >> n1;
    for(int i = 2 ; 1LL * i * i <= n1 ; i++){
        if(n1 % i == 0){
            n2 = n1 / i;
            for(int j = i + 1 ; 1LL * j * j <= n2 ; j++){
                if((n2 % j) == 0 && (n2 / j) != j){
                    cout << "YES\n";
                    cout << i << " " << j << " " << n2 / j << '\n';
                    return;
                }
            }
        }
    }
    cout << "NO\n";
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