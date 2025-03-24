#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x,y;    cin >> n >> m;
    char a[n+1][m+1];
    
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j)    cin >> a[i][j];
    }

    cin >> x >> y;
    map<char,int>freq;
    
    
    //considering out_of_bound_neighbors are x.
    //s = south, nr = north, w = west, e = east
    //ne = north-east, se = south-east, nw = north-west, sw = south-west

    char s, nr, w, e, sw, nw, se, ne;
    
    s = (x+1 <= n ? a[x+1][y] : 'x');  freq[s]++;
    nr = (x-1 > 0 ? a[x-1][y] : 'x');   freq[nr]++;
    w = (y-1 > 0 ? a[x][y-1] : 'x');   freq[w]++;
    e = (y+1 <= m ? a[x][y+1] : 'x');  freq[e]++;
    sw = (x+1 <= n && y-1 > 0 ? a[x+1][y-1] : 'x');    freq[sw]++;
    nw = (x-1 > 0 && y-1 > 0 ? a[x-1][y-1] : 'x');     freq[nw]++;
    se = (x+1 <= n && y+1 <= m ? a[x+1][y+1] : 'x');   freq[se]++;
    ne = (x-1 > 0 && y+1 <= m? a[x-1][y+1] : 'x');     freq[ne]++;


    if(freq['x'] == 8)    cout << "yes";
    else    cout << "no";

    // if(s == 'x' && nr == 'x' && w == 'x' && e == 'x' && sw == 'x' && nw == 'x' && se == 'x' && ne == 'x'){
    //     cout << "yes";
    // }else{
    //     cout << "no";
    // }    

    return 0;
}