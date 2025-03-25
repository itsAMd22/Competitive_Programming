#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    char a[21], b[21];  cin >> a >> b;
    int len_a = strlen(a), len_b = strlen(b);
    
    cout << len_a <<  " " << len_b << endl << a << b << endl;
    char tmp = a[0];
    a[0] = b[0], b[0] = tmp;
    cout << a <<  " " << b;
    return 0;
}