#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, val;  cin >> n;
    string mec, cmd;  cin >> mec;

    if(mec == "FILO"){
        stack<int> s;
        while(n--){
            cin >> cmd;
            if(cmd == "IN"){
                cin >> val;
                s.push(val);
            }else if(!s.empty()){
                cout << s.top() << endl;
                s.pop();
            }else   cout << "None\n"; 
        }
    }else{
        queue<int> q;
        while(n--){
            cin >> cmd;
            if(cmd == "IN"){
                cin >> val;
                q.push(val);
            }else if(!q.empty()){
                cout << q.front() << endl;
                q.pop();
            }else   cout << "None\n";
        }
    }
}

int main(){
    int t;  cin >> t;
    while(t--)  solve();
    return  0;
}