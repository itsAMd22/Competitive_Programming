#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, pos, apl, neg = 0, pst = 0, ans = 0;  cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> pos >> apl;
        mp[pos] = apl;
        neg += (pos < 1);
    }


    pst = n-neg;
    if(pst == neg){
        for(auto [x,y] : mp)    ans += y;
        cout << ans;
    }else if(pst > neg){
        int cnt = 2 * neg + 1; 
        auto it = mp.begin();
        while(cnt--){
            ans += (it->second);
            ++it;
        }
        cout << ans;
    }else{
        int cnt = 2 * pst + 1; 
        auto it = prev(mp.end());
        while(cnt--){
            ans += (it->second);
            --it;
        }
        cout << ans;
    }

    return 0;
}