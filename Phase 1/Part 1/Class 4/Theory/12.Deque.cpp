#include<bits/stdc++.h>
using namespace std;

//Double Ended Queue
//Just like vectors, with the added feature of insertion and deletion at the beginning.


//VECTORS ARE STILL MORE MEMORY EFFICIENT THAN DEQUES, hence its wise to use vectors 
//if insertion and deletion at the front is not a concern.

int main(){
    deque<int>dq1;
    dq1 = {5,3,2,4,1};
    
    for(auto e : dq1)   cout << e << " " ;  cout << endl;
    cout << "front -> " << dq1.front() << endl;
    cout << "back -> " << dq1.back() << endl;

    cout << endl;

    dq1.push_back(9);
    dq1.push_front(11);
    for(auto e : dq1)   cout << e << " " ;  cout << endl;
    
    cout << endl;

    dq1.pop_back();
    dq1.pop_front();
    //both are really fast, O(1)

    for(auto e : dq1)   cout << e << " " ;  cout << endl;

    cout << endl;

    sort(dq1.begin(), dq1.end());
    for(auto e : dq1)   cout << e << " " ;  cout << endl;

    cout << endl;

    reverse(dq1.begin(), dq1.end());
    for(auto e : dq1)   cout << e << " " ;  cout << endl;

    cout << endl;

    //clear(), empty() works.
    //most functions supported by vectors are supported by deque too.

    return 0;
}