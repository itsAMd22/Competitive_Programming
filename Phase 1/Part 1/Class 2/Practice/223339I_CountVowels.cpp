#include<bits/stdc++.h>
using namespace std;

string s;   
int ct = 0;
unordered_set<char>vowels = {'a','e','i','o','u','A','E','I','O','U'};

void check(int ind){
    if(ind == s.size())  return;
    char e = s[ind];
    if(vowels.count(e)) ++ct;  
    check(ind + 1);
}


int main(){
    getline(cin,s);
    check(0);
    cout << ct;
    return 0;
}