#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
int a[N], x, mid;

//array needs to be sorted and needs to have monotonic property.
//search interval is getting cut by half each time.
//TC - logn

//recursive binary search
bool BIN_rec(int l, int r){
    if(l > r)   return false;
    mid = l + (r-l) / 2;
    if(a[mid] == x) return true;
    else if(a[mid] > x) return BIN_rec(0, mid - 1);
    else    return BIN_rec(mid + 1, r);
}

//iterative binary search
bool BIN_it(int l, int r){
    
    while(l <= r){
        mid = l + (r-l) / 2;
        if(a[mid] == x) return true;
        else if(a[mid] > x) r = mid - 1;
        else    l = mid + 1;
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n, q;   cin >> n >> q;
    for(int i=0;i<n;i++)    cin >> a[i];
    while(q--){
        cin >> x;
        bool found1 = BIN_rec(0,n-1), found2 = BIN_it(0,n-1);
        if(found1 && found2)   cout << x << " found\n";
        else cout << x << " not found\n";
    }
    return 0;
}