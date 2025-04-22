#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define endl '\n'
#define db(i) cout << "c -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;

const int N = 1e5+9;
int a[N], suffixSum[N];

void solve(){
    int n, q, l, r;  
    
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }    

    for(int i=n-1;i>=0;--i){
        if(i == n-1)    suffixSum[i] = a[i];
        else    suffixSum[i] = a[i] + suffixSum[i+1];
    }

    cin >> q;
    while(q--){
        cin >> l >> r;
        //if r==n-1, l==n-1, then r+1 >= n which is invalid.
        if(r == n-1)  cout << suffixSum[l] << endl;
        else    cout << suffixSum[l] - suffixSum[r+1] << endl;
    }
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}