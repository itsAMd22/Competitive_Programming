#include<bits/stdc++.h>
using namespace std;

const int N = 1e6+9;
int a[N];

vector<int> merger(vector<int> l, vector<int> r){
    int i=0, j=0;
    vector<int> ans;

    // if both vectors arent empty
    while(i < l.size() && j < r.size()){
        if(l[i] < r[j]) ans.push_back(l[i++]);
        else    ans.push_back(r[j++]);
    }

    // if r becomes empty
    while(i < l.size()) ans.push_back(l[i++]);

    // if l becomes empty
    while(j < r.size()) ans.push_back(r[j++]);
    
    return ans;
}

vector<int> merge_sort(int l, int r){
    if(l == r)  return vector<int>{a[l]};
    else{
        int mid = (l+r)/2;
        vector<int> L = merge_sort(l, mid);
        vector<int> R = merge_sort(mid+1,r);
        return merger(L, R);
    }
}
 
int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int n;  cin >> n;
    for(int i=0;i<n;i++)    cin >> a[i];
    auto ans = merge_sort(0, n-1);
    for(int i=0;i<n;i++)    cout << ans[i] << " ";
    return 0;
}