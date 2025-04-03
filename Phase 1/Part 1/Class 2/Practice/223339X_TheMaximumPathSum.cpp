#include<bits/stdc++.h>
using namespace std;

int mat[10][10], mx = INT_MIN, N, M;

void sum(int i, int j, int cur){
    if(i == N-1 && j == M-1){
        mx = max(mx, cur);
        return;
    }


    if(i+1 < N) sum(i+1,j,cur + mat[i+1][j]);
    if(j+1 < M) sum(i,j+1,cur + mat[i][j+1]);
}

int main(){
    cin >> N >> M;
    for(int i=0;i<N;++i){
        for(int j=0;j<M;++j){
            cin >> mat[i][j];
        }
    }
    sum(0,0,mat[0][0]);
    cout << mx;
    return 0;
}
