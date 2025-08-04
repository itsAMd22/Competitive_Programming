#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define db(i) cout << "db -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;

void solve(){
    int n, num, x;   cin >> n >> x;
    map<int, int> mp;
    for(int i=0;i<n;i++){
        cin >> num;
        if(mp.find(x - num) != mp.end()){
            cout << mp[x - num] + 1 << " " << i + 1;
            return;
        }else   mp[num] = i;
    }
    cout << "IMPOSSIBLE";
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}