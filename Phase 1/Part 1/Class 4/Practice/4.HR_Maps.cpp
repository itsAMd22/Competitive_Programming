#include<bits/stdc++.h>
using namespace std;

int main(){
    int q, type, marks;  cin >> q;
    string name;
    map<string,int>mp;
    while(q--){
        cin >> type >> name;
        if(type == 1)   cin >> marks;
        //cout << type << " " << element << endl;
        if(type == 1)   mp[name] += marks;
        else if(type == 2 && mp.find(name) != mp.end())  mp.erase(name);   
        else if(type == 3)    cout << mp[name] << endl;
    }

    return 0;
}