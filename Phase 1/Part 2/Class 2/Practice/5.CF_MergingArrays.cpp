#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0  ; i < n ; i++){
        cin >> a[i];
    }
    for(int i = 0  ; i < m ; i++){
        cin >> b[i];
    }

    int i = 0, j = 0;
    while(i < n || j < m){
        if(i < n && j < m){
            if(a[i] <= b[j]){
                cout << a[i] << " ";
                i++;
            }else{
                cout << b[j] << " ";
                j++;
            }
        }else if(i < n){
            cout << a[i] << " ";
            i++;
        }else if(j < m){
            cout << b[j] << " ";
            j++;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}