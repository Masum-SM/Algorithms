
#include<bits/stdc++.h>

using namespace std;

const int N = 50;
int fib_arr[N];

int fib(int n){
    // Base case
    if(n == 1) return 1;
    if(n==2) return 1;

    // If the current state is already solved then return the value.
    if(fib_arr[n] != -1){
        return fib_arr[n];
    }

    // Calcultate for smaller sub-problem
    int ans = fib(n-1)+fib(n-2);
    fib_arr[n] = ans;
    return ans;
}

int main(){
    int n;
    cin>>n;
    memset(fib_arr,-1,sizeof(fib_arr));
    int result = fib(n);
    cout<<result<<endl;
    return 0;
}
