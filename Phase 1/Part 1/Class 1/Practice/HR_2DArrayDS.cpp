#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);

    int a[6][6], sum = INT_MIN, top, mid, bot;

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++)    cin >> a[i][j];
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            top = a[i][j] + a[i][j+1] + a[i][j+2];
            mid = a[i+1][j+1];
            bot = a[i+2][j] + a[i+2][j+1] + a[i+2][j+2];
            sum = max(sum, top + mid + bot);
        }
    }
    cout << sum;
    return 0;
}