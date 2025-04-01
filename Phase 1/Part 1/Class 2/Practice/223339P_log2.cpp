
#include<bits/stdc++.h>
#define ll long long
using namespace std;

//log2(n) -> y such that 2^y = n
//floor(log2(n)) -> x such that 2^x <= n

int logb2(ll n){
    if(n == 1)    return 0;
    return 1 + logb2(n/2);
}

int main(){
    ll n;    cin >> n;
    cout << logb2(n);
    return 0;
}
