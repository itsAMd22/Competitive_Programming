#include<bits/stdc++.h>
using namespace std;


//Space complexity = max depth of a node * SC of each node
//Time Somplexity = no. of nodes in the recursion tree * TC of each node.

int counter = 0;
void callme(){
    counter++;
    //callme(); //will generate a segmentation fault.
}

int sum = 0;
int sum_till_n(int n){
    if(n == 0 || n == 1)  return n;

    sum = sum_till_n(n-1) + n;
    return sum;

    // return sum_till_n(n-1) + n;
}

int fib = 0;
int fibonacci(int f){
    if(f == 0 || f == 1)  return f;

    fib = fibonacci(f-1) + fibonacci(f-2);
    return fib;

    //return fibonacci(f-1) + fibonacci(f-2);
}

long long fact = 1;
long long factorial(long long n){
    if(n == 0 || n == 1)  return 1;
    return factorial(n-1) * n;
}

int operation = 0;
int pow_of_2(int n){
    operation++;
    if(n == 0)  return 1; 
    // return pow_of_2(n-1)*2;
    return pow_of_2(n-1) + pow_of_2(n-1);
}

//memorisation can be done in codes above as well.
//TC : O(2^n) -->> O(n) insane optimization!!!
//SC : Remains the same.

int memo_operation = 1;
const int N = 100;
vector<long long> memo(N, -1);

int pow_of_2_memo(int n){
    
    memo_operation++;
    //if found, use it.
    if(memo[n] != -1)   return memo[n];

    //base case
    if(n == 0)  return 1; 
    
    //if not found, make a call, and save the result for later use.
    memo[n] = pow_of_2_memo(n-1) + pow_of_2_memo(n-1);
    return memo[n];
}


//Generate all subsequence.
int size, a[22], target_sum, ct = 0;
bool is_taken[22]; //initially all are false.

void gen_subseq(int pos, int cur_sum){
    
    //base
    if(pos > size){
        for(int i=1;i<=size;i++){
            if(is_taken[i])  cout <<  a[i] << " ";
        }
        cout << endl;
        if(cur_sum == target_sum){
            cout << "taget matched\n";
            ct++;
        }
        return;
    }

    is_taken[pos] = false; //dont take
    gen_subseq(pos + 1, cur_sum);

    is_taken[pos] = true; //take
    gen_subseq(pos + 1, cur_sum + a[pos]);

}





int main(){

    ios_base::sync_with_stdio(0), cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    callme();
    cout << "1st call, counter -> " << counter << endl;
    callme();
    cout << "2st call, counter -> " << counter << endl;

    cout << endl;

    cout << "sum till 0 = " << sum_till_n(0) << endl;
    cout << "sum till 1 = " << sum_till_n(1) << endl;
    cout << "sum till 5 = " << sum_till_n(5) << endl;
    cout << "sum till 15 = " << sum_till_n(15) << endl;
    cout << "sum till 20 = " << sum_till_n(20) << endl;

    cout << endl;

    //Calculating fibonaccis
    int fib_count = 7;  
    //cin >> fib_count;
    for(int i=0;i<=fib_count;i++){
        cout << i+1 << "th fibonacci -> " << fibonacci(i) << endl;
    }

    cout << endl;

    //Calculating factorial.
    cout << "factorial of 0" << " -> " << factorial(0) << endl;
    cout << "factorial of 1" << " -> " << factorial(1) << endl;
    cout << "factorial of 5" << " -> " << factorial(5) << endl;
    cout << "factorial of 11" << " -> " << factorial(11) << endl;
    cout << "factorial of 20" << " -> " << factorial(20) << endl;

    cout << endl;

    cout << "2^0 = " << pow_of_2(0) << endl;
    cout << "no. of operation = " << operation << endl;
    operation = 0;

    cout << "After memo ->\n";

    cout << "2^0 = " << pow_of_2_memo(0) << endl;
    cout << "no. of operation = " << memo_operation << endl;
    memo_operation = 0;

    cout << endl;

    cout << "2^1 = " << pow_of_2(1) << endl;
    cout << "no. of operation = " << operation << endl;
    operation = 0;

    cout << "After memo ->\n";
    
    cout << "2^1 = " << pow_of_2_memo(1) << endl;
    cout << "no. of operation = " << memo_operation << endl;
    memo_operation = 0;

    cout << endl;

    cout << "2^2 = " << pow_of_2(2) << endl;
    cout << "no. of operation = " << operation << endl;
    operation = 0;

    cout << "After memo ->\n";
    
    cout << "2^2 = " << pow_of_2_memo(2) << endl;
    cout << "no. of operation = " << memo_operation << endl;
    memo_operation = 0;

    cout << endl;

    cout << "2^30 = " << pow_of_2(30) << endl;
    cout << "no. of operation = " << operation << endl;
    operation = 0;

    cout << "After memo ->\n";
    
    cout << "2^30 = " << pow_of_2_memo(30) << endl;
    cout << "no. of operation = " << memo_operation << endl;
    memo_operation = 0;

    cout << endl;

    //subset generation
    cout << "All subsequences : \n";
    cin >> size >> target_sum;;
    for(int i=1;i<=size;i++){
        cin >> a[i];
    }
    gen_subseq(1,0);
    cout << "Subsequence with " << target_sum << " -> " << ct << endl;   


    return 0;
}