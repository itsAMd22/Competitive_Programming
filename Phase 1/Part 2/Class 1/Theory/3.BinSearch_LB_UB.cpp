#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    sort(v.begin(), v.end());

    // lowerbound(start_it, end_it, value) gives an iterator to the first element >= value
    // Upperbound(start_it, end_it, value) gives an iterator to the first element > value
    // upperbound(start_it, end_it, value) = lowerbound(start_it, end_it, value + 1);
    // cnt of occurrence of x in an array = ub - lb
    // lowest distance to an element from the start = lb - start_it

    //binary_search(start_it, end_it, value) return whether value exists in the searching interval.

    int x = 19;
    if(binary_search(v.begin(), v.end(), x))    cout << x <<  " is found" << endl;
    else    cout << x << " is not found" << endl;
    
    vector<int>::iterator it1 = lower_bound(v.begin(), v.end(), x); // <=x
    cout << it1 - v.begin() << endl;

    vector<int>::iterator it2 = upper_bound(v.begin(), v.end(), x); // <x
    cout << it2 - v.begin() << endl;

    int count_of_x = it2 - it1;
    cout << "Count of " << x << " = " << count_of_x << endl;

    int l = 4, r = 21;
    int count_in_range_l_r = upper_bound(v.begin(), v.end(), r) - lower_bound(v.begin(), v.end(), l);
    cout << "Numbers in range [" << l << "," << r << "] = " << count_in_range_l_r << endl;

    return 0;
}