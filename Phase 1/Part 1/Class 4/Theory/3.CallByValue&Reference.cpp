#include<bits/stdc++.h>
using namespace std;

void swap1(int p, int q){ //call by value
    int tmp = p;
    p = q;
    q = tmp;
}

void swap2(int* a, int* b){ //call by reference using pointers
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap3(int &p, int &q){ //call by reference using references
    int tmp = p;
    p = q;
    q = tmp;
}

int main(){
    int a=5, b=2;
    swap1(a,b); //no change
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;
    cout << endl;

    swap2(&a,&b);   //changed
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;
    cout << endl;

    swap3(a,b); //changed, reverted back to initial value
    cout << "a -> " << a << endl;
    cout << "b -> " << b << endl;
    cout << endl;

    return 0;
}