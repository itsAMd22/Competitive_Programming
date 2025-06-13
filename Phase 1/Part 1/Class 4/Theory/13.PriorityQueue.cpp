#include<bits/stdc++.h>
using namespace std;

//just like queue, but push/pop happens for the element with the most priority based on their values.
//max value -> max priority
//no front(), top() does the job
//no iterators, function algos like sort, reverse, indexing.
//implemented as max heap, a binary tree, where the elements with highest value comes with the highest priority.

int main(){ 
    //declaration
    priority_queue<int>q1;
    //create an empty queue, then push elements
    q1.push(10);
    q1.push(1);
    q1.push(9);
    q1.push(2);


    cout << "top -> " << q1.top() << endl; //10
    


    cout << "size of q1 -> " << q1.size() << endl;
    q1.pop();
    cout << "size of q1 -> " << q1.size() << endl;

    //empty(), swap() works as well.
    //no iterators, functions(sort, reverse), indexing.
    //only top() to access elements.

    //reverting back to initial queue.
    q1.push(10);

    while(!q1.empty()){
        cout << "top -> " << q1.top() << endl;
        q1.pop(); //removes the front element.
    }
    cout << "size of q1 -> " << q1.size() << endl;

    return 0;
}