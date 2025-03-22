#include<bits/stdc++.h>
using namespace std;

bool checkset(int num, int pos){
    if(num & (1 << pos))    return true;
    //if((num >> pos) & 1)    return true;
    else    return false;

    //alternative condition : ((num >> pos) & 1)
}

void print_on_bits(int num){
    cout << "Position of set bits :\n";
    for(int i=0;i<32;i++){
        if(checkset(num,i))   cout << i << " ";
    }
    cout << endl;
}

void print_off_bits(int num){
    cout << "Position of unset bits :\n";
    for(int i=0;i<32;i++){
        if(!checkset(num,i))   cout << i << " ";
    }
    cout << endl;
}

int count_on_bits(int num){
    int ans = 0;
    for(int i=0;i<32;i++){
        if(checkset(num,i))   ans++;
    }
    return ans;
}

int set_kth_bit(int num, int k){
    return (num | (1 << k));
}
int unset_kth_bit(int num, int k){
    return (num & (~(1 << k)));
}

int toggle(int num, int k){
    return (num ^ (1 << k));
}

bool isPowerof2(int num){
    return count_on_bits(num) == 1;
}


int main(){
    cout << "~(-6) = " << (~-6) << endl; 
    cout << "~5 = " << ~(5) << endl;
    cout << "1|6 = " << (1|6) << endl;
    cout << "6 & 1 = " << (6&1) << endl;
    cout << "7 ^ 2 = " << (7^2) << endl;

    int a = 3, b = 1000, c = 1, pos;
    cout << "Left shifting of " << a << " -> " << (a << 1) << " " << (a << 2) <<  " " << (a << 3) << endl;
    cout << "Right shifting of " << b <<  " -> " << (b >> 1) << " " << (b >>  2) << " " << (b >> 3) << endl;
    
    cout << (c << 30) << endl; //valid
    cout << (c << 31) << endl; //garbage, exceeds 31 bit limit(omitting sign bit)
    cout << ((long long)c << 40) << endl; //valid, bcs we can lefts shift up to 63rd bit

    //checking whether bit on pos-th position is set or not.
    a = 5, pos = 0;
    //5   ->  1 0 1
    //pos ->  2 1 0
    cout << (checkset(a,pos) ? "Yes\n" : "No\n");
    cout << (checkset(a,pos+1) ? "Yes\n" : "No\n");
    cout << (checkset(a,pos+2) ? "Yes\n" : "No\n");

    //print positions of on bits.
    a = 11;
    print_on_bits(a);
    print_off_bits(a);
    int on_bits  = count_on_bits(a);
    cout << "number of on bits in " << a << " " << on_bits << endl;
    cout << "number of off bits in " << a << " " << 32 - on_bits << endl;


    //odd-even check.
    a = 5, b = 8;
    
    if(a & 1)   cout << a << " is odd\n";
    else    cout << a << " is even\n";
    
    if(b & 1)   cout << b << " is odd\n";
    else    cout << b << " is even\n";


    //setting, unsetting and toggling k-th bit.
    print_on_bits(11);
    print_on_bits(set_kth_bit(11,2));
    print_on_bits(unset_kth_bit(11,3));
    print_on_bits(toggle(11,0));
    print_on_bits(toggle(11,3));
    

    //check power of 2.
    a = 7;
    cout <<  a << " is" << (isPowerof2(a) ? " ":" not ") << "power of 2.\n";
    a = 8;
    cout <<  a << " is" << (isPowerof2(a) ? " ":" not ") << "power of 2.\n";

    

    return 0;
}