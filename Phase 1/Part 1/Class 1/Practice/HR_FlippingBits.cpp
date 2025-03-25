#include <bits/stdc++.h>
using namespace std;

void solve(){
    unsigned int n; cin >> n;
    for(int i=0;i<32;++i)   n ^= (1<<i);
    cout << n << endl;
}

int main() {
	int t=1;  cin >> t;
	while(t--)  solve();
	return 0;
}
