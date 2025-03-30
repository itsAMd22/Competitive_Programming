#include<bits/stdc++.h>
using namespace std;

int n;
void printN(int cur){
    if(cur == 0)    return;
    cout << cur;
    if(cur > 1) cout << " ";
    printN(--cur);
}

int main(){
    cin >> n;
    printN(n);
    return 0;
}