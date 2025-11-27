#include<bits/stdc++.h>
using namespace std;


bool isVowel(char c){
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void solve(){
    string s;
    getline(cin, s);
    int n = (int) s.size();
    long long ans = 0;
    for(int i = 0 ; i < n ; i++){
        if(isVowel(s[i])){
            ans += (i * (n-i+1));
        }
    }
    cout << ans;
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}