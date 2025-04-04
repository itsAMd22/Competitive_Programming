#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,k; cin >> n >> k;

    ll mid = n - n/2;

    if(k <= mid)    cout << 2 * k - 1;
    else    cout << (k - mid) * 2;

    return 0;
}
