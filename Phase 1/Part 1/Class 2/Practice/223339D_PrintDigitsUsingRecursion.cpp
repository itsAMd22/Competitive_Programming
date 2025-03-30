#include<bits/stdc++.h>
using namespace std;

vector<int>dig;

void print_dig(int cur){
    if(cur == 0){
        for(int i=0;i<dig.size();++i){
            cout << dig[i] << " ";
        }
        cout << endl;
        dig.clear();
        return;
    }  
    dig.insert(dig.begin(), cur % 10);
    print_dig(cur / 10);
}

void solve(){
    int n;  cin >> n;
    if(n == 0){
        cout << 0 << endl;
        return;
    }  
    print_dig(n);
}

int main(){
    int t;  cin >> t;
    while(t--)      solve();
}