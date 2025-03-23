#include<bits/stdc++.h>
using namespace std;


void solve(){
    int n;    cin >> n;
    int a[n], ct = 0;
    bool yep;
    for(int i=0;i<n;i++)    cin >> a[i];

    for(int l = 0;l < n;l++){
        for(int r = l;r < n;r++){
            yep = true;
            for(int i=l;i<r;i++){
                if(a[i] > a[i+1]){
                    yep = false;
                    break;
                }
            }
            if(yep) ct++;
        }
    }

    cout << ct << endl;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    
    int t = 1;  cin >> t;
    while(t--)  solve();
    return 0;
}