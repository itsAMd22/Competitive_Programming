#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+5;
long long div_sum[N];

bool isPrime(long long sum){
    if(sum == 1)    return false;
    for(int i = 2; 1LL * i * i <= sum ; i++){
        if(sum % i == 0){
            return false;
        }
    }
    return true;
}

void DivSumPreCal(){
    for(int i = 1 ; i < N ; i++){
        for(int j = i ; j < N ; j += i){
            div_sum[j] += i;
        }
    }
}

void solve(){
    int a, b, ct = 0;
    cin >> a >> b;
    for(int i = a ; i <= b ; i++){
        // cout << i << " " << div_sum[i] << '\n';
        if(isPrime(div_sum[i])){
            ct++;
        }
    }
    cout << ct << '\n';    
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin >> t;
    
    DivSumPreCal();

    while(t--){
        solve();
    }
    return 0;
}