#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define endl '\n'
#define db(i) cout << "c -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;

// void solve(){
//     ll n,a,b,c;   cin >> n >> a >> b >> c;
//     // b -= c;
//     ll ans1 = n/a, ans2 = (b+c), ans3 = (n-max(a,b))/min(a,b)+1;
//     cout << ans1 << " " << ans2 << " " << ans3 << endl;
//     cout << max(ans1,max(ans2,ans3)) << endl;
// }

bool lav(ll m, ll y, ll c, ll n){
    return (y * m) <= (n + ((m - 1) * c));
}

void solve(){
    unsigned long long t = 50;
    unsigned long long cnt = 0;

    while (t >= 3){
        cnt++;
        t -= 3;
        t++;    
    }

    cout << cnt << endl;
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}