#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;    cin >> n >> k;
    cout << (n & ~((1LL << k)-1));
}

int main() {
	int t=1;  //cin >> t;
	while(t--)  solve();
	return 0;
}
