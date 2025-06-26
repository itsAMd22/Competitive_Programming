#include<bits/stdc++.h>
using namespace std;

//the biggest element in a k-1 size pq is the k-1 th smallest element in the prefix.

int main(){
    int n,k;    cin >> n >> k;
    vector<int>v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        pq.push(v[i]);
        if(pq.size() > k-1)    pq.pop();
        if(i >= k-1)    cout << pq.top() << " ";      //in this case there is always a valid answer.
        else    cout << -1 << " "; //not enough elements.
    }
    return 0;
}