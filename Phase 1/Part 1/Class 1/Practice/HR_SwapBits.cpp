#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;    cin >> n;
    for(int i=0;i<64;i+=2){
        if((((n >> i) ^ (n >> (i+1))) & 1) == 0){
            //checking if adjacent bits are same or not.
            //== has higher precedence than &
            continue;
        }else{
            //toggle
            n ^= (1LL << i);
            n ^= (1LL << (i+1));
        }
    }
    cout << n << endl;
}

int main() {
	int t;  cin >> t;
	while(t--)  solve();
	return 0;
}
