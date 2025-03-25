#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    int a[n+5], even[n+5], ev_ind = 0, odd[n+5], od_ind = 0;

    long long ev_sum = 0, od_sum = 0, ans = 0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] % 2){
            odd[od_ind] = a[i];
            ++od_ind;
        }else{
            even[ev_ind] = a[i];
            ++ev_ind, ev_sum += a[i];
        }    
    }    
    
    if(od_ind >= 2){
        //there are atleast 2 elements
        sort(odd, odd + od_ind);
        //sum of even numbered odd numbers are even.
        for(int i=od_ind-1;i >= (od_ind % 2);--i){
            od_sum += odd[i];
        }
    }
    ans = ev_sum + od_sum;

    // //better approach  : sum all, if even print it, otherwise minus smallest odd.
    // //O(n)
    // long long od_min = 1e9+5;
    // for(int i=0;i<n;i++){
    //     ans += a[i];
    //     if(a[i] % 2 && a[i] < od_min)   od_min = a[i];    
    // }
    // ans -= (ans % 2 ? od_min : 0);

    cout << ans;

    return 0;
}