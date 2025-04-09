#include<bits/stdc++.h>
using namespace std;

//r - r mod l is biggest number <= r that is divisible by l, so lcm(r, r - r%l) = l;
//anorther approach : x = l, y = 2*l (y<=r), clm(l, 2l) = l;

void solve(){
    int l,r;    cin >> l >> r;
    if(r - (r % l) <= l) cout << "-1 -1\n";
    else    cout << l << " " << r - (r % l) << endl;
}

int main(){
    int t=1;    cin >> t;
    while(t--)  solve();
    return 0;
}
