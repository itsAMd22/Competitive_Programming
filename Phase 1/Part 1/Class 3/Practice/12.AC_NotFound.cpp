#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define db(i) cout << "c -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;

int found[26];

void solve(){
    string s;   cin >> s;
    for(auto e:s)   found[int(e - 'a')]++;
    for(int i=0;i<26;i++){
        if(found[i] == 0){
            cout << (char)(i + 'a');
            return;
        }  
    }
    cout << "None";
}

int main(){
    Alhamdulillah
    int t=1;    cin >> t;
    while(t--)  solve();
    return 0;
}