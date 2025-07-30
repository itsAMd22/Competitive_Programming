#include<bits/stdc++.h>
using namespace std;

//find the minimum n for which f(n) = (x^2 + 1) >= target

long long f(long long x){
    return x * x + 1;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);

    long long target;  cin >> target;
    long long l=0, r = 1e18, mid, ans;

    while(l <= r){
        mid  = l + (r - l) / 2;
        if(f(mid) >= target)   ans = mid, r = mid - 1;
        else    l = mid + 1;
    }
    cout << ans << endl;
    return 0;
}