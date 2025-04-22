#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define endl '\n'
#define db(i) cout << "c -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;

ll psum[1000005];

void solve(){
    int n,k; cin >> n >> k;
    ll a[n+1], start = 1, mn = INT_MAX;
    
    for(int i=1;i<=n;i++){
        cin >> a[i];
        if(i == 1)  psum[i] = a[i];
        else    psum[i] = a[i] + psum[i-1];
    }    

    if(k == 1){
        for(int i=1;i<=n;i++){
            if(a[i] < mn){
                mn = a[i];
                start = i;
            }
        }
        cout << start;
        return;
    }
    int i;
    for(i=1;i<=n-k;i++){
        cout << i-1 << " " << i+k << endl;
        // cout << psum[i-1] <<  " " << psum[i+k-1] << endl;
        if(psum[i+k] - psum[i-1] < mn){
            start = i;
            mn = psum[i+k] - psum[i-1];
        }  
    }
    cout << i-1 << " " << i+k << endl;
    cout << start;
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}