#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define db(i) cout << "c -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;

//next_permutation(arr,arr+m) gives the following greater permutation.
//starts from the smallest

//prev_permuation(arr, arr+m) gives the following lesser permutation.
//starts from the greatest.


void solve(){
    int a[5] = {0,1,2,3,4};
    int n = 5;
    do{
        for(int i=0;i<5;i++){
            cout << a[i] << " ";
        }cout << endl;
    }while(next_permutation(a,a+n));

    cout << endl;

    sort(a,a+n,greater<>());
    do{
        for(int i=0;i<5;i++){
            cout << a[i] << " ";
        }cout << endl;
    }while(prev_permutation(a,a+n));
}

int main(){
    Alhamdulillah
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}