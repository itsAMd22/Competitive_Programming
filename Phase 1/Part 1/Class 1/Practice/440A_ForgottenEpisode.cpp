#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin >> n;
    int ep[n-1];  
    for(int i=0;i<n-1;i++)    cin >> ep[i];
    sort(ep, ep + n - 1);
    for(int i = 0;i < n - 1;i++){
        //cout << i+1 <<  " " << ep[i] << endl;
        if((i + 1) != ep[i]){
            cout << i+1;
            return;
        }
    }
    cout << n;
}

int main(){
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}