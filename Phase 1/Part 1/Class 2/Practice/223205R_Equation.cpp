#include<bits/stdc++.h>
#define ll long long
using namespace std;


ll Pow(ll b, ll p){
    ll result = 1;
    for(int i=1;i<=p;++i)  result *= b;
    return result;
}

ll sum(ll x, ll n){
    
    //using formula of geometric sequence.
    // s = (x^2 + x^4 +......+x^n) + (x^0 - 1)
    // common factor, r = x^2 or x*x
    // number of terms = n/2 (excluding "-1");
    
    ll r = x * x, k = n/2;

    if(x == 0)
        return 0;
    else if(x == 1)
        return k;
    else if(k > 1)
        return (Pow(r,k+1) - 1) / (r - 1) - 1; //k+1 considering a1 = x^0
    else
        return  (1 - Pow(r, k+1)) / (1 - r) - 1;

    // if(x == 0)  return 0;
    // else if(x == 1)  return k;
    // ll ans = -1;
    // for(ll i=0;i<=n;i+=2)  ans += Pow(x,i);
    // return ans;
}


int main(){
    long long x, n;    cin >> x >> n;
    long long ans = sum(x,n);
    cout << ans;
    return  0;
}