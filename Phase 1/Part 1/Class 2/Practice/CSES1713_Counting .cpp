#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x, ct = 0;  cin >> x;
    for(int i=1;i*i<=x;++i){
        if(x % i == 0){
            ct += ((x/i) != i ? 2 : 1);
        }
    }
    cout << ct << endl;
}

int main(){
    int t;  cin >> t;
    while(t--)  solve();
    return 0;
}