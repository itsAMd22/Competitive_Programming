#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n,x;  cin >> n;
    vector<int>ar(n);
    for(auto &e : ar)   cin >> e;
    for(int i=0;i<n/2;i++){
        if(ar[i] != ar[n-1-i]){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}