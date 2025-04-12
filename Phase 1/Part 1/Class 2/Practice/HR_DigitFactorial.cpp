#include<bits/stdc++.h>
using namespace std;

int fact(int i){
    if(i == 0)  return 1;
    return i * fact(i-1);
}

void solve(){
    int n, sum = 0;  cin >> n;
    cout << n << endl;
    for(int i=10;i<n;++i){
        int csum = 0, tmp = i;
        while(tmp){
            int dig = tmp % 10;
            csum += fact(dig);
            tmp /= 10;
        }    
        if(csum % i == 0)    sum += i;
    }
    cout << sum;
}

int main(){
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}