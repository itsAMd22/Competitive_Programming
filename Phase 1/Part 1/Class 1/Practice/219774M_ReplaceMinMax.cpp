#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, mx = INT_MIN, mx_ind, mn = INT_MAX, mn_ind;  cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] > mx)   mx = a[i], mx_ind = i;
        else if(a[i] < mn)  mn = a[i], mn_ind = i;
    }    
    swap(a[mx_ind],a[mn_ind]);
    for(int i=0;i<n;i++)    cout << a[i] << " ";
}

int main(){
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}