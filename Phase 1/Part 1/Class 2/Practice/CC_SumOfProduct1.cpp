#include<bits/stdc++.h>
#define ll long long
using namespace std;


//another possible solution is-
//consider the subarrays ending at i, how many of them have a product of 1?
//consecutive ones is the answer.

void solve(){
    ll n, ct = 0, z = 0;  cin >> n;
    ll a[n], cur_ct = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i])    cur_ct++;
        else{
            ct += cur_ct * (cur_ct+1) / 2;
            cur_ct = 0;
        }
    }    
    if(cur_ct)  ct += cur_ct * (cur_ct+1) / 2;
    cout << ct << endl;

}

int main(){
    int t;  cin >> t;
    while(t--)  solve();
    return 0;
}