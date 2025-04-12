#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;  
    while(cin >> a >> b >> c){
        if(!a && !b && !c)  break;
        else if(b-a == c-b)  cout << "AP " << c + c - b << endl;
        else if(b/a == c/b)   cout << "GP " << c * (c/b) << endl;
    }

}

int main(){
    solve();
    return 0;
}