#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)    cin >> a[i];
    sort(a, a+n);
    int e = a[0], i = 1;
    while(a[i] == e)   ++i;
    //i is the frequency of the min element.
    cout << ((i & 1) ? "Lucky" : "Unlucky");
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    
    int t = 1;  //cin >> t;
    while(t--)  solve();
    return 0;
}