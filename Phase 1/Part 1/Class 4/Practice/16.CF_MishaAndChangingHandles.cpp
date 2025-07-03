#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;  cin >> q;
    string old, neww;

    map<string, string> name, rev_name;
    map<string, int> used;
    
    while(q--){
        cin >> old >> neww;

        if(used.find(neww) != used.end()){
            //new name is already used, no updation possible.
            continue;
        }else if(used.find(old) == used.end()){
            //new
            name[old] = neww, rev_name[neww] = old;
            used[old] = 1, used[neww] = 1;
        }else{
            //change
            used[neww] = 1;
            name[rev_name[old]] = neww;
            rev_name[neww] = rev_name[old];
        } 
    }

    cout << name.size() << endl;
    for(auto [x,y] : name)  cout << x <<  " " << y << endl;

    return 0;
}
