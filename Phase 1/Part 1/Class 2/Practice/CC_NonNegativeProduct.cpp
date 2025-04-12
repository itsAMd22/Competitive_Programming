#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, x, ct = 0, z = 0;   cin >> n;
    while(n--){
        cin >> x;
        if(x<0) ++ct;
        else if(x == 0)  ++z;
    }
    if(z)   cout << 0 << endl;
    else    cout << ct % 2 << endl;
    
}

int main(){
    int t;  cin >> t;
    while(t--)  solve();
    return 0;
}