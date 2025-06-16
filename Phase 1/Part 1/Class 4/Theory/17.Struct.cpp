#include<bits/stdc++.h>
using namespace std;


//structure is a user-defined data type in c/c++. It creates a data type that 
//can be used to froup items of possibly different types into a single type.


struct Address{
    string city;
    int house_num, zip_code;

    void print_obj(){
        cout << "City " << city << ", House number : " << house_num << ", Zip Code : " << zip_code << '\n';
    }

    Address(){ //default constructor
        city = "N/A";
        house_num = -1;
        zip_code = -1;
    }

    Address(string _city, int _house_num, int _zip_code){ //paramaterised constructor
        city = _city;
        house_num = _house_num;
        zip_code = _zip_code;
    }
};

struct MyStruct1{
    string name;
    int age, roll;
    vector<int>marks;
    Address adrs;
}a[5];

int main(){
    MyStruct1 s1;
    s1.name = "Arif";
    s1.age = 22;
    s1.roll = 101;
    s1.marks = {45,55,67,98,43};
    s1.adrs.city = "Dhaka";
    s1.adrs.house_num = 101;
    s1.adrs.zip_code = 3000;

    cout << "Student name : " << s1.name << endl;
    cout << "Age : " << s1.age << endl;
    cout << "Roll : " << s1.roll << endl;
    cout << "Marks : ";
    for(auto e : s1.marks)  cout << e << " ";   cout << endl;
    s1.adrs.print_obj();


    s1.adrs.city = "Sylhet";
    s1.adrs.house_num = 70;
    s1.adrs.zip_code = 1230;

    a[1] = {"Sakib", 22, 1031, {98,99,100,88,91}, {"Flower_bari", 99, 3162}};
    a[0] = {"mahi", 23, 1073, {98,99,100,88,91}};
    a[0].adrs.print_obj();

    a[0].adrs = Address("Kulaura", 10, 3210);
    a[0].adrs.print_obj();

    return 0;
}