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
    ll k;  cin >> k;
    ll ans = 0;
    for(ll i=1;i<=k;i++){
      for(ll j=1;j<=k;j++){
        for(ll l=1;l<=k;l++){
          ans += __gcd(i,__gcd(j,l));
        }
      }
    }
    cout << ans;
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}