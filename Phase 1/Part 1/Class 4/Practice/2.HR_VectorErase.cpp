#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, pos, l, r;  cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)    cin >> v[i];

    cin >> pos >> l >> r;

    v.erase(v.begin()+pos-1);
    v.erase(v.begin()+l-1, v.begin()+r-1);

    cout << v.size() << endl;
    for(auto e : v) cout << e << " ";

    return 0;
}