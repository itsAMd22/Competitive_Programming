#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,x;  cin >> n;
    vector<int>ar(n);
    for(auto &e : ar)   cin >> e;
    cin >> x;
    for(int i=0;i<n;i++){
        if(ar[i] == x){
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}