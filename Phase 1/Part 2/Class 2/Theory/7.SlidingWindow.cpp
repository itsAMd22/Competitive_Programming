#include<bits/stdc++.h>
using namespace std;

struct DS1{
    multiset<int> m;
    DS1(){}
    void insert(int val)    {m.insert(val);}
    void erase(int val)     {m.erase(m.find(val));}
    int get_mx()            {return *(--m.end());}
}ds1;

struct DS2{
    map<int, int> mp;
    DS2(){}
    void insert(int val)    {mp[val]++;}
    void erase(int val){
        mp[val]--;
        if(mp[val] == 0)    {mp.erase(val);}
    }
    int get_ct()            {return (int)mp.size();}
}ds2;

void solve(){
    int n, k;
    cin >> n >> k;
    
    int a[n], sum = 0, l = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }

    cout << "1. window sums : ";
    for(int i = 0 ; i < n ; i++){
        sum += a[i];
        if(i >= k - 1){
            cout << sum << " ";
            sum -= a[l++];
        }
    }
    cout << '\n';
    
    l = 0;

    cout << "2. mx : ";
    for(int i = 0 ; i < n ; i++){
        ds1.insert(a[i]);
        if(i >= k - 1){
            cout << ds1.get_mx() << ' ';
            ds1.erase(a[l++]);
        }
    }
    cout << '\n';

    cout << "3. Unique count : ";
    l = 0;
    for(int i = 0 ; i < n ; i++){
        ds2.insert(a[i]);
        if(i >= k - 1){
            cout << ds2.get_ct() << ' ';
            ds2.erase(a[l++]);
        }
    }
    cout << '\n';
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}