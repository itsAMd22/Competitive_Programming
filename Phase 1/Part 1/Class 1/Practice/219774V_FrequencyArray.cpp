#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, x;   cin >> n >> m;
    // map<int,int>freq;
    // for(int i=0;i<n;i++){
    //     cin >> x;
    //     freq[x]++;
    // }

    // for(int i=1;i<=m;i++)   cout << freq[i] << endl; 


    int a[n+1];
    for(int i=1;i<=n;i++)   cin >> a[i];
    
    int freqarr[m+1] = {0};
    //frearr[num] = frequency of num
    
    for(int i=1;i<=n;i++)   freqarr[a[i]]++;

    for(int i=1;i<=m;i++)   cout << freqarr[i] << endl;

    return 0;
}