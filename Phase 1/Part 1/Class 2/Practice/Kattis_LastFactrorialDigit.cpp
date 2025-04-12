#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin >> n;
    int ans = 1; 
    while(n>1){
        ans = (ans * n) % 10;
        n--;
    }    
    cout << ans << endl;
}

int main(){
    int t=1;    cin >> t;
    while(t--)  solve();
    return 0;
}