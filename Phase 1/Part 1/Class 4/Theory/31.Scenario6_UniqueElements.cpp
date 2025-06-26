#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x, ct = 0;  cin >> n;
    map<int,int>mp;
    for(int i=0;i<n;i++){ //nlog n
        cin >> x;
        if(mp[x] == 0)  mp[x]++,ct++; 
        cout << ct << endl;
    }
    return 0;
}
