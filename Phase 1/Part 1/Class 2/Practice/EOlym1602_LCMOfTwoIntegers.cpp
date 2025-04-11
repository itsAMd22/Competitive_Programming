#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll a,b; cin >> a >> b;
    cout << (1LL * a * b) / __gcd(a,b);
    if(a>b) swap(a,b);
    if(a == 1)  cout << b;
    else{
        ll t = b;
        while(b % a)    b += t;
        cout << b;
    }
}

int main(){
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}