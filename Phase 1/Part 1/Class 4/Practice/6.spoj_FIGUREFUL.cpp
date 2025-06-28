#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k1, k2;  cin >> n;
    string name;
    
    map<pair<int,int>,string> m;
    for(int i=0;i<n;i++){
        cin >> k1 >> k2 >> name;
        m[{k1,k2}] = name;
    }

    int t;  cin >> t;
    while(t--){
        cin >> k1 >> k2;
        cout << m[{k1,k2}] << endl;
    }
    return 0;
}