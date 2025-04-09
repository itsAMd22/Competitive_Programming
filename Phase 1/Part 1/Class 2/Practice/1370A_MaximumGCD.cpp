#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 100005;
bool conjugate[N];

void sieve(){
    for(int i=2;i<=N;++i){
        if(conjugate[i])    continue;
        for(int j=i+i;j<=N;j+=i){
            conjugate[j] = true;
        }
    }
}

int mn_div(int n){
    vector<int>div;
    for(int i=2;i*i<=n;++i){
        if(n % i == 0){
            return i;
        }
    }
    return n;
}


void solve(){
    sieve();
    int n;   cin >> n;
    for(int i=n;i>=1;--i){
        if(!conjugate[i]) continue;
        else{
            cout << i / mn_div(i) << endl;
            return;
        }
    }
    cout << 1 << endl;
}

int main(){
    int t;  cin >> t;
    while(t--)  solve();
    return 0;
}
