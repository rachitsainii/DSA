#include<bits/stdc++.h>
using namespace std;

int nthFibonacci(int n){
    if (n == 1){
        return 1;
    } else if (n == 0){
        return 0;
    } else {
       return  nthFibonacci(n - 1) + nthFibonacci(n - 2);
        
    }
}


int main(){

    int n ;

    cin >> n;

    int ans = nthFibonacci(n);

    cout << ans;

    return 0;
}