#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    
    int n,m;    cin >> n >> m;
    int a[n],b[m];
    for(int i=0;i<n;i++)    cin >> a[i];
    for(int i=0;i<m;i++)    cin >> b[i];

    int cur_in_a, cur_in_b = 0, ct = 0;

    for(cur_in_a = 0; cur_in_a < n; ++cur_in_a){
        if(b[cur_in_b] == a[cur_in_a])  ++ct, ++cur_in_b;
        if(ct == m) break;
    }

    cout << (ct == m ? "YES" : "NO");
    return 0;
}