#include<bits/stdc++.h>
using namespace std;

#define ll long long 

const int N = 1e5+6;
ll a[N+N], n, k, total = 0, mx = 0;

bool check(ll sum){
    ll ct = 0, tmp = 0;
    mx = 0;
    for(int i=0;i<n;i++){
        tmp += a[i];
        if(tmp > sum)   mx = max(mx, tmp - a[i]), ct++, tmp = a[i];  
        else if(tmp == sum) mx = max(mx, tmp), ct++, tmp = 0;
    }
    if(tmp > sum)    return false;
    else if(tmp != 0)   mx = max(mx,tmp), ct++;
    return ct <= k;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> n >> k;
    ll mn_element = (ll)1e9+5;

    for(int i=0;i<n;i++){
        cin >> a[i];
        total += a[i];
        mn_element = min(mn_element, a[i]);
    }    

    ll lo = mn_element, hi = total, mid, ans;
    while(lo <= hi){
        mid = lo + (hi - lo) / 2;
        if(check(mid))  ans = mx, hi = mid - 1;
        else    lo = mid + 1;
    }
    cout << ans;
    return 0;
}