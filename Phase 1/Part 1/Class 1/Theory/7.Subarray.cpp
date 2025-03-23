#include<bits/stdc++.h>
using namespace std;


int main(){

    //print all subarrays
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int sz = 10;
    for(int l=0;l<sz;l++){
        //possible sub array for this l = sz-l.
        for(int r = l;r<sz;r++){
            //arr[l,.......,r] is a subarray from l to r.
            for(int i=l;i<=r;i++){
                cout << arr[i] <<  " ";
            }
            cout << endl;
        }
    }
    //subarray count = sz + (sz-1) + (sz-2) + ..... + 2 + 1 = sz*(sz+1)/2
    //tc -> O(sz^2)m sc -> O(sz)

    return 0;
}