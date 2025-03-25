#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, on = 0;  cin >> n;

    for(int i=1;i<=n;i++){
        int tmp = i;
        //on += __builtin_popcount(t); //O(1)
        while(tmp){ //1000 <= 2^10, so loop will run for a max 10 times.
            if(tmp & 1) ++on;
            tmp >>= 1;
        }
    }
    cout << on << endl;
}

int main() {
	int t;  cin >> t;
	while(t--)  solve();
	return 0;
}
