#include<bits/stdc++.h>
using namespace std;

//stores unique element in sorted order.
//no duplicate elements.
//bidirectional iterator, not random access iterator.
//iterator arithmatics wont work, only incrementing or decrementing by one place.


void print(set<int>fs){
    cout << "set = ";
    for(set<int>::iterator it = fs.begin(); it != fs.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    //declaration
    set<int>s1, s2({1,2,3,3,3,5,6,7});

    s1.insert(41);
    s1.insert(1);
    s1.insert(4);
    s1.insert(410);

    print(s1);
    //range based loop, structured binding would also work fine.

    //erasing a particular element -> set_name.erase(value) / set_name.erase(iterator_to_the_value)
    s2.erase(6);
    print(s2);

    set<int>::iterator it = s2.find(7);
    s2.erase(it);
    print(s2);


    if(s2.find(30) == s2.end()) cout << "30 not found in s2\n";
    else   cout << "30 found in s2!\n";

    //empty -> O(1), clear -> O(n), count(x), lower_bound(x), upper_bound(x) -> O(log n).
    auto it2 = s2.lower_bound(4), it3 = s2.upper_bound(3);
    cout << *it2 << endl;
    cout << *it3 << endl;

    //unordered set is same as ordered set, except the fact that it doesnt maintain any particular order.
    //multiset maintains sorted order, but not uniqueness.
    //in multiset if an element is erased, all its occurances are erased.
    //however if iterator is used, then only one occurance is erased.
    //erasing elements that are not present by passing end() will throw an error.

    s1.erase(s1.find(99)); //erasing non-existent element in a set is valid.
    multiset<int>ms;
    ms.insert(41);
    ms.insert(1);
    ms.insert(4);
    ms.insert(410);
    ms.erase(ms.find(99)); //error
    
    //count() in multiset -> O(log n + k)

    return 0;
}