#include<bits/stdc++.h>
using namespace std;

int n;
void printN(int cur){
    if(cur > n)    return;
    cout << cur << endl;
    printN(cur+1);
}

int main(){
    cin >> n;
    printN(1);
    return 0;
}