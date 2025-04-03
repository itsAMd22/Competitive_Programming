#include<bits/stdc++.h>
#define ll long long
using namespace std;

int s, e, ct = 0;

void ss(int cur){
    if(cur > e) return;
    if(cur == e)    ++ct;

    //taking 1 step in from this node
    ss(cur+1);

    //taking 2 step in from this node
    ss(cur+2);

    //taking 3 step in from this node
    ss(cur+3);
}

int main(){
    cin >> s >> e;
    ss(s);
    cout << ct;
    return 0;
}
