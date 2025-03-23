#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin >> n;
    int arr[n+1];
    for(int i=1;i<=n;i++)    cin >> arr[i];
    int sum = INT_MAX, cur = 0;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            //all sub-array of size 2 with 1<=i<j<=N : {arr[i],arr[j]}
            sum = min(sum, arr[i]+arr[j]+j-i);
        }
    }
    cout << sum << endl;
}

int main (){
    ios_base::sync_with_stdio(0), cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t=1;  cin >> t;
    while(t--){
        solve();
    }
    return 0;
}