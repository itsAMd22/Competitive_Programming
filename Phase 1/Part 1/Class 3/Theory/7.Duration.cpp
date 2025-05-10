#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0), cin.tie(0);

int main(){
    Alhamdulillah
    clock_t start, end;
    start = clock();
    int n = 500000000;
    long long sum = 0;
    for(int i=1;i<=n;i++){
        sum += 1LL * i * (n - i + 1);
    }
    end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC; //tickes per second
    cout << "Time taken by the program = " << fixed << setprecision(5) << time_taken << "sec" << endl;
    return 0;
}