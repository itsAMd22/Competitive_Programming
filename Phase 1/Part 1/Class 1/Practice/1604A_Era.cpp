#include<bits/stdc++.h>
using namespace std;

const int N = 1e7+9;
int a[N];

void solve(){
    int n;  cin >> n;
    int tmp = n;
    long long op = 0;
    for(int i=1;i<=n;i++)   cin >> a[i];
    // for(int i=1;i<=n;i++){
    //     if(a[i] > i){
    //         op += ((a[i] - i - op) > 0 ? a[i]-i-op : 0);
    //         //op += a[i]-i-op; is wrong
    //     }
    // }


    // alternative approach : inserting max(a[i] - i) 1's  is sufficient for all.
    for(int i=1;i<=n;i++){
        if(a[i] > i){
            op = max(op, 1LL * a[i] - i);
        }
    }

    cout << op << endl;
}

int main(){
    int t = 1;  cin >> t;
    while(t--)  solve();
    return 0;
}