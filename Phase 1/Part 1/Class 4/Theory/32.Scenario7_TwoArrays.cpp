#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x;    cin >> n >> m;
    multiset<int>a;
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin >> x;
        a.insert(x);
    }    
    for(int i=0;i<m;i++)    cin >> b[i];

    int cur; 

    for(auto e : b){
        if(a.size() == 0)   break;
        auto it = a.find(e);
        if(it != a.end())   a.erase(it);
    }

    cout << a.size();

    return 0;
}