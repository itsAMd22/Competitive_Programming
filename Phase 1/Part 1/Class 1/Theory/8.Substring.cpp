#include<bits/stdc++.h>
using namespace std;


int main(){

    //print all subarrays
    string alp = "abcdefghijklmnopqrstuvwxyz";
    int sz = alp.size();
    for(int l=0;l<sz;l++){
        //possible substring for this l = sz-l.
        for(int r = l;r<sz;r++){
            //alp[l,.......,r] is a substring from l to r.
            for(int i=l;i<=r;i++){
                cout << alp[i] <<  " ";
            }
            cout << endl;
        }
    }
    //substring count = sz + (sz-1) + (sz-2) + ..... + 2 + 1 = sz*(sz+1)/2
    //tc -> O(sz^2)m sc -> O(sz)

    return 0;
}