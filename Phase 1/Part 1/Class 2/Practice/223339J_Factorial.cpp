#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fact(ll num){
    if(num == 1)    return 1;
    ll factorial = num;
    factorial *= fact(num-1);
    //fact(n) = n * fact(n-1)
    return factorial;
}
int main(){
    ll n;    cin >> n;
    ll ans = fact(n);
    cout << ans;
    return 0;
}