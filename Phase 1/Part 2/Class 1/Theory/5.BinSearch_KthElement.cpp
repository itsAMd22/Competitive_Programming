#include<bits/stdc++.h>
using namespace std;

const int N = 1e9+7;
long long x, n, k;


bool f(long long num){
    int multiples = num / n;
    return (num - multiples) >= k;
}


void solve(){
    cin >> n >> k;

    long long lo = k, hi = 1e18 , mid, start = -1;
    while(lo <= hi){
        mid = lo + (hi - lo) / 2;
        if(f(mid)){
            start = mid;
            hi = mid - 1;
        }  
        else    lo = mid + 1;
    }
    cout << start << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t;  cin >> t;
    while(t--)  solve();
    return 0;
}