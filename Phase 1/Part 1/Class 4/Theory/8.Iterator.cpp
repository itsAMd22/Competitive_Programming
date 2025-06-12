#include<bits/stdc++.h>
using namespace std;

/*
Iterators act as generalized pointers and allow you to iterate over the 
elements of a container in a uniform and generic way. Dereference operator (*)
is used to print the value at the meomory location pointed by the iterator.

->Invalidation : Iterators can be invalidated when the underlying container is modified.
                 For example, if you add or remove elements from a vector, all iterators 
                 pointing to elements in the vector are invalidated. This means that you 
                 can no longer use them to access or modify the elements of the vector.
*/




int main(){
    //declaration : container_type::iterator iterator_name;

    vector<int>v(10,23);
    vector<int>::iterator it = v.begin();

    //v.begin() -> iterator to the first element.
    //v.end() -> iterator the the empty spot after the last element.
    //--v.end() -> iterator to the last element.
    //rbegiin() -> iterator to the last element.
    //rend() -> iterator the the empty spot before the first element.

    cout << (*it) << endl;

    v[1] = 21;
    ++it;
    cout << (*it) << endl;

    v.assign(5,12);
    v[3] = 10;
    it += 2;
    cout << (*it) << endl;

    //++,--,+=,-=,==,!= works.
    //substarcting two iterators gives the distance between them.
    //auto keyword can be used to deduce the data type of the iterator.

    vector<int>v1 = {1,2,3,4,5};
    for(vector<int>::iterator it = v1.begin();it != v1.end(); ++it)  cout << *(it) << " ";   cout << endl << endl;
    //for(auto it = v1.begin(); it != v1.end(); ++it)   cout << *(it) << " ";   cout << endll << endl;

    auto it1 = v1.begin();
    cout << (*it1) << endl;
    it1 = next(it1); 
    cout << (*it1) << endl;
    it1 = next(it1); 
    cout << (*it1) << endl;
    it1 = next(it1); 
    cout << (*it1) << endl;
    it1 = next(it1); 
    cout << (*it1) << endl;
    cout << (*it1) << endl;
    it1 = prev(it1); 
    cout << (*it1) << endl;
    it1 = prev(it1); 
    cout << (*it1) << endl;
    it1 = prev(it1); 
    cout << (*it1) << endl;
    it1 = prev(it1); 
    cout << (*it1) << endl << endl;



    return 0;
}