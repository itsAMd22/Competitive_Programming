#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, string>mp;
    string eng, forn, entry, q;

    while(getline(cin, entry)){

        if(entry == "") break; //empty line marking the end of entries.
        stringstream ss(entry);
        
        while(ss >> eng >> forn)    mp[forn] = eng;
    }

    while(cin >> q){
        if(mp.find(q) != mp.end())  cout << mp[q] << endl;
        else    cout << "eh\n";
    }
    
    
    return 0;
}
