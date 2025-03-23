#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    
    int n;    cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++)    cin >> a[i];
    for(int i=0;i<n;i++)    cin >> b[i];
    
    sort(a,a+n), sort(b,b+n);
    //both needs to be same after sorting.
    bool isPermu = true;

    for(int i=0;i<n;i++){
        if(a[i] != b[i]){
            isPermu = false;
        }    
    }

    cout << (isPermu ? "yes" : "no");
    return 0;
}