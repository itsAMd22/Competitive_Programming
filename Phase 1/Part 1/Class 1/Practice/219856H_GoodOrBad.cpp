#include<bits/stdc++.h>
using namespace std;

void solve(){
    char s[100005]; cin >> s;
    int n = strlen(s);

    for(int l = 0;l < n-2;l++){
        //substring of size 3 : s[l],s[l+1],s[l+2]
        char substring[4] = {s[l],s[l+1],s[l+2],'\0'};
        if(!strcmp(substring, "010") || !strcmp(substring, "101")){
            //strcmp(string1, string2) returns 0 is matched.
            cout << "Good\n";
            return;
        }
           
    }
    cout << "Bad\n";
    return;
}

int main(){
    int t = 1;  cin >> t;
    while(t--)  solve();
    return 0;
}