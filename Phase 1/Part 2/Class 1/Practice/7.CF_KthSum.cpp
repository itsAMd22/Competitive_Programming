#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+6;
long long a[N], b[N];
long long n, k, cnt;


long long getc(long long tg){
    return upper_bound(b+1, b+n+1, tg) - (b+1);
}

bool f(long long sum){
    if(sum > a[n] + b[n])   return false;
    cnt = 0;
    for(int i=1;i<=n;i++){
        cnt += getc(sum - a[i]);
    }
    return cnt >= k;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> n >> k;
    for(int i=1;i<=n;i++)    cin >> a[i];
    for(int i=1;i<=n;i++)    cin >> b[i];
    sort(a+1, a+n+1), sort(b+1, b+n+1);

    long long l = 0, r = a[n] + b[n], mid, ans;
    
    while(l <= r){
        mid = l + (r - l) / 2;
        if(f(mid))  ans = mid, r = mid - 1;
        else    l = mid + 1;
    }
    cout << ans;
    return 0;
}