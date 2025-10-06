#include<bits/stdc++.h>
using namespace std;

void solve(){
    
    int n = 65432198;
    vector<int> div1, div2;
    
    //1. Naive Approach

    //O(N)
    for(int i = 1 ; i <= n ; i++){
        if(n % i == 0){
            div1.push_back(i);
        }
    }
    for(auto e : div1){
        cout << e << " ";
    }
    cout << '\n';


    //2. The sqrt Aproach

    // O(sqrt(N)
    // idea is i x j == n =>> min(i, j) <= sqrt(n)

    for(int i = 1 ; i * i <= n ; i++){
        // N.B : i*i can overflow, so long long must be used in that case
        if(n % i == 0){
            div2.push_back(i);
            if((n / i) != i){
                div2.push_back(n / i);
            }
        }
    }
    sort(div2.begin(), div2.end());
    for(auto e : div2){
        cout << e << " ";
    }
    cout << '\n';
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