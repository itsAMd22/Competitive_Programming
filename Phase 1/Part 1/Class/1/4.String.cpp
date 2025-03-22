#include <bits/stdc++.h>
using namespace std;

int main(){
    //using char array
    char arr[] = {'a','r','i','f','\0'};
    cout << arr << endl;

    int n;  cin >> n;
    char name[n];   cin >> name; //can take in string format, till first space.
    cout << name << endl;
    
    //to take a line of input including space.
    char sentence[100];
    cin.ignore(); // this line ignores the first character which is in this case any leftover '\n' from previous input handlings.
    cin.getline(sentence,100);
    cout << sentence << endl;
    
    return 0;
}