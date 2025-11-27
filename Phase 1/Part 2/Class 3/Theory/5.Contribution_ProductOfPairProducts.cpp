#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    long long product = 1;

    // O(n ^ 2)
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ; j++){
    //         cout << i << " + " << j << endl;
    //         sum *= (a[i] * a[j]);
    //     }
    // }

    //product = ⨊ (ai ^ (2 * n))
    // O(n)

    for(int i = 0 ; i < n ; i++){
        product *= pow(a[i], n + n);
    }
    cout << "product = " << product << '\n';
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