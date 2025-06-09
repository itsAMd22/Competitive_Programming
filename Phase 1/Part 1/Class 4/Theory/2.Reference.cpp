#include<bits/stdc++.h>
using namespace std;

int main(){
    int num = 10;
    int &ref = num;
    cout << "num -> " << num << endl;
    cout << &num << " -> " << num << endl;
    cout << "ref -> " << ref << endl;
    cout << &ref << " -> " << ref << endl;
    
    cout << endl;
    
    ref++;
    cout << "num -> " << num << endl;
    cout << &num << " -> " << num << endl;
    cout << "ref -> " << ref << endl;
    cout << &ref << " -> " << ref << endl;

    return 0;
}