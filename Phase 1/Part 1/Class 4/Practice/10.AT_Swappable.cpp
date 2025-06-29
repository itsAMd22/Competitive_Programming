#include<bits/stdc++.h>
using namespace std;

//count the (i,j) pairs such that i < j and ai != aj

int main(){
    int n, e, ct = 0;  cin >> n;

    long long ans = 0; //as it can grow quite big.

    map<int,int> mp;

    for(int i=1;i<=n;i++){
        cin >> e;
        ans += ((i-1) - (mp.find(e) != mp.end() ? mp[e] : 0));
        //ans += elements added prior to these iteration - occurances of itself till now
        mp[e]++;
    }

    cout << ans;
    return 0;
}