#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k, sum = 0;   cin >> n >> k;

    vector<int>v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    
    //without
    // int i;
    // for(i = 0;i<k;i++)  sum += v[i];
    // cout << "0 -> " << k-1 << " = "  << sum << endl;
    // for(i = k;i<n;i++){
    //     sum += v[i] - v[i-k];
    //     cout << i-k+1 << " -> " << i << " = " << sum << endl;
    // }


    //using queue
    queue<int> q;

    for(int i=0;i<n;i++){
        q.push(v[i]);
        sum += v[i];
        if(i >= k-1){
            cout << i-k+1 << " - " << i << " = " << sum << endl;
            sum -= q.front();
            q.pop();
        }
    }

    return 0;
}