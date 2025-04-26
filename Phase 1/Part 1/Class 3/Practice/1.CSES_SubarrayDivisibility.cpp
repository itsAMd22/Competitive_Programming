#include<bits/stdc++.h>
using namespace std;
 
#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define db(i) cout << "c -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;
 
const int N = 2e5+5;
ll psum[N];
map<ll,ll>tr;
 
//tr tracks the already found prefix sums.
 
void solve(){
    ll n,ct = 0;  cin >> n;
    ll a[n+1];
    tr[0] = 1;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        psum[i] = psum[i-1] + a[i];
        ll red = ((psum[i] % n)+n)%n; 
        ct += tr[red];
        tr[red]++; 
    } 
    cout << ct;
 
}
 
int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}