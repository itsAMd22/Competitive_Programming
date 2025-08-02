#include<bits/stdc++.h>
using namespace std;

// bubble out the maximum element to 
// the sorted array in the right side.

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int a[] = {4, 1, 5, 3, 1, 0, 7, 9, 10, 3}; 
    int n = 10;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j] > a[j+1])   swap(a[j], a[j+1]);
        }
    }

    for(int i=0;i<n;i++)    cout << a[i] << " ";
    return 0;
}