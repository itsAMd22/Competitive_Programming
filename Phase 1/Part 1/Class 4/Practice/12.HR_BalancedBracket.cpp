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
    string s;   cin >> s;
    
    stack<char> v;

    for(int i=0;i<s.size();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')   v.push(s[i]);
        else{
            if(v.empty()){
                cout << "NO\n";
                return;
            }
            else if(v.top() == '(' && s[i] == ')')   v.pop();
            else if(v.top() == '{' && s[i] == '}')   v.pop();
            else if(v.top() == '[' && s[i] == ']')   v.pop();
            else{
                cout << "NO\n";
                return;
            }
        }
    }
    cout << (v.empty() ? "YES\n" : "NO\n");
}

int main(){
    Alhamdulillah
    int t=1;    cin >> t;
    while(t--)  solve();
    return 0;
}