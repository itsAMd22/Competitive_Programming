#include<bits/stdc++.h>
using namespace std;


void builtin(int sz, int arf[]){
    sort(arf,arf+sz);
    for(int i = 0;i<sz;i++)  cout << arf[i] <<  " ";
}

void BubbleSort(int sz, int arf[]){
    //Orders adjacent element.
    for(int i=0;i<sz-1;i++){
        for(int j=0;j<sz-i-1;j++){
            if(arf[j] > arf[j+1]) swap(arf[j],arf[j+1]);
            // for(int i = 0;i<sz;i++)  cout << arf[i] <<  " ";
        }
        // cout << endl;
    }
    for(int i = 0;i<sz;i++)  cout << arf[i] <<  " ";
}

void SelectionSort(int sz, int arf[]){
    //Selects the smallest element in the unsorted array and places it in the correct position.
    for(int i=0;i<sz-1;i++){
        for(int j=i;j<sz;j++){
            if(arf[i] > arf[j]) swap(arf[i],arf[j]);
            // for(int i = 0;i<sz;i++)  cout << arf[i] <<  " ";
        }
        //cout << endl;
    }
    for(int i = 0;i<sz;i++)  cout << arf[i] <<  " ";
}


void InsertionSort(int sz, int arf[]){
    //Insertions sort : Selects an element, places it in its right position.
    for(int i=1;i<sz;i++){
        int cur = arf[i], prev = i-1;
        //cout << "cur ->" << cur << endl;
        while(prev >= 0 && cur < arf[prev]){
            arf[prev+1] = arf[prev];
            --prev;
            // cout << "prev ->" << ar[j] << endl;
            // for(int i = 0;i<sz;i++)  cout << arf[i] <<  " ";
        }
        arf[prev+1] = cur;
        // for(int i = 0;i<sz;i++)  cout << arf[i] <<  " ";
    }
    for(int i = 0;i<sz;i++)  cout << arf[i] <<  " ";
}

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);
    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int n;  cin >> n;
    int ar[n];
    for(auto &e : ar)   cin >> e;


    //using built_in function.
    builtin(n, ar);

    //Bubble sort : 
    BubbleSort(n,ar);

    //Selection sort : 
    SelectionSort(n,ar);

    //Insertion sort : 
    InsertionSort(n,ar);


    return 0;
}