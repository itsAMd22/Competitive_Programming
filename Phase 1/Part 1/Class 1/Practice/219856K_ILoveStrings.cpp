#include<bits/stdc++.h>
using namespace std;

void solve(){
    char a[55],b[55];   cin >> a >> b;
    int ln_a = strlen(a), ln_b = strlen(b);
    for(int i=0;i<min(ln_a, ln_b);i++)    cout << a[i] << b[i];
    
    if(ln_a > ln_b){
        for(int i=ln_b;i<ln_a;i++)  cout << a[i];
    }else if(ln_a < ln_b){
        for(int i=ln_a;i<ln_b;i++)  cout << b[i];
    }

    cout << endl;
}

int main(){
    int t=1;    cin >> t;
    while(t--)  solve();
    return 0;
}