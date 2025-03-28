#include<bits/stdc++.h>
using namespace std;

int main(){

    int a = 1e9, b = 1e9, c , d, m = 27;

    //(a+b) ≡ (a mod m + b mod m) mod m
    cout << "\n(a+b) ≡ (a mod m + b mod m) mod m : \n";
    cout << "(a + b) % m " << (a + b) % m << endl;
    cout << "(a % m + b % m) % m" << (a % m + b % m) % m << endl;


    a = 1e9, b = 1e9 + 2;
    //(a-b) ≡ (a mod m - b mod m) mod m;
    cout << "\n(a-b) ≡ (a mod m - b mod m) mod m : \n";
    cout << "((a - b) + m) % m = " << ((a - b) + m) % m << endl; //avoiding neg values
    cout << "((a % m - b % m) % m + m) % m = " << ((a % m - b % m) % m + m) % m << endl;


    a = 1e9, b = 1e9 + 2;
    //(a*b) ≡ (a mod m * b mod m) mod m;
    cout << "\n(a*b) ≡ (a mod m * b mod m) mod m : \n";
    
    cout << "(1LL * a * b) % m = " << (1LL * a * b) % m << endl; 
    cout << "(1LL * a % m) * (1LL * b % m) % m = " << (1LL * a % m) * (1LL * b % m) % m << endl;


    //calculate (a.b.c.d)
    a = 1e9, b = 1e4+2, c = 1e5+9, d = 1e8, m = 1e9+7;
    cout << a * b * c * d << endl;
    cout << ((((((1LL * a * b) % m) * c) % m) % d) % m) << endl;


    //calculate (a - 3.b) % m
    cout << ((a  - 3 * (b % m) % m) + m) % m << endl; //avoid neg using ((+ m) % m))

    //calculate a! mod m;
    int fact = 1;
    for(int i = 2; i <= 100; ++i){
        fact = 1LL * fact * i % m;
    }
    cout << "\n100! = " << fact % m << endl; 


    //(n!)^k mod m
    int k = 1e5;
    long long ans = 1, result = 1;
    for(int i = 2; i <= 100; ++i){
        ans = 1LL * ans * i % m;
    }

    for(int i = 2; i <= k; ++i){
        result = result * ans % m;
    }
    cout << result << endl;
    return 0;
}