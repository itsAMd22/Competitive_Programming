#include<bits/stdc++.h>
using namespace std;

int memo[35];

int fib(int n){
    if(n==1||n==2)    return n-1;
    if(memo[n])    return memo[n];
    return memo[n] = fib(n-1) + fib(n-2);
}

int main(){
    int n;    cin >> n;
    cout << fib(n);
    return 0;
}
