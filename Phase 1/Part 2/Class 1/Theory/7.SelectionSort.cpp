#include<bits/stdc++.h>
using namespace std;

// select the minimum number, bring it to the 
// end of the sorted array in the left.

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int a[] = {4, 1, 5, 3, 1, 0, 7, 9, 10, 3}; 
    int n = 10;
    for(int i=0;i<n;i++){
        int mn_index = -1, mn = INT_MAX;
        for(int j=i+1;j<n;j++){
            if(a[j] < mn){
                mn = a[j];
                mn_index = j;
            }
        }
        if(mn < a[i])   swap(a[i], a[mn_index]);
    }

    for(int i=0;i<n;i++)    cout << a[i] << " ";
    return 0;
}