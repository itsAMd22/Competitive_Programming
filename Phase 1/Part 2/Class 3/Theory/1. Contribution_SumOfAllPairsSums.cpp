#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    int sum = 0;

    // O(n ^ 2)
    // for(int i = 0 ; i < n ; i++){
    //     // ai element is added n times to the sum. 
    //     // contribution of ai element n * ai-th element.
    //     for(int j = 0 ; j < n ; j++){
    //         cout << i << " + " << j << endl;
    //         sum += (a[i] + a[j]);
    //     }
    // }

    //sum = ⨊ (ai * 2n)
    // O(n)

    for(int i = 0 ; i < n ; i++){
        sum += (2 * n * a[i]);
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