#include<bits/stdc++.h>
using namespace std;

//given n<=1000 binary strings each of length n. You are also given an integer k.
//For two strings a and b, define d(a,b) = number of positions where a and b differ. 
//Find the number of pairs of strings such that d(a,b) >= k

const int N = 1005;
string s[N];
int ans = 0;

int main(){
    int n,k,ct = 0;    cin >> n >> k;
    for(int i=0;i<n;i++)    cin >> s[i];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(i == j)  continue;
            else if((bitset<1005>(s[i]) ^ bitset<1005>(s[j])).count() <= k){
                ct++;
            }
        }
    }
    cout << ct;
    return 0;
}