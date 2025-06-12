#include<bits/stdc++.h>
using namespace std;

int main(){
    //declation
    vector<int>v1;          //declaring a vector without size, indexing won't work before initializing.
    vector<int>v2(10);      //declaring a 10 size vector, indexing will work in both reading and writing elements.
    vector<int>v3(10,12);   //declaring a 10 size vectoe, all indexed initialized to 12

    v1.push_back(18); //O(1)
    //emplace_back() is similar but better in some cases.
    v1.push_back(12);
    v1.push_back(8);
    v1.push_back(8);
    v1.pop_back();

    cout << "size of v1 -> " << v1.size() << endl; //O(1)
    for(int i=0;i<(int)v1.size();++i) cout << v1[i] << " ";   cout << endl << endl;

    v2[0] = 90;
    v2[1] = 1;

    cout << "size of v2 -> " << v2.size() << endl; //O(1)
    for(int i=0;i<(int)v2.size();++i) cout << v2[i] << " ";   cout << endl << endl;

    cout << "size of v3 -> " << v3.size() << endl; //O(1)
    for(int i=0;i<(int)v3.size();++i) cout << v3[i] << " ";   cout << endl << endl;

    cout << "v3 state : " << v3.empty() << endl; //O(1)
    v3.clear(); //O(n)
    cout << "v3 state : " << v3.empty() << endl;

    cout << "size of v3 -> " << v3.size() << endl; //O(1)
    for(int i=0;i<(int)v3.size();++i) cout << v3[i] << " ";   cout << endl << endl;

    //v.front(), v.back() respectively gets the first and last element.
    //v.at() is used to get an element in a particular index, just like typical indexing.
    //v.resize(size_value) changes the size of the vector to a specific size.
    //v.assign(size, value) ignores the previous state of the vector, assigns a specific value.

    v3.assign(5,10);
    cout << "size of v3 -> " << v3.size() << endl; //O(1)
    for(int i=0;i<(int)v3.size();++i) cout << v3[i] << " ";   cout << endl << endl;

    v3.assign(14,-1);
    cout << "size of v3 -> " << v3.size() << endl; //O(1)
    for(int i=0;i<(int)v3.size();++i) cout << v3[i] << " ";   cout << endl << endl;


    vector<int>v4 = {1,2,3,4,5};
    for(vector<int>::iterator it = v4.begin();it != v4.end(); ++it)  cout << *(it) << " ";   cout << endl << endl;
    //for(auto it = v4.begin(); it != v4.end(); ++it)   cout << *(it) << " ";   cout << endll << endl;
    //for(int e : v4)   cout << e << " ";   cout << endl;

    //Almost all containers use exclusive ranges for iterators, meaning that the iterator pointing to the last 
    //element is not included in the range. Exp : v.begin() points to the first element and v.end() points to
    //the element after the last element, so the range its mainly working upon is : [v.begin(),v.end()).

    reverse(v4.begin(),v4.end());
    for(int e : v4)   cout << e << " ";   cout << endl;

    sort(v4.begin()+1 , v4.end()-1); //sorts the range [v4.begin()+1 , v4.end()-1)
    for(int e : v4)   cout << e << " ";   cout << endl;

    //erase(iterator) -> erases the element at a particular iterator.
    //erase(start_it, end_it) -> erases elements within a range
    //v.clear() clears the whole container.
    //swap(vec1, vec2) or vec1.swap(vec2) swaps the content between two iterators.
    //find(start_it, end_it, value) returns an iterator to the first occurence of value.
    //count(start_it, end_it, value) returns the count of occurences of value.
    //min_element() and max_element -> iterator to the min and max element , can be dereferenced.
    //v.insert(position, value) -> inserts value at a particular location.



    return 0;
}