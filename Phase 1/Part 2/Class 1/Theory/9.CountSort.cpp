#include<bits/stdc++.h>
using namespace std;

// bubble out the maximum element to 
// the sorted array in the right side.

const int N = 1e6;
int cnt[N+1];

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int a[] = {4, 1, 5, 3, 1, 0, 7, 9, 10, 3}; 
    int n = 10;
    for(int i=0;i<n;i++){
        cnt[a[i]]++;
    }

    for(int i=0;i<N;i++){
        for(int j=1;j<=cnt[i];j++)   cout << i << " ";
    }
    cout << endl;
    return 0;
}