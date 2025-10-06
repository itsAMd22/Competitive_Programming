#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n = 1e5, primes = 0;
    vector<set<int>> div(n+1);

    // O(sqrt(N) * Nlog(N) * log(N)) (_harmonc series_)
    for(int i = 1 ; i * i <= n ; i++){
        // fixing the divisors, it would divide m*i for all m.
        for(int j = i ; j <= n ; j += i){
            div[j].insert(i);
            div[j].insert(j/i);
        }
    }

    for(int i = 1 ; i <= n ; i++){
        if(i == 1){
            cout << "size = 1 -> " << 1 << '\n';
            continue;
        }
        if(div[i].size() == 2){
            ++primes;
        }
        cout << "size = " << div[i].size() << " -> ";
        for(auto e : div[i]){
            cout << e << " ";
        }
        cout << '\n';
    }

    cout << "Primes count = " << primes << '\n';
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