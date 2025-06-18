#include<bits/stdc++.h>
using namespace std;

struct Stack {
    vector<int> vst;

    void push(int e){
        vst.push_back(e);
    }

    void pop(){
        if(vst.empty()) cout << "stack is empty!\n";
        else    vst.pop_back();
    }

    int top(){
        if(vst.empty()){
            cout << "stack is empty!\n";
            return -1;
        }else   return vst.back();
    }
};

int main(){
    //stack<int> st;
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "top -> " << st.top() << endl; //30
    st.pop();
    cout << "top -> " << st.top() << endl; //20
    st.pop();
    cout << "top -> " << st.top() << endl; //10
    st.pop();


    return 0;
}