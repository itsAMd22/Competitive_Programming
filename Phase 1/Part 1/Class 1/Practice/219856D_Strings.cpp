#include<bits/stdc++.h>
using namespace std;


void solve(){
    char a[105];    cin >> a;
    if(strlen(a) <= 10) cout << a << endl;
    else{
        cout << a[0] << strlen(a) - 2 << a[strlen(a)-1] << endl;
    }    
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t=1;    cin >> t;
    while(t--)  solve();
    return 0;
}