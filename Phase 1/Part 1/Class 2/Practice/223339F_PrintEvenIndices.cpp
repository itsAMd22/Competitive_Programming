#include<bits/stdc++.h>
using namespace std;

int arr[1000], n;

void print_ev(int ind){
    if(ind >= n) return;
    int cur = arr[ind];
    //this is an element in even indice.
    //but there might be another to its right.
    //so lets store it in the stack and check further to its right.
    print_ev(ind+2);
    cout << cur << " ";
}


int main(){
    cin >> n;
    for(int i=0;i<n;i++)    cin >> arr[i];
    print_ev(0);
    return 0;
}