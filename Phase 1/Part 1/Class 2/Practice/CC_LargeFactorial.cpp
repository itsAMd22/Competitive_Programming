#include <bits/stdc++.h>
using namespace std;

#define ll long long
const int mod = 1e9+7;

void solve(){
    ll n, ans = 1LL;   cin >> n;
    for(int i=1;i<=n;++i)   ans = (ans * i) % mod;
    ans %= mod;
    cout << ans << endl;
}

int main() {
	int t;  cin >> t;
	while(t--)  solve();
	return 0;
}

