#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin >> n;
    if(n == 0)  cout << 1;
    else{
        if((n-1) % 4 == 0)  cout << 8;
        else if((n-2) % 4 == 0) cout << 4;
        else if((n-3) % 4 == 0) cout << 2;
        else    cout << 6;
    }
    //cout << endl;
}

int main(){
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}
