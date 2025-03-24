#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, ct = 0;  cin >> n;
    char s[n+5];    cin >> s;

    for(int i=0;i<n;i++){
        char tmp = s[i];
        ++i;
        while(i < n && tmp == s[i])  ++i, ++ct;
        --i;
    }
    cout << ct;
}