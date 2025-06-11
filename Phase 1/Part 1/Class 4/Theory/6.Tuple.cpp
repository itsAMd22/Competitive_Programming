#include<bits/stdc++.h>
using namespace std;

//tuples are sort of like expanded pairs, pairs can work with 
//2 data,while tuples can work with much more than that.

int main(){
    tuple<string,int>p1, p2, p3({"arif",22}), p4 = {"arif", 22};
    p1 = make_tuple("arif",22);
    p2 = {"arif", 22};

    //this won't work
    //cout << "p1 -> " << p1.first << " " << p1.second << endl;

    //C++ 17 or above
    auto [name, age] = p2;
    cout << "p2 -> " << name << " " <<  age << endl;


    // tie(x, y) = p3;
    // cout << x << " " <<  y << endl;


    tuple<string, tuple<int, int>>info;
    info = make_tuple("arif", make_tuple(22, 60011034));
    //info = {"arif", {22,60011034}};
    //using get<index>(container_name)
    cout << get<0>(info) << endl;
    cout << get<0>(get<1>(info)) << " " << get<1>(get<1>(info)) << endl;

    auto[name1, nums] = info;
    auto[age1, pnum] = nums;

    cout << name1 << endl;
    cout << age1 << " " << pnum << endl;

    //the above nested tuple can be expressed within one single tuple
    tuple<string, int, int>info2 = {"arif" , 22 , 60011034};
    auto[name2,age2,pnum2] = info2;
    cout << name2 << endl;
    cout << age2 << " " << pnum2 << endl;

    return 0;
}
