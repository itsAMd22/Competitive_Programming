#include<bits/stdc++.h>
using namespace std;

int main(){
    int q, type, element;  cin >> q;
    set<int>s;
    while(q--){
        cin >> type >> element;
        //cout << type << " " << element << endl;
        if(type == 1)   s.insert(element);
        else if(type == 2 && s.find(element) != s.end())   s.erase(element);
        else if(type == 3)    cout << (s.find(element) != s.end() ? "Yes\n" : "No\n");
    }

    return 0;
}