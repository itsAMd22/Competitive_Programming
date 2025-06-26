#include<bits/stdc++.h>
using namespace std;

int main (){
    int n, e, ct = 0;  cin >> n;
    string st;

    map<int,int>mp;

    for(int i=0;i<n;i++){
        cin >> st >> e;
        if(st == "add"){
            if(mp[e] == 0) ct++;
            mp[e]++;
        } 
        else if(mp[e]){
            mp[e]--;
            if(mp[e] == 0) ct--;
        } 

        cout << ct << endl;
    }
    return 0;
}