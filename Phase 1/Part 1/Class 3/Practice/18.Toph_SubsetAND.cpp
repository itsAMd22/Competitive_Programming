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
    int n,k;  cin >> n >> k;
    int a[n];   
    for(int i=0;i<n;i++)    cin >> a[i];
    int ans = a[0];
    for(int i=1;i<n;i++)    ans &= a[i];
    if(ans <= k)    cout << "NO\n";
    else    cout << "YES\n";

}

int main(){
    Alhamdulillah
    int t=1;    cin >> t;
    while(t--)  solve();
    return 0;
}