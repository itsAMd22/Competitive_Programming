#include<bits/stdc++.h>
using namespace std;

void solve(){
    double n;    
    cin >> n;
    double ans = 1 + floor(log2(n));
    double ans1 = 0;
    for(int i=1;i<=n;i++)   ans1 += 1.0/i;
    // cout << ans << " " <<  ans1 << endl;
    //ans >= ans1, used to calculate TC.
    cout << fixed << setprecision(4) << ans1;
}

int main(){
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}