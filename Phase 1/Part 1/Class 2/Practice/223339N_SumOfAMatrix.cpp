#include<bits/stdc++.h>
using namespace std;

int mat1[100][100], mat2[100][100], mat[100][100], r ,c;

void sum(int i, int j){
    if(i == r)  return;

    if(j == c)  sum(i+1, 0);
    else{
        mat[i][j] = mat1[i][j] + mat2[i][j];
        sum(i, j+1);
    }   
}

int main(){
    cin >> r >> c;

    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin >> mat1[i][j];
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin >> mat2[i][j];
        }
    }

    sum(0,0);

    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}