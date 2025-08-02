#include<bits/stdc++.h>
using namespace std;

// insert each element in its correct place;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int a[] = {4, 1, 5, 3, 1, 0, 7, 9, 10, 3}; 
    int n = 10;
    for(int i=0;i<n;i++){
        int key = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }

    for(int i=0;i<n;i++)    cout << a[i] << " ";
    return 0;
}