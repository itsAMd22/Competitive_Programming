#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n, x, flag = 0;  cin >> n >> x;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    for(int i=0;i<n;i++){
        if(v[i] == x){
            cout << x << " found at index " << i;
            flag = 1;
            break; 
        }
    }
    if(!flag)   cout << x << " not found";
    return 0;
}