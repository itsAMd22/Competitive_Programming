#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define db(i) cout << "db -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;

// STRICK WEAK ORDERING : return true if a < b, returns false if a==b, in c++

void solve(){
    int n;  cin >> n;
    vector<string> v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    sort(v.begin(), v.end(), [](string s1, string s2){
        return (s1+s2) < (s2+s1);
    });

    for(auto e : v) cout << e;
    cout << endl;
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}