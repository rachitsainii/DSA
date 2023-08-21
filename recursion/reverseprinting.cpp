#include<bits/stdc++.h>
using namespace std;

void printReverse(int n){

    // Base Case
    if (n == 0){
        return ;
    }

    cout << n << '\n' ;

    // Recursive Relation
    printReverse(n-1);
}


int main(){

    int n;

    cin >> n;

    printReverse(n);

    return 0;
}