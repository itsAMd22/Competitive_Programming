#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    
    if(n == 1){
        return false;
    }  

    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

void solve(){
    int n = 127;
    cout << boolalpha << isPrime(n) << '\n';
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