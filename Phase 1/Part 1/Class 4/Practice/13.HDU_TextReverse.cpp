#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;  cin >> t;
    cin.ignore();
    string sent, word;
    while(t--){
        getline(cin, sent);
        stringstream ss(sent);
        while(ss >> word){
            reverse(word.begin(), word.end());
            cout << word << " ";
        }cout << endl;
    }
    return 0;
}