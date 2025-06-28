#include<bits/stdc++.h>
using namespace std;

bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    auto [x1,y1] = a;
    auto [x2,y2] = b;
    
    if(x1 > x2) return false;
    else if(x1 == x2 && y1 < y2)    return false;
    else    return true;
}

void solve(){
    int  n; scanf("%d", &n);
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        scanf("%d%d", &v[i].first, &v[i].second);
    }    
    sort(v.begin(), v.end(), cmp);
    for(auto e : v) printf("%d %d\n", e.first, e.second);
    
}

int main(){
    int t;  scanf("%d", &t);
    while(t--)  solve();
    return 0;
}