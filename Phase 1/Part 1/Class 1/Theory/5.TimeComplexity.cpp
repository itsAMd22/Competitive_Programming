#include<bits/stdc++.h>
using namespace std;

void O1(){
    int a = 3, b = 4;
    int sum = a + b;
    cout << sum << endl;
    //reasonable input size : <= 10^18 assuming the number fits in a 64-bit system.
}

void Ologn(){
    int n;     cin >> n;
    for(int i=0;i<n;i+=2){ 
        cout << "Hello\n";
        //loop runs for logn times
    }
    //reasonable input size : <= 10^18 as log(10^18) = 60.
}

void Osqrtn(){
    int n;     cin >> n;
    for(int i=0;i*i<n;i+=2){ 
        cout << "Hello\n";
        //loop runs for sqrt(n) times
    }
    //reasonable input size : <= 10^16 as log(10^16) = 10^8.
}


void On(){
    int n;     cin >> n;
    for(int i=0;i<n;i++){
        cout << "Hello\n";
        //loop runs for n times
    }
    //resonable input size : <= 10^8
}

void Onlogn(){
    int n;     cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j+=2) 
            cout << "Hello\n";
        //loop runs for n * logn times
    }
    //reasonable input size : <= 10^6 as (10^6) * log(10^6) = 20x10^6.
}

void Onlog_square_n(){
    int n;     cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j+=2) 
            for(int k=0;k<n;k+=2) 
                cout << "Hello\n";
        //loop runs for n * logn * logn times
    }
    //reasonable input size : <= 10^5 as (10^5) * log(10^5) * log(10^5) = 30x10^6.
}

void On_sqrtn(){ 
    int n;     cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j*j<n;j++)
            cout << "Hello\n";
        //loop runs for n * sqrtn() times
    }
    //reasonable input size : <= 10^5 as (10^5) * sqrt(10^5) = 3x10^7.
}
void On_square(){
    int n;     cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) 
            cout << "Hello\n";
        //loop runs for n * n times
    }
    //reasonable input size : <= 10^4 as (10^4) * (10^4) = 10^8.
}

void On_cube(){
    int n;     cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) 
            for(int k=0;k<n;k++) 
                cout << "Hello\n";
        //loop runs for n * n * n times
    }
    //reasonable input size : <= 500 as 500 * 500 * 500 = 7.5x10^6
}

void O2_power_of_n(){
    int n;  cin >> n;
    for(int i=0;i < (1 << n);i++){
        cout << "Hello\n";
    }
    //loop runs 2^n times
    //reasonable input size :  <= 25
}

void Onfactorial(){
    //reasonable input size :  <= 10
}


int main(){
    
    return 0;
}