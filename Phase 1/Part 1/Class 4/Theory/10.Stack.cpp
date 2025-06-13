#include<bits/stdc++.h>
using namespace std;

//LIFO -> Last In First Out

int main(){
    //declaration, have to create an empty stack, then push the elements.
    stack<int>st1;
    st1.push(10);
    st1.push(1);
    st1.push(9);
    st1.push(2);
    
    cout << "size -> " << st1.size() << endl;
    cout << "top -> " << st1.top() << endl << endl; //2
    
    st1.pop();
    cout << "size -> " << st1.size() << endl;
    cout << "top -> " << st1.top() << endl << endl; //9

    st1.push(2);

    
    //st.empty() checks if a stack is empty or not.
    //st1/swap(st2) is valid to swap contents between 2 stacks.
    
    //no iterator, function like sort/reverse, indexing. only st.top() to access the top element.
    //to print the whole stack----
    
    // cout << "top -> " << st1.top() << endl;
    // st1.pop();
    // cout << "top -> " << st1.top() << endl;
    // st1.pop();
    // cout << "top -> " << st1.top() << endl;
    // st1.pop();
    // cout << "top -> " << st1.top() << endl << endl;
    // st1.pop();

    while(!st1.empty()){
        cout << "top -> " << st1.top() << endl;
        st1.pop();
    }

    return 0;
}