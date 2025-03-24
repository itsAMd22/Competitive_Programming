#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    char a[21], b[21];  cin >> a >> b;
    int len_a = strlen(a), len_b = strlen(b);
    int it = min(len_a, len_b);
    for(int i=0;i<it;i++){
        //if there is a mismatch, we can decide which is smaller.
        if(a[i] < b[i]){
            cout << a;
            return 0;
        }else if(a[i] > b[i]){
            cout << b;
            return 0;
        }
    }

    //if no mismatch, print the one with smaller lenght.
    cout << (it == len_a ? a : b);
    return 0;
}