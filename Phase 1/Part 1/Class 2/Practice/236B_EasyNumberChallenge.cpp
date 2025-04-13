#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1073741824, N = 1e6+5;
int d[N];

void solve(){
    
    //precomp
    //TC -> 1 + floor(log2(n))
    for(int i=1;i<=N;++i){
        for(int j=i;j<=N;j+=i){
            d[j]++;
        }
    }

    //TC -> a*b*c
    int a,b,c,ct = 0;  cin >> a >> b >> c;
    for(int i=1;i<=a;++i){
        for(int j=1;j<=b;++j){
            for(int k=1;k<=c;++k){
                // cout << i <<  " " << j << " " << k << endl;
                ct += d[i*j*k];
            }
        }
    }
    cout << ct % mod;
}

int main(){
    int t=1;  //cin >> t;
    while(t--)  solve();
    return 0;
}