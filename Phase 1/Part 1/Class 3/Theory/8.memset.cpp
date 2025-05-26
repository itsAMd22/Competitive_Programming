#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define db(i) cout << "c -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;

//Syntax : memset(destination, value_to_assigned, amount_of_memory(starting from destination's initial address))

void solve(){
    int a[10];
    
    memset(a, 0, 10);
    pv(a);
    //0 0 1875181568 0 6422015 0 6422096 0 16 0 
    
    memset(a, 0, 10 * sizeof(a[0]));
    pv(a);
    //0 0 0 0 0 0 0 0 0 0 


    ll n = 10;
    ll b[n];
    ll x = -1;
    memset(b, x, sizeof(b));
    pv(b);
    //67372036 67372036 67372036 67372036 67372036 67372036 67372036 67372036 67372036 67372036 
    //doesnt work other than -1 and 0, for int.
    // cout << "x-> " << bitset<32>(x) << endl << endl;
    cout << "x-> " << x << endl << endl;
    pv(b)


    //so technically with -1 and 0, its working unintentionally in an intended way.
    //solution : feel function.
}



int main(){
    Alhamdulillah
    int t=1;    cin >> t;
    while(t--)  solve();
    return 0;
}