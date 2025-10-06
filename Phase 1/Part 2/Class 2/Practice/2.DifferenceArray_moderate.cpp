#include<bits/stdc++.h>
using namespace std;

// there are 1 to n list, in each query of the form l,r,x
// append x to all lists in [l,r]
// at the end, print the number of unique elements in each list

const int N = 1e6 + 7;
vector<int> add[N], rem[N];

void solve(){
    int n, q, l, r, x;
    cin >> n >> q;
    while(q--){
        cin >> l >> r >> x;
        add[l].push_back(x);
        rem[r+1].push_back(x);
    }
    int cur = 0;
    map<int, int> mp;
    // mp works as a prefix here
    for(int i = 1 ; i <= n ; i++){
        for(auto x : add[i]){
            mp[x]++;
        }
        for(auto x : rem[i]){
            mp[x]--;
            if(mp[x] == 0){
                mp.erase(x);
            }
        }
        cout << mp.size() << endl;
        // for(auto [x,y] : mp){
        //     while(y--)  cout << x << " ";
        // }
        // cout << endl;        
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t=1;    
    // cin >> t;
    while(t--){
        solve();
    }  
    return 0;
}