#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v;
    map<int,int>mp;
    int n;  
    while(cin >> n){
        if(mp.find(n) == mp.end())  v.push_back(n);
        mp[n]++;
    }

    for(auto e : v) cout << e << " " << mp[e] << endl;
    return 0;
}