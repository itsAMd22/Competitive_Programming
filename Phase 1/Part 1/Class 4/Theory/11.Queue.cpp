#include<bits/stdc++.h>
using namespace std;

//FIFO -> Fisrt In First Out

int main(){ 
    //declaration
    queue<int>q1, q2({1,2,3,4,7,8});

    q1.push(10);
    q1.push(1);
    q1.push(9);
    q1.push(2);


    cout << "front -> " << q1.front() << endl; //10
    cout << "back -> " << q1.back() << endl; //2


    cout << "size of q2 -> " << q2.size() << endl;
    q2.pop();
    cout << "size of q2 -> " << q2.size() << endl;

    //empty(), swap() works as well.
    //no iterators, functions(sort, reverse), indexing.
    //only front() and back() to access elements.

    while(!q2.empty()){
        cout << "front -> " << q2.front() << endl;
        q2.pop(); //removes the front element.
    }
    cout << "size of q2 -> " << q2.size() << endl;

    return 0;
}