#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll N;
bool found;

void ss(ll num){
    //for a new TC, initializing found back to false;
    if(num == 1)    found = false;

    //base case
    if(num > N) return;
    if(num == N){
        found = true;
        return;
    }

    //check multiplying with 10 in this node.
    ss(num * 10);

    //check multiplying with 20 in this node.
    ss(num * 20);
}

int main(){
    int t;  cin >> t;
    while(t--){
        cin >> N;
        ss(1);
        cout << (found ? "YES\n" : "NO\n");
    }

    return 0;
}
