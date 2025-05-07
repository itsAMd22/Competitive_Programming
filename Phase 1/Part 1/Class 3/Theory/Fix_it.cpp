#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define db(i) cout << "c -> " << i << endl;
#define pv(v) for(auto e : v)   cout << e << " ";   cout << endl;
#define pm(m) for(auto [x,y] : m)   cout << x << " " << y << endl;   cout << endl;


//Given an array of n integers, find the sum of ai x aj for all 1 <= i,j <= n
void solve(){
    int n;  cin >> n;
    int a[n], tot_sum = 0, ans = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        tot_sum += a[i];
    }    

    for(int j=0;j<n;j++){
        //e = a[j], fixing it in this iteration
        ans += tot_sum*a[j];
    }
    cout << ans << endl;
}

//Given an array of n integers, find the sum of ai x aj for all 1 <= i < j <= n
int psum[100005];
void solve2(){
    int n;  cin >> n;
    int a[n+1], ans = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        psum[i] = psum[i-1] + a[i];        
    }    

    for(int i=1;i<=n;i++){
        //e = a[i], fixing it in this iteration
        ans += a[i] * (psum[n] - psum[i]);
    }
    cout << ans << endl;
}

int main(){
    Alhamdulillah
    int t=1;    cin >> t;
    while(t--)  solve(), solve2();
    return 0;
}