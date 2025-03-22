#include<bits/stdc++.h>
using namespace std;



int main(){
    int arr[5] = {1,2,3,4,5};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int rev[sz];
    
    for(int i=0;i<sz;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    //reversing the array
    for(int i=0;i<sz;i++){
        rev[i] = arr[sz - 1 - i];
    }
    for(int i=0;i<sz;i++){
        arr[i] = rev[i];
    }

    for(int i=0;i<sz;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;

}