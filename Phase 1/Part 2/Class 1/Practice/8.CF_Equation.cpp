#include<bits/stdc++.h>
using namespace std;

double f(double x){
    return (x * x) + sqrt(x);
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    double c;   cin >> c;
    double lo = 1.0, hi = c, mid, ans;
    int ct = 0;
    while(true){
        //condition works, because lo and hi can be considered swapped when lo > hi reinstating lo <= hi
        //target is to get a number matching our requirements, at any cost.
        ct++;
        mid = (lo + hi)/2.0;
        // cout << mid << " -> " << f(mid) << endl;
        if(abs(c - f(mid)) <= 1e-6){
            ans = mid;
            break;
        }   
        
        if(c > f(mid))   lo = mid + 1;
        else    hi = mid - 1;

        // cout << lo << " <-> " << hi << endl << endl;
    }
    cout << fixed << setprecision(12) << ans << endl;
    // cout << ct;
    return 0;
}