#include<bits/stdc++.h>
using namespace std;

int main(){
    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n, ct = 0;  cin >> n;
    int num[n];
    long long sum, goal;    cin >> goal;

    for(int i=0;i<n;i++)    cin >> num[i];

    for(int mask = 0;mask < (1 << n);mask++){
        sum = 0;
        for(int i=0;i<n;i++){
            if((mask >> i) & 1) sum += num[i];
        }
        if(sum == goal){
            cout << "Found subset : ";
            for(int i=0;i<n;i++){
                if((mask >> i) & 1) cout << num[i] <<  " ";
            }
            cout << endl;
            ct++;
        }
    }
    cout << "Subset count = " << ct << endl;
    
    return 0;
}