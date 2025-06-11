#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<string,int>p1, p2, p3({"arif",22}), p4 = {"arif", 22};
    p1 = make_pair("arif",22);
    p2 = {"arif", 22};

    cout << "p1 -> " << p1.first << " " << p1.second << endl;

    auto [name, age] = p2;
    cout << "p2 -> " << name << " " <<  age << endl;


    // tie(x, y) = p3;
    // cout << x << " " <<  y << endl;


    pair<string, pair<int, int>>info;
    info = make_pair("arif", make_pair(22, 60011034));
    //info = {"arif", {22,60011034}};
    cout << info.first << endl;
    cout << info.second.first << " " << info.second.second << endl;
    //using get
    cout << get<0>(info) << endl;
    cout << get<0>(get<1>(info)) << " " << get<1>(get<1>(info)) << endl;

    return 0;
}
