#include<bits/stdc++.h>
using namespace std;

//given an array of 1 <= n <= 1e5 numbers(1<=ai<=1e9), and a number 1<=s<=1e14
//find the largest x such that ∑(ai/x) >= s, if none, output -1;

const int N = 1e5 + 9;
long long a[N], n, s;

bool f(long long x){
    long long sum = 0;
    for(int i=0;i<n;i++)    sum += (a[i]/x);
    return sum >= s;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    cin >> n >> s;
    for(int i=0;i<n;i++)    cin >> a[i];
    long long l = 0, r = 1e18, mid, ans = -1;
    while(l <= r){
        mid = l + (r - l) / 2;
        if(f(mid))  ans = mid, l = mid + 1;
        else    r = mid - 1;
    }
    cout << ans << endl;
    return 0;
}