#include<bits/stdc++.h>
using namespace std;

#define pv(a)   for(auto e : a) cout << e << ' ';   cout << endl;

bool compare_a_less_than_b(vector<int> *a, vector<int> *b){
    int m = (*a).size(), n = (*b).size();
    for(int i=0;i<min(m,n);i++){
        if(a[i] < b[i]) return true;
        else if(a[i] > b[i])    return false;
    }
    return n < m;
}

int main(){
    // string a,b;

    // a = "abc", b = "abc";

    // cout << a << " " << b << endl;
    // cout << boolalpha << "a == b is -> " << (a == b) << '\n';
    // cout << boolalpha << "a < b is -> " << (a < b) << '\n';
    // cout << boolalpha << "a > b is -> " << (a > b) << '\n';

    // b = "abs";

    // cout << a << " " << b << endl;
    // cout << boolalpha << "a == b is -> " << (a == b) << '\n';
    // cout << boolalpha << "a < b is -> " << (a < b) << '\n';
    // cout << boolalpha << "a > b is -> " << (a > b) << '\n';

    // a = "absq";

    // cout << a << " " << b << endl;
    // cout << boolalpha << "a == b is -> " << (a == b) << '\n';
    // cout << boolalpha << "a < b is -> " << (a < b) << '\n';
    // cout << boolalpha << "a > b is -> " << (a > b) << '\n';

    // b = "d";

    // cout << a << " " << b << endl;
    // cout << boolalpha << "a == b is -> " << (a == b) << '\n';
    // cout << boolalpha << "a < b is -> " << (a < b) << '\n';
    // cout << boolalpha << "a > b is -> " << (a > b) << '\n';


    // cout << "\n\n";
    // cout << "min -> " << min(a,b) << endl;
    // cout << "max -> " << max(a,b) << endl;

    vector<int> a,b;
    a = {1,2,3}, b = {1,2,3};

    pv(a)
    pv(b)
    cout << boolalpha << "a == b is -> " << (a == b) << '\n';
    cout << boolalpha << "a < b is -> " << (a < b) << '\n';
    cout << boolalpha << "a > b is -> " << (a > b) << '\n';

    b = {1,2,4};

    pv(a)
    pv(b)
    cout << boolalpha << "a == b is -> " << (a == b) << '\n';
    cout << boolalpha << "a < b is -> " << (a < b) << '\n';
    cout << boolalpha << "a > b is -> " << (a > b) << '\n';

    b = {1,2,3,4};
    pv(a)
    pv(b)
    cout << boolalpha << "a == b is -> " << (a == b) << '\n';
    cout << boolalpha << "a < b is -> " << (a < b) << '\n';
    cout << boolalpha << "a > b is -> " << (a > b) << '\n';
    
    cout << "\n\n";

    pv(a)
    pv(b)
    cout << boolalpha << "a < b is -> " << compare_a_less_than_b(&a , &b) << '\n';

    
    return 0;
}