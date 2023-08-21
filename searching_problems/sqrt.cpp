#include<bits/stdc++.h>
using namespace std;

int square_root_integer(int n){
        int s = 0;
        int e = n;
        long long int ans = -1;
        long long int mid = s + (e-s)/2;
        while( s <= e){
            if (mid * mid == n){
                return mid;
            } else if (mid * mid < n ){
                ans = mid;
                s = mid + 1;
            } else {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }

    return ans;
    }

double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for (int i = 0; i < precision; i ++){
        factor = factor / 10;
        for ( double j = ans; j*j < n; j=j+factor){
            ans = j;
        }
    }

    return ans;
}



int main(){

    int n;

    cout << "Enter the number : " << endl;

    cin >> n;

    int tempSol = square_root_integer(n);

    cout << "Answer is : " <<  morePrecision(n, 3, tempSol) << endl;

    return 0;
}