#include<bits/stdc++.h>
using namespace std;

//Given n strings, sort them based on their lexicographical order.

int main(){
    int n;  cin >> n;
    vector<string> v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    
    sort(v.begin(), v.end());

    for(auto e : v) cout << e << endl;
    return 0;
}