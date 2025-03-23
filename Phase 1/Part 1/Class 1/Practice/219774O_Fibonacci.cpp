#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin >> n;
    if(n == 1)  cout << 0;
    else if(n == 2) cout << 1;
    else{
        n-=2;
        long long fb1 = 0, fb2 = 1;
        while(n--){
            fb2 += fb1;
            fb1 = fb2 - fb1;
        }
        cout << fb2;
    }
}

int main(){
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}