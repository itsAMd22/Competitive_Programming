#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    int ar[n];
    for(int i=0;i<n;i++)    cin >> ar[i];

    for(int mask = 0;mask < (1 << n);mask++){ //number of subsets : 2^(n)
        //checking whether i-th bit is on or off.
        for(int i=0;i<n;i++){
            if(mask & (1 << i))
                cout << ar[i] <<  " ";
        }
        cout << endl;
    }
    return 0;
}