#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int arr[N], n;

int ret_max(int ind){
    if(ind == n)    return INT_MIN;
    int mx = max(arr[ind], ret_max(ind+1));
    return mx;
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++)    cin >> arr[i];
    cout << ret_max(0);
    return 0;
}