#include<bits/stdc++.h>
using namespace std;

void O1(){
    int n, sum = 0;  cin >> n;
    for(int i=0;i<n;i++){
        sum += i;
    }
    cout << sum << endl;
    //3 vars-n,sum and i -> 12 bytes -> doesnt depend on iteration count -> O(1)
}

void On(){
    int n, sum = 0;     cin >> n;
    int a[n], b[n], c[n]; //total 3n integers
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    cout << sum << endl;
    //3n integers -> O(n)
}

void On_square(){
    int n, sum = 0;     cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }
    cout << sum << endl;
    //n*n integers -> O(n^2)
}

void On_cube(){
    int n, sum = 0;     cin >> n;
    int arr[n][n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++){
                cin >> arr[i][j][k];
                sum += arr[i][j][k];
            }
    }
    cout << sum << endl;
    //n*n*n integers -> O(n^3)
}

void O2_power_n(){
    int n, sum = 0;  cin >> n;
    int arr[1 << n];
    for(int i=0;i < (1 << n);i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cout << sum << endl;
    //(1 << n) or 2^n integers -> O(2^n)
}


int main(){
    On();
    return 0;
}