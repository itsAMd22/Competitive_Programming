#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define db(i) cout << "db -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;

const int N = 2e5+6;
int a[N];
int n, k;

bool f(ll x, ll y){
    ll sum = 0;
    for(int i=n/2+1;i<n;i++)  sum += (a[i] < x ? (x - a[i]) : 0);
    return sum <= (k - y);
}

void solve(){
    cin >> n >> k;
    
    for(int i=0;i<n;i++)    cin >> a[i];
    sort(a, a + n);
    
    ll lo = a[n/2], hi = a[n/2] + k, mid, ans = -1, median;
    
    if(n/2 == 0){
        cout << a[0] + k;
        return;
    }

    while(lo <= hi){
        mid = lo + (hi - lo) / 2;
        if(f(mid, mid - a[n/2]))   ans = mid, lo = mid + 1;
        else    hi = mid - 1;
    }
    cout << ans;
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}