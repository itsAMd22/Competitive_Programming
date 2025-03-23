#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(0), cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;  cin >> n;
    long long arr[n];
    for(int i=0;i<n;i++)    cin >> arr[i];
    
    long long sum = LLONG_MIN, cur = 0;
    
    
    // //Brute force - check all subarrays.
    // //O(n^3)
    // for(int l=0;l<n;l++){
    //     for(int r = l;r<n;r++){
    //         for(int i=l;i<=r;i++)   cur += arr[i];
    //         sum = max(sum,cur);
    //         cur = 0;
    //     }
    // }

    // //Brute force - check all subarrays, in suboptimal approach.
    // //O(n^2)
    // for(int l=0;l<n;l++){
    //     cur = 0;
    //     for(int r = l;r<n;r++){
    //         cur += arr[r];
    //         sum = max(sum,cur);
    //     }
    // }
    
    // //Kadanne's Algorithm
    // //O(n) 
    // for(int i=0;i<n;i++){
    //     cur += arr[i];
    //     sum = max(sum,cur);
    //     if(cur < 0){
    //         cur = 0;
    //     }
    // }

    // //Anpther similar approach
    // //O(n) 
    cur = -1e18;
    for(int i=0;i<n;i++){
        cur  = max(arr[i], arr[i] + cur);
        sum = max(sum,cur);
    }


    
    cout << sum;
    return 0;
}