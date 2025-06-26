#include<bits/stdc++.h>
using namespace std;

int main(){
    string sent, word;    getline(cin, sent);
    stringstream cstm_cin(sent);

    map<string, int>mp;
    while(cstm_cin >> word) mp[word]++;

    for(auto [word,occ] : mp)   cout << word << " -> " << occ << endl;
    
    return 0;
}