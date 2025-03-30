#include<bits/stdc++.h>
using namespace std;

vector<int>dig;

void print_bin(int cur){
    //cout << cur << " " << cur % 2 << endl;
    if(cur == 0)    return;  
    int last_dig = cur % 2;
    //decalaring globally would be wrong as it would update in each call.
    //however we want one last_dig to exist in each stack, all different from each other.
    print_bin(cur / 2);
    cout << last_dig;
}

void solve(){
    int n;  cin >> n;
    if(n == 0){
        cout << 0 << endl;
        return;
    }else{
        print_bin(n);
        cout << endl;
    }
}

int main(){
    int t;  cin >> t;
    while(t--)      solve();
    return 0;
}