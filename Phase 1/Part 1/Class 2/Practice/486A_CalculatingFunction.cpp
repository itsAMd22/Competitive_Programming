#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll f(ll n){
    ll osum = (n - n/2)*(n-n/2), esum = 0;
    if(n >= 2){
        esum = n/2*(n/2+1);
    }
    return esum - osum;
}

int main(){
    ll n;   cin >> n;
    cout << f(n);
    return 0;
}
