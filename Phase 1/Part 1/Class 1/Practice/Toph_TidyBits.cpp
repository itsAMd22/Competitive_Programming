#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, ans = 0;  cin >> n;
    int set_c = __builtin_popcount(n);
    for(int i=0;i<set_c;i++)    ans |= (1 << i);
    cout << ans;
}

int main() {
	int t=1;  //cin >> t;
	while(t--)  solve();
	return 0;
}
