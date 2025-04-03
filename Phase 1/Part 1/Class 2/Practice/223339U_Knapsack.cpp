#include<bits/stdc++.h>
#define ll long long
using namespace std;


int N, W, mx_value = INT_MIN, w[22], v[22];
//bool istaken[22];

void ss(int pos, int weight, int value){
    if(pos == N){
        //for(int i=0;i<N;++i){
        //    if(istaken[i])    cout << w[i] << " ";
        //}
        //cout <<  endl;
        if(weight <= W) mx_value = max(mx_value,value);
        return;
    }

    //istaken[pos] = false;
    ss(pos+1, weight, value);

    //istaken[pos] = true;
    ss(pos+1, weight+w[pos], value+v[pos]);
}

int main(){
    cin >> N >> W;
    for(int i=0;i<N;++i)    cin >> w[i] >> v[i];
    ss(0,0,0);
    cout << mx_value;
    return 0;
}
