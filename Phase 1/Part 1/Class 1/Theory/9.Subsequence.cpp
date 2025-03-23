#include<bits/stdc++.h>
using namespace std;

int main(){
    string alp; cin >> alp;
    int n = alp.size();

    for(int mask = 0;mask < (1 << n);mask++){
        for(int i=0;i<n;i++){
            if((mask >> i) & 1) cout << alp[i] <<  " ";
        }
        cout << endl;
    }
    return 0;
}