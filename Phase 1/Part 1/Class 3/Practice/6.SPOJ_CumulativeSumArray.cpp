#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define db(i) cout << "c -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;

int psum[100005];

void solve(){
    int n;  cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin >> a[i];
        psum[i] = psum[i-1] + a[i];
    }    
    int q,i,j;  cin >> q;
    while(q--){
        cin >> i >> j;
        cout << psum[j+1] - psum[i] << endl;
    }
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}