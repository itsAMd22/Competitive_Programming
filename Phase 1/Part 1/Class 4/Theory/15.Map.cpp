#include<bits/stdc++.h>
using namespace std;



struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
      x += 0x9e3779b97f4a7c15;
      x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
      x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
      return x ^ (x >> 31);
  }

  size_t operator()(uint64_t x) const {
      static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
      return splitmix64(x + FIXED_RANDOM);
  }
};

unordered_map<long long int, int, custom_hash> mp; 

// this will work in O(n) when the key is an int or long long int

//stores data in key-value pairs.
//keys are sorted in ascending order.
//Accessing elements : map_name[key]
//keys can be of any data type that supports comparison operators.

int main(){
    map<int,string>mp = {{1,"one"} , {2, "two"} , {3, "three"}};
    mp.insert({4, "four"});

    cout << "mp[4] -> " << mp[4] <<  endl;

    mp[3] = "tthreeee";

    auto it = mp.begin();
    //auto it = mp.find(key);
    while(it != mp.end()){
        cout << (*it).first << " " << (*it).second << endl;
        ++it;
    }

    //empty(), clear(), erase(key), lower_bound(key), upper_bound(key) works.
    //Structured binding works.


    for(auto x : mp){
        cout << "{" << x.first << "," << x.second << "}\n";
    }
    for(auto [x,y] : mp){
        cout << "Current size -> " << mp.size() << endl;
        cout << "{" << x << "," << y << "}\n";
        //mp.erase(x); //modifying the map while iterating invalidates it.
    }
    mp.erase(mp.begin(), mp.end());
    cout << "Current size -> " << mp.size() << endl;
    if(mp.empty())  cout << "map is empty\n";
    else    cout << "map isn't empty\n";

    //unordered map is same as map, just that the keys are not stored in any sorted manner.
    //Accessing elements in unordered_map in O(1) but O(n) in worst case.
    //in worst case, each insert/find op can takes O(n) instead of usual O(log n) in normal map.
    //using map is safer considering all cases.
    //or the custom hash above

    
    return 0;
}
