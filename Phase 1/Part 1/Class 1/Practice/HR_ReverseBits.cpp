#include <bits/stdc++.h>
using namespace std;

void solve(){
    unsigned int n, tmp = 0; cin >> n;
    for(int i=31;i>=0;--i){
        if(n & (1 << i))  tmp |= (1 << (31-i));
    }   
    cout << tmp << endl;
}

int main() {
	int t=1;  cin >> t;
	while(t--)  solve();
	return 0;
}
