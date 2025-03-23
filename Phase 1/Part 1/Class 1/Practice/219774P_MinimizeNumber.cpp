#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin >> n;
    int a[n], ans = INT_MAX,ct;
    for(int i=0;i<n;i++){
        cin >> a[i];
        ct = 0;
        while(a[i] % 2 == 0){
            // cout << a[i] <<  " ";
            a[i]/=2, ++ct;
            // cout << a[i] <<  endl; 
        }    
        ans = min(ans, ct);
        //cout << ct << " " << ans << endl;
        if(ans == 0) break;
    }
    cout << ans;
}

int main(){
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}