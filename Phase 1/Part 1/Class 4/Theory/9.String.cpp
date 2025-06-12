#include<bits/stdc++.h>
using namespace std;

int main(){
    //C string -> null-terminated character array
    //STL-String can grow in size dynamically as new characters are inserted or existing characters are removed.

    //declaration/initialization
    //string s1;
    //string s2(size, character);
    //string s3 = "string_content";
    //accessing element -> string_name[index]

    string s = "hellollo", p = "hellollo";
    string sub1 = s.substr(2,6), sub2 = s.substr(6);  
    //substr(starting_index, lenght_substring)
    //if the second parameter is not specified, its defaulted as the end of the string.
    cout << sub1 << " " << sub2 << endl;

    int pos1 = s.find('l'), pos2 = s.find("lo");
    //rfind(char_or_string) returns the last occurence.
    cout << "l -> " << pos1 << endl;
    cout << "lo -> " << pos2 << endl;
    
    string nw = " world";
    s += nw; //O(nw.size())
    p = p + nw; //O(s.size() + nw.size())


    //s=string(c_string)
    //c_string = s_ctr(), although assignment op is not valid here.
    cout << s << endl;
    sort(s.begin(), s.end());
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}