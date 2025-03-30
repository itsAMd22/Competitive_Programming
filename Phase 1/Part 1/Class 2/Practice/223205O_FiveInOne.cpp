#include<bits/stdc++.h>
using namespace std;

int ar[100], n;

int give_max(){
    int mx = INT_MIN;
    for(int i=0;i<n;++i)    mx = max(mx, ar[i]);
    return mx;
}

int give_min(){
    int mn = INT_MAX;
    for(int i=0;i<n;++i)    mn = min(mn, ar[i]);
    return mn;
}

int prime_ct(){
    int ans = 0;
    for(int i=0;i<n;++i){
        bool isprime = true;
        if(ar[i] == 1)   continue;
        for(int j=2;j*j<=ar[i];++j){
            if(ar[i] % j == 0){
                isprime = false;
                break;
            }
        }
        if(isprime) ++ans;
    }
    return ans;
}

int pal_ct(){
    int ans = 0;
    for(int i=0;i<n;++i){
        bool ispal = true;
        int digit_ct = floor(log10(ar[i]))+1;
        for(int j=0;j<digit_ct/2;++j){
            if(ar[j] != ar[n-1-j]){
                ispal = false;
                break;
            }
        }
        if(ispal) ++ans;
    }
    return ans;
}

int div_ct(){
    int ans, pr = INT_MIN, cur;
    for(int i=0;i<n;++i){
        cur = 0;
        for(int j=1;j*j<=ar[i];++j){
            if(ar[i] % j == 0){
                (ar[i] / j) != j ? cur += 2 : ++cur;
            }
        }
        //cout << ar[i] <<  " " << cur <<  " " << pr << endl;
        if(cur >= pr)    pr = cur, ans = ar[i];
    }
    return ans;
}


int main(){
    cin >> n;
    for(int i=0;i<n;++i)    cin >> ar[i];
    sort(ar, ar+n);
    cout << "The maximum number : " << give_max() << endl;
    cout << "The minimum number : " << give_min() << endl;
    cout << "The number of prime numbers : " << prime_ct() << endl;
    cout << "The number of palindrome numbers : " << pal_ct() << endl;
    cout << "The number that has the maximum number of divisors : " << div_ct();

    return  0;
}