#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, e, ans = 0;
    cin >> n;

    deque<int> dq;
    map<int, int> found;

    for(int i = 0 ; i < n ; i++){
        cin >> e;
        
        while(!found.empty() && found.find(e) != found.end()){
            found.erase(dq.front());
            dq.pop_front();
        }
        
        dq.push_back(e), found[e]++;
        ans = max(ans, (int) dq.size());
    }
    
    cout << ans;
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