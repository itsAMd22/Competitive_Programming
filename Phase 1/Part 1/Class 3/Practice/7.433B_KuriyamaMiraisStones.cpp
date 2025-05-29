#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define db(i) cout << "c -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;


const int N = 1e5+6;
ll psuma[N], psumb[N];
ll a[N], b[N];

void solve(){
    int n;  cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        b[i] = a[i];
        psuma[i] = psuma[i-1] + a[i];
    }

    sort(b,b+n+1);
    for(int i=1;i<=n;i++)   psumb[i] = psumb[i-1] + b[i];


    int m,q,l,r;  cin >> m;
    while(m--){
        cin >> q >> l >> r;
        if(q == 1)  cout << psuma[r] - psuma[l-1] << endl;
        else   cout << psumb[r] - psumb[l-1] << endl;
    }
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}