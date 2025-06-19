#include<bits/stdc++.h>
using namespace std;

struct Set{
    vector<int>v;

    void insert(int e){
        if(find_index(e) == -1){
            v.push_back(e);
            sort(v.begin(), v.end());
        }else{
            return;
        }
        
    }

    void erase(int e){
        // for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
        //     if(*it == e){
        //         v.erase(it);
        //         return;
        //     }
        // }

        if(find_index(e) != -1){
            auto it = 
            v.erase(find(v.begin(), v.end(), e));
        }else{
            return;
        }

    }

    int find_index(int e){
        auto it = find(v.begin(), v.end(), e);
        if(it == v.end()){
            return -1;
        }else return it - v.begin();
    }

    int size(){
        return v.size();
    }

    bool empty(){
        return v.empty();
    }


};

int main(){
    Set s;
    s.insert(10);
    s.insert(20);
    s.insert(30);

    cout << s.find_index(10) << '\n'; //0
    cout << s.find_index(30) << '\n'; //2
    cout << s.find_index(20) << '\n'; //1
    cout << s.find_index(40) << '\n'; //-1

    s.erase(10);

    cout << s.find_index(10) << '\n'; //-1
    cout << s.find_index(30) << '\n'; //1
    cout << s.find_index(20) << '\n'; //0
    cout << s.find_index(40) << '\n'; //-1

    s.erase(30);

    cout << s.find_index(10) << '\n'; //-1
    cout << s.find_index(30) << '\n'; //-1
    cout << s.find_index(20) << '\n'; //0
    cout << s.find_index(40) << '\n'; //-1

    s.erase(20);

    cout << s.find_index(10) << '\n'; //-1
    cout << s.find_index(30) << '\n'; //-1
    cout << s.find_index(20) << '\n'; //-1
    cout << s.find_index(40) << '\n'; //-1

    return 0;
}