#include<bits/stdc++.h>
using namespace std;


void add1(int *p, int n){ 
    for(int i=0;i<n;i++)    p[i]++; //same is *(p+i) += 1
}

void add2(int p[], int n){ //basically decays into a pointer to its first element.
    for(int i=0;i<n;i++)    p[i]++;
}

void add3(int p[6]){ //basically decays into a pointer to its first element.
    for(int i=0;i<6;i++)    p[i]++;
}

int main(){
    int a[] = {1,23,1234,21,12,76};
    int n = sizeof(a)/sizeof(a[0]);
    add1(a,n);
    for(int i=0;i<n;i++)    cout << a[i] << " ";    cout << endl;
    add2(a,n);
    for(int i=0;i<n;i++)    cout << a[i] << " ";    cout << endl;
    add3(a);
    for(int i=0;i<n;i++)    cout << a[i] << " ";    cout << endl;
    return 0;
}