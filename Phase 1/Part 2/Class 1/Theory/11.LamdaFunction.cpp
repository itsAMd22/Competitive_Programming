#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);

    // [capture](parameter) -> return_type{
    //     code
    // }

    // Capture : Determines how variables from outside the lamba function can be accessed within it.
    //     -> [] : Captured nothing.
    //     -> [=]:Captured all locally declared variables, by value.
    //     -> [&]:Captured all locally declared variables, by reference.
    //     -> [a, &b]:Captures variable a by value and b by reference.
    

    int x = 10, y = 20;
    auto lamda_by_value = [=](int a) -> int {
        // x += 15; // Error
        return a+x;
    };
    cout << "Capture by value: " << lamda_by_value(5) << endl;

    auto lamda_by_ref = [&](int a) -> int {
        return a + x;
    };
    cout << "Capture by reference: " << lamda_by_ref(5) << endl;
    x += 15;
    cout << "Capture by reference after changing x : " << lamda_by_ref(5) << endl;
    
    x+=10;
    auto lamda_mix = [x, &y](int a) -> int {
        // x+=15;  //Error
        // y += 9; //valid, as its passed by ref

        // once a copy is created, cannot be overwrittem.
        
        cout << "x -> " << x << endl;
        cout << "y -> " << y << endl;
        return a + x + y;
    };
    cout << "mixed capture : \n" << lamda_mix(5) << endl;
    x += 10;
    y += 10;
    cout << "mixed capture , after changing x and y : \n" << lamda_mix(5) << endl;


    auto no_cap = [](int a, int b) -> int{
        return a+b;
    };
    cout << "No capture : " << no_cap(18, 12) << endl;


    //not specifying any return type.
    auto inferred_return_type = [](int a, int b){
        return a+b;
    };
    cout << "Auto inferred : " << inferred_return_type(18, 32) << endl;

    return 0;
}