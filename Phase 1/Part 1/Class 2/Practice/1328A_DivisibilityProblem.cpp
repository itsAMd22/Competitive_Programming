#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a,b; cin >> a >> b;
    if(a % b == 0)       cout << 0 << endl;
    else    cout << a/b*b+b-a << endl;
}


int main(){
    int t;  cin >> t;
    while(t--)  solve();
    return 0;
}
