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
    int n;  cin >> n;
    int a[n],k,ct, ans, prv = INT_MIN;
    for(int i=0;i<n;i++)    cin >> a[i];
    
    for(int i=2;i<=1000;i++){
        k = i, ct = 0;
        for(int j=0;j<n;j++){
            if(a[j] % k == 0)    ++ct;
        }
        if(ct>prv)  ans = k, prv = ct;
    }
    cout << ans;
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}