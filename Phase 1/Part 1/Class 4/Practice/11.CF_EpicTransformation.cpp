#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define db(i) cout << "c -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;

void solve(){
    int n;  cin >> n;

    int t = n;

    vector<int> v(n);
    map<int,int> f;
    priority_queue<pair<int,int>> pq;

    for(int i=0;i<n;i++){
        cin >> v[i];
        f[v[i]]++;
    }    

    for(auto [val, cnt] : f) pq.push({cnt, val});

    while(pq.size() > 1){

        //pick the two elements with most occurances, and delete one occurance of each at once.
        //priority queue does the sorting part to maintain the order
        
        auto [cnt1, val1] = pq.top();
        pq.pop();
        auto [cnt2, val2] = pq.top();
        pq.pop();

        cnt1--, cnt2--, t -= 2;

        if(cnt1 > 0)    pq.push({cnt1, val1});
        if(cnt2 > 0)    pq.push({cnt2, val2});
    }

    cout << t << endl;
}

int main(){
    Alhamdulillah
    int t=1;    cin >> t;
    while(t--)  solve();
    return 0;
}