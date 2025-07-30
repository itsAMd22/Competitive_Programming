#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int a[N], x, mid;

//search for the first occurrence of 1

int bin_search(int l, int r){
    int ans = -1;
    while(l <= r){
        mid = l + (r-l) / 2;
        if(a[mid] == 1) ans = mid, r = mid - 1;
        else    l = mid + 1;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n, index;   cin >> n;
    for(int i=0;i<n;i++)    cin >> a[i];
    index = bin_search(0,n-1);
    cout << index;
    return 0;
}