#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    ll gcd, lcm;   cin >> gcd >> lcm;
    if(lcm % gcd)   cout << -1 << endl;
    else    cout << gcd << " " << gcd * (lcm/gcd) << endl;
}

int main(){
    int t=1;    cin >> t;
    while(t--)  solve();
    return 0;
}