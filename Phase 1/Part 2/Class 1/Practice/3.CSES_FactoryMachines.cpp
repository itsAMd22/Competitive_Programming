#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define db(i) cout << "db -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;

const int N = 2e5+9;
ll n, t, mn = INT_MAX;
vector<ll> a(N);

bool check(ll given_time){
    ll sum = 0;
    for(int i=0;i<n;i++)    sum = min((ll)1e18, sum + (given_time/a[i]));
    return sum >= t;
}

void solve(){
    cin >> n >> t;
    for(int i=0;i<n;i++){
        cin >> a[i];
        mn = min(mn, a[i]);
    }    
    ll l = 1, r  = t * mn, mid, time = -1;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(check(mid))  time = mid, r = mid - 1;
        else    l = mid + 1;
    }
    cout << time;
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}