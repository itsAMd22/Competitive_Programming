#include<bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    int a,b,c;  cin >> a >> b >> c;
    cout << max((a*b)+c,max(a*(b+c),max(a+(b*c),max((a+b)*c,max(a*b*c,a+b+c)))));
}


int main(){
    int t=1;  //cin >> t;
    while(t--)  solve();
    return 0;
}
