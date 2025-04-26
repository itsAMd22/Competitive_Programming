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
int ar[N], pxor[N];  

void solve(){
    int n,q,a,b;    cin >> n >> q;
    for(int i=1;i<=n;i++){
        cin >> ar[i];
        pxor[i] = (pxor[i-1] ^ ar[i]);
    }
    while(q--){
        cin >> a >> b;
        cout << (pxor[b] ^ pxor[a-1]) << endl;
        //common ones gets deleted as they are <a.
    }
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}