#include<bits/stdc++.h>
using namespace std;

void solve(){
    double a,b,c;  cin >> a >> b >> c;
    double D = b*b-4*a*c;
    if(D < 0)   cout << "No roots";
    else if(D == 0)  cout << "One root: " << (-b) / (2*a);
    else{
        cout << "Two roots: ";
        //real roots can be rational instead 
        double r1 = (-1 * b + sqrt(D)) / (2 * a), r2 = (-1 * b - sqrt(D)) / (2 * a);
        if(r1 > r2) swap(r1,r2);
        cout << r1 <<  " " << r2;
    }
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    int t=1;    //cin >> t;
    while(t--)  solve();
    return 0;
}