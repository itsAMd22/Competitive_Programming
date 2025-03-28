#include<bits/stdc++.h>
using namespace std;

bool odd(int a){
    return (a%2);
}

bool pallindrome(int a){
    bitset<32>bin(a);
    int l = floor(log(a)/log(2)) + 1, r = 31;
    //l -> digit count in binary representation
    for(int i=0;i<l/2;++i)      if(bin[i] != bin[l-i-1])    return false;
    return true;
}


int main(){
    int n;    cin >> n;
    if(odd(n) && pallindrome(n))    cout << "YES";
    else    cout << "NO";
    return  0;
}