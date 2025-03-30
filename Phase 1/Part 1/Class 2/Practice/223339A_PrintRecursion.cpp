#include<bits/stdc++.h>
using namespace std;

int n;

void rec(int n){
    if(n == 0)  return;
    cout << "I love Recursion\n";
    rec(--n);
}

int main(){
    cin >> n;
    rec(n);
}