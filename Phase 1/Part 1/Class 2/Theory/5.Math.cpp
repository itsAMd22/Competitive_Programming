#include<bits/stdc++.h>
using namespace std;


    //log(x) = loge (x) or ln(x)
    //log2(x) = log2 (x)
    //log10(x) = log10 (x)

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);

    //logarithm of base 2
    cout << "log2(32) = " << log2(32) << endl; //32
    
    //logarithm of base 10
    cout << "log10(1000) = " << log10(1000) << endl; //3

    //logarithm of base e (natural logarithm)
    cout << "loge (2.71828) = " << log(2.71828)  << endl; //0.99999, e = 2.71828

    //logartihm of base x
    cout << "log27(98832) = " << log(98832) / log(27) << endl; //3.489607
    cout << "log27(98832) = " << log10(98832) / log10(27) << endl; //save as above
    cout << "log27(98832) = " << log2(98832) / log2(27) << endl; //same as above


    //number of digits
    cout << "no. of digits in 893623 = " << floor(log10(893623)) + 1 << endl;


    //number of digits in n!
    int n = 10;
    double ans = 0;
    for(int i=1;i<=10;i++)   ans += log10(i); 
    //10! = 3628800, so 7 digits.
    cout << "no. of digits in " << n << "! = " << floor(ans)+1 << endl;
    
    return 0;
}
