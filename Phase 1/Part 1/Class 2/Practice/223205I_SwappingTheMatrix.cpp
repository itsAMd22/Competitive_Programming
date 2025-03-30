#include<bits/stdc++.h>
using namespace std;

int mat[500][500], n, x, y;

void my_swap(){

    swap(mat[x], mat[y]);

    for(int i=1;i<=n;++i){
        swap(mat[i][x], mat[i][y]);
    }
}

void print_mat(){
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cout << mat[i][j] <<  " ";
        }
        cout << endl;
    }  
}

int main(){
    cin >> n >> x >> y;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cin >> mat[i][j];
        }
    }
    my_swap();
    print_mat();
    return 0;
}