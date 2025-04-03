#include<bits/stdc++.h>
#define ll long long
using namespace std;

//nCr = (n-1)C(r-1) + (n-1)Cr
ll memo[40][40];

ll combo(ll n, ll r){
    //it isnt possible to choose r element from n, if any of the below is true.
    if(n < r || n < 0 || r < 0)   return 0;

    //now r <= n and n >= 0, r >= 0
    if(n == 0)  return 1;

    if(memo[n][r])  return memo[n][r];
    else    return memo[n][r] = combo(n-1,r-1) + combo(n-1,r);
}

int main(){
    ll n, r;
    cin >> n >> r;
    cout << combo(n,r);
    return 0;
}
