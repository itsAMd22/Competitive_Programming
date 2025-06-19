#include<bits/stdc++.h>
using namespace std;

struct PriorityQueue{
    vector<int>v;

    void push(int e){  //O(n log n)
        v.push_back(e);
        sort(v.begin(), v.end(), greater<>());
    }

    void pop(){
        if(v.empty()){
            cout << "priority queue is empty!\n";
            return;
        }else{
            v.erase(v.begin());
        }
    }

    int top(){
        if(v.empty()){
            cout << "priority queue is empty!\n";
            return -111;
        }else{
            return v[0];
        }
    }

    int size(){
        if(v.empty()){
            cout << "priority queue is empty!\n";
            return 0;
        }else{
            return v.size();
        }
    }

    bool empty(){
        return v.empty();
    }
};

int main(){
    PriorityQueue pq;
    pq.push(10);
    pq.push(30);
    pq.push(20);
    
    cout << pq.top() << '\n'; // Output: 30
    pq.pop();
    
    cout << pq.top() << '\n'; // Output: 20
    pq.pop();
    
    cout << pq.top() << '\n'; // Output: 10
    pq.pop();
    
    cout << pq.top() << '\n'; // Output: The priority queue is empty! Can't get the top element!
    pq.pop(); // Output: The priority queue is empty! Can't pop!
    
    return 0;
}