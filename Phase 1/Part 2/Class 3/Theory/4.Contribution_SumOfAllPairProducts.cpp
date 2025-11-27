#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    long long sum = 0, total = accumulate(a, a + n, 0);

    // O(n ^ 2)
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ; j++){
    //         cout << i << " + " << j << endl;
    //         sum += (a[i] * a[j]);
    //     }
    // }

    //sum = ⨊ (ai * total)
    // O(n)

    for(int i = 0 ; i < n ; i++){
        sum += (a[i] * total);
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