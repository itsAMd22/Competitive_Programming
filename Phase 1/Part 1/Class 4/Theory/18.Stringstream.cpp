#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    //int a,b,c,d,e;
    //cin >> a >> b >> c >> d >> e;
    //cout << a << " " << b << " " <<  c << " " <<  d << " " <<  e << endl;

    stringstream cstm_cin1(s);
    cout << cstm_cin1.str() << endl;

    int n;
    //while(cin >> n)
    while(cstm_cin1 >> n)    cout << n << " ";   cout << endl;
    
    string st, word;
    getline(cin, st);
    stringstream cstm_cin2(st);
    while(cstm_cin2 >> word) cout << word << endl;   

    return 0;
}