#include <bits/stdc++.h>
using namespace std;

// Global variable (accessible throughout the program)
int x = 10; 

void modifyGlobal() {
    x += 5; // Modifying global variable
    cout << "Inside modifyGlobal(): x (global) = " << x << endl;
}

void demonstrateScope() {
    // Local variable (shadows the global x)
    int x = 20; 
    
    cout << "Inside demonstrateScope(): x (local) = " << x << endl;
    
    {
        int x = 30; // More local variable (shadows the previous local x)
        cout << "Inside inner block: x (more local) = " << x << endl;
        int y = 100;
    }
    cout << y;
    // Back to function scope
    cout << "Back in demonstrateScope(): x (local) = " << x << endl;
}

int main() {
    cout << "Initially: x (global) = " << x << endl;
    
    demonstrateScope(); // Demonstrates scope and precedence
    
    modifyGlobal(); // Modifies the global variable
    
    cout << "After modifyGlobal(): x (global) = " << x << endl;
    
    return 0;
}
