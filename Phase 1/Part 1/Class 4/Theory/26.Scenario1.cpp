#include<bits/stdc++.h>
using namespace std;

/*
1.You are given a lost of 2D integer coordinates. You have to sort 
them based on their distances from the origin.

2.Given n 5D poinrs of the form (x,y,z,u,v), sort them first-
->based on z
->based on y
->based on u
->based on x
->based on v
*/

int main(){

    // vector<pair<double, pair<int,int>>> v;  
    // //{distance, {x,y}}
    // int n,x,y;  cin >> n;   
    // for(int i=0;i<n;i++){
    //     cin >> x >> y;
    //     v.push_back({sqrt(x * x + y * y), {x,y}});
    // }

    // sort(v.begin(), v.end(),greater<>());
    // for(int i=0;i<n;i++){
    //     cout << v[i].second.first << " " << v[i].second.second << " -> " << v[i].first << endl; 
    // }

    vector<tuple<int,int,int,int,int>>v1;
    int m,x,y,z,u,v;  cin >> m;
    for(int i=0;i<m;i++){
        cin >> x >> y >> z >> u >> v;
        v1.push_back({z,y,u,x,v});
    }

    sort(v1.begin(), v1.end());

    for(auto e : v1){
        cout << get<3>(e) << " " << get<1>(e) << get<0>(e) << " " << get<2>(e) << " " << get<4>(e) << endl;
    }




    return 0;
}