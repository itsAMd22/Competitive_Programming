#include<bits/stdc++.h>
#define ll long long
using namespace std;

int a[100005];
bool ans = true;

void check_pal(int i, int j){

    if(i >= j)  return;
    //checking whether i reached the mid point or not.

    ans &= (a[i] == a[j]);
    if(!ans)    return;

    //if true, we continue the checking further.
    check_pal(++i,--j);
}

int main(){
    int n;  cin >> n;
    for(int i=0;i<n;i++)    cin >> a[i];
    check_pal(0, n-1);
    cout << (ans ? "YES" : "NO");
    return 0;
}
