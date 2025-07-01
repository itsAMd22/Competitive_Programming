#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, val, fight = 0;  cin >> n;
    int k1, k2;

        
    queue<int> a,b; 
    cin >> k1;
    for(int i=0;i<k1;i++){
        cin >> val;
        a.push(val);
    }    
    cin >> k2;
    for(int i=0;i<k2;i++){
        cin >> val;
        b.push(val);
    }    
    int op = 10000;
    while(op--){
        if(a.front() == b.front()){
            cout << -1;
            break;
        }else if(a.front() > b.front()){
            int self = a.front(), op = b.front();
            a.pop(), b.pop();
            fight++;
            if(b.empty()){
                cout << fight << " " << 1;
                return 0;
            }
            a.push(op);
            a.push(self);
            
        }else{
            int self = b.front(), op = a.front();
            a.pop(), b.pop();
            fight++;
            if(a.empty()){
                cout << fight << " " << 2;
                return 0;
            }
            b.push(op);
            b.push(self);
        }
    }

    cout << -1;
    return 0;
}