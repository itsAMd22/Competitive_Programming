#include<bits/stdc++.h>
using namespace std;

//harmonic series : 1 + 1/2 + 1/3 + .... + 1/n <=
//                  1 + 1/2 + 1/2 + 1/4 + 1/4 + 1/4 + 1/4 + 8*(1/8) + 12*(1/12)..... + long2(n)*(1/log2(n)).
//                = 1 + (log2(n) * 1) = 1 + log2(n)

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n;  cin >> n;
    
    //harmonic series
    for(int i=1;i<=n;i++){
        cout << (1 << (int)floor(log2(i))) << " ";
    }cout << endl;


    //TC of a harmonic series.
    n = 1000000; 
    long long sum = 0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            sum += j;
        }
    }
    //TC -> nlogn
    cout << sum << endl;

    return 0;
}
