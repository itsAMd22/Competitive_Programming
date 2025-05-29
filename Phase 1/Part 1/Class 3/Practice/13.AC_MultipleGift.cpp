#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define db(i) cout << "c -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;

void solve(){
    ll x,y; cin >> x >> y;
    ll ct = 1;
    while((x * 2) <= y){
        x *= 2;
        ++ct;
    }
    cout << ct << endl;
}

int main(){
    Alhamdulillah
    int t=1;    cin >> t;
    while(t--)  solve();
    return 0;
}