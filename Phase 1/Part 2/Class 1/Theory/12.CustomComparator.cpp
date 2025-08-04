#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> x, pair<int, int> y){
    // sort in second -> first order
    if(x.second != y.second)  return x.second > y.second;
    else    return x.first < y.first;    
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    vector<pair<int, int>> v = {{1,2},{2,2},{2,4},{5,6},{6,3}};
    
    sort(v.begin(), v.end());
    for(auto [f,s] : v) cout << f << " " << s << endl;
    cout << endl;

    sort(v.begin(), v.end(), cmp);
    for(auto [f,s] : v) cout << f << " " << s << endl;
    cout << endl;

    sort(v.begin(), v.end(), [](pair<int, int> x, pair<int, int> y){
        // sort in second -> reverse first order
        if(x.second != y.second)  return x.second > y.second;
        else    return x.first > y.first;    
    });
    for(auto [f,s] : v) cout << f << " " << s << endl;
    cout << endl;

    return 0;
}