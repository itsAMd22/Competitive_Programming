#include<bits/stdc++.h>
using namespace std;

const int N = 1e3+5;
int a[2 * N];

struct Deque{
    int start = N, end = N-1;
    
    void push_back(int e){
        a[++end] = e;
    }

    void push_front(int e){
        a[--start] = e;
    }

    void pop_back(){
        if(start > end){
            cout << "Deque is empty!\n";
            return;
        }else   end--;
    }

    void pop_front(){
        if(start > end){
            cout << "Deque is empty!\n";
            return;
        }else   start++;
    }



    int front(){
        if(start > end){
            cout << "Deque is empty!\n";
            return 0;
        }else   return a[start];
    }

    int back(){
        if(start > end){
            cout << "Deque is empty!\n";
            return 0;
        }else   return a[end];
    }


    int size(){
        return end - start + 1;
    }

    bool empty(){
        return start > end;
    }

};

int main(){
    Deque dq;
    // deque<int> dq;
    dq.push_front(10);
    dq.push_front(20);
    dq.push_back(30);
    dq.push_back(40);
    cout << dq.front() << '\n';   // Output: 20
    cout << dq.back() << '\n';    // Output: 40
    dq.pop_front();
    cout << dq.front() << '\n';   // Output: 10
    cout << dq.back() << '\n';    // Output: 40
    dq.pop_back();
    cout << dq.front() << '\n';   // Output: 10
    cout << dq.back() << '\n';    // Output: 30
    dq.pop_front();
    cout << dq.front() << '\n';   // Output: 30
    dq.pop_back();
    cout << dq.front() << '\n';   
    cout << dq.back() << '\n';    
    dq.pop_front();               
    dq.pop_back();                
    return 0;
}
