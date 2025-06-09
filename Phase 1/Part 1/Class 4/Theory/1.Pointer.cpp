#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int *ptr;   //ptr is declared as a pointer variable
    ptr = &a;
    
    cout << "Address of a -> " << ptr << endl; //reference
    cout << "Value at " << ptr << " -> " << *ptr << endl; //derefence
    cout << endl;
    
    //mpdifying the value indirectly by accesing the location.
    *ptr = 12;
    cout << "Address of a -> " << ptr << endl; //reference
    cout << "Value at " << ptr << " -> " << *ptr << endl; //derefence
    cout << endl << endl;


    //elements in an array is stored in a contigous memory block.
    int b[] = {1,2,3,4,5,6};
    for(int i=0;i<sizeof(b)/sizeof(b[0]);i++) cout << i << " -> " << &b[i] << endl;

    int *bptr = &b[0];
    cout << *(bptr + 3) << endl; // b[3] = 4
    cout << *(++bptr) << endl; //b[1] = 2
    cout << *(--bptr) << endl; //bptr[0] = 1
    *bptr += 5; //bptr[0] = 1+5 = 6
    cout << *bptr << endl;  //bptr[0] = 6
    cout << bptr[5] << endl;    //bptr[5] = 4, same as *(bptr + 5)
    return 0;
}