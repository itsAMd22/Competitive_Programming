#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<char> v;
    //stack can be used too.
    string s;   cin >> s;
    for(int i=0;i<(int)s.size();i++){
        if(s[i] == '(') v.push_back('(');
        else{
            if(v.empty()){
                cout << "not balanced\n";
                return 0;
            }else   v.pop_back();
        }
    }
    cout << "Balanced\n";

    return 0;
}