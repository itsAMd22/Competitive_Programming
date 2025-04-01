#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll ct = 1;

void ct_seq(ll n){
    if(n == 1)  return;
    ++ct;
    (n & 1) ? ct_seq(3*n+1) : ct_seq(n/2);
}

int main(){
    ll n;  cin >> n;
    ct_seq(n);
    cout << ct;
    return 0;
}
