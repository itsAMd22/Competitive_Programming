#include <bits/stdc++.h>
using namespace std;

void solve(){
    string n;  cin >> n;
    char a[100005];
    int sz = (int)n.size(), ind = -1;
    for(int i=0;i<sz;i++){
        a[i] = n[i];
        if(a[i] == '0' && ind == -1) ind = i;
    }
    //cout << ind << endl;

    for(int i=0;i<(ind != -1 ? sz : sz-1);++i){
        //if(i == 0 && a[i] == '0') while(a[i] == '0' && i < sz)    ++i;
        if(i == ind)    continue;
        else    cout << a[i];
    }  
    cout << endl;
}

int main() {
	int t=1;  //cin >> t;
	while(t--)  solve();
	return 0;
}
