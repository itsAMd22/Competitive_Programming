#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+6;
int a[N];

struct Queue{
    int start = 0, end = 0;
    
    void push(int e){
        a[end] = e;
        end++;
    }

    void pop(){
        if(start > end){
            cout << "Queue is empty\n";
            return;
        }else   start++;
    }

    int front(){
        if(start > end){
            cout << "Queue is empty\n";
            return -11111;
        }else   return a[start];
    }

    int back(){
        if(start > end){
            cout << "Queue is empty\n";
            return -11111;
        }else   return a[end-1];
    }

    int size(){
        return end - start + 1;
    }

    bool empty(){
        return start > end;
    }

};

int main(){
    // queue<int> q;
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    cout << q.front() << '\n'; // Output: 10
    cout << q.back() << '\n';  // Output: 30
    q.pop();
    cout << q.front() << '\n'; // Output: 20
    cout << q.back() << '\n';  // Output: 30
    q.pop();
    cout << q.front() << '\n'; // Output: 30
    cout << q.back() << '\n';  // Output: 30
    q.pop();
    cout << q.front() << '\n'; // Output: The queue is empty! Can't get the front element!
    cout << q.back() << '\n';  // Output: The queue is empty! Can't get the back element!
    q.pop();                   // Output: The queue is empty! Can't pop!

    return 0;
}