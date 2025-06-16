#include<bits/stdc++.h>
using namespace std;


int main(){

    //size must be a constant.
    //the size of the bitset can be a number like 1e8 or something.

    //bitset<size>name(num_in_ull);
    //bitset<size>name("string");
    //bitset<size>name; //all bits are 0

    bitset<8>bs(12);
    cout << "bs -> " << bs << endl;
    bitset<8>bs_in_str("00001100");
    cout << "bs_in_str -> " << bs_in_str << endl;


    //set -> 1, reset -> 0, flip ------ index can be specified, if not, works on all bits.
    //count() counts the number of set bits.
    //to_ullong converts to unsigned long long dec.
    ///to_string converts to binary string.
    //any() checks if theres atleast one set bit.
    //none() checks if theres no set bit
    //all() checks whether all bits are set or not.

    bs.flip(6);
    cout << "bs -> " << bs << endl;
    bs.flip();
    cout << "bs -> " << bs << endl;

    bs.set(0); //sets the 0-th bit.
    cout << "bs -> " << bs << endl;

    bs.reset(3);    //unsets the 3rd bit.
    cout << "bs -> " << bs << endl;

    bs.set();   //sets all the bits.
    cout << "bs -> " << bs << endl;

    

    
    if(bs.any())  cout << "atleast one set bit.\n";
    if(bs.all()) cout << "all bits are set.\n";


    bs.reset();   //unsets all the bits.
    cout << "bs -> " << bs << endl;

    if(bs.none())   cout << "no bits are set.\n";


    //supports all bitwise oprts.

    bitset<8>p(41);
    bs = 12;
    cout << bs << endl;


    cout << "tilda of bs -> " << (~bs) << endl;
    cout << "bs | p -> " << (bs | p) << endl;
    cout << "bs & p -> " << (bs & p) << endl;
    cout << "bs ^ p -> " << (bs ^ p) << endl;
    cout << "bs -> " << bs << endl;
    cout << "bs >> 1 -> " << (bs >> 1) << endl;
    cout << "bs -> " << bs << endl;
    cout << "bs << 1 -> " << (bs << 1) << endl;

    //TC for most functions except bit_manpl ones is O(n/W)
    //n -> size of the bitset
    //W -> 64 for 64 bit computers and 32 for 32 bit computers.

    return 0;
}