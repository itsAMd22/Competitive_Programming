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

    //find duplicate
    int ar1[n+1], res1 = 0;
    for(int i=1;i<=n+1;i++){
        cin >> ar1[i];
        res1 ^= (i ^ ar1[i]);
    }   
    cout << "duplicate -> " << res1 << endl;         

    //find missing element
    cin >> n;
    int ar2[n-1], res2 = 0;
    for(int i=1;i<=n-1;i++){
        cin >> ar2[i];
        res2 ^= (i ^ ar2[i]);
    }
    res2 ^= n;
    cout << "missing -> " << res2 << endl;         
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}