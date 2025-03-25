#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, k;  
    //unsigned int n, k;  
    cin >> n >> k;
    cout << (n | (1LL << k)) << endl;
    //cout << (n | (1u << k)) << endl;
    
}

int main() {
	int t;  cin >> t;
	while(t--)  solve();
	return 0;
}
