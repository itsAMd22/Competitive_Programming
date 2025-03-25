#include<bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;
char s[N];   

int main(){
    cin >> s;
    int freq[26] = {0}, n = strlen(s);
    //freq[i] = x -> here i is the corresponding rank of a letter and x is the frquency.
    for(int i=0;i<n;i++){
        int rank = s[i] - 'a';
        freq[rank]++;
    }

    for(int i=0;i<26;i++){
        if(freq[i] > 0){
            //'a' + i -> 'l' : letter with rank ('l'-'a').
            cout << char('a' + i) << " : " << freq[i] << endl;
        }
    }
    return 0;
}